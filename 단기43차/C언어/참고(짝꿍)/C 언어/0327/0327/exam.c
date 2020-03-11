#include <stdio.h>
#include "exam.h"
#include <string.h>

#define DATA_MAX 10   //�迭����� �Ϲ����� ������ٴ� ġȯ�Ͽ� �ִ� ���� ���ϴ�
//��ó����(#������) : ������ ���� �����ϴ� ����
//DATA_MAX�� 10���� ġȯ���ִ� ���� #define

void exam1()
{
	//��������
	int arr[DATA_MAX];

	//�ʱ�ȭ
	for (int i = 0; i < DATA_MAX; i++)
	{
		arr[i] = i + 1;
	}

	//���
	for (int i = 0; i < DATA_MAX; i++)
	{
		printf("%3d", arr[i]);
	}
	printf("\n");
}

#define EXAM2_BEGIN  void exam2() {
#define EXAM2_END	}
#define PRINT_HELLO printf("Hello World!\n");

EXAM2_BEGIN // >> void exam2() {  �� ġȯ
PRINT_HELLO // >> printf("Hello World!\n");  �� ġȯ
EXAM2_END // >>    }  �� ġȯ

//���ڿ� ���� �� �ʱ�ȭ
void exam3()
{
	//���ڿ��迭
	char arr1[] = "hello";  //6����Ʈ
	char arr2[] = { "hello" };  //6����Ʈ
	char arr3[] = { 'h','e','l','l','o', '\0' };  //6����Ʈ
	//==========================================================
	//���ڹ迭
	char arr4[] = { 'h','e','l','l','o' };  //5����Ʈ %s�� ����ϸ� �ȵ� �ι��ڰ� �������� �ʱ� ����

	//���ڿ��� 1������ ���·� �ٷ������
	printf("%s\n", arr1);  //%s ���ڿ� ��� ���� arr1�� 1��  ���ڿ��� ������ 1���̴�.
	printf("%c\n", arr1[0]);  //%c ���� ��� ���� arr1[0]�� 0��

}

void exam4()
{
	char msg1[] = "Hello";
	char *msg2 = "Hello"; //�Ѵ� exam4�� ���ؿ� ����ȴ�, 6����Ʈ�� ���� ����, char * >> char�� �ּҸ� ����
	//================================================================
	msg1[1] = 'E';
	printf("%s\n", msg1);
	msg2[1] = 'E';  //error
	printf("%s\n", msg2);

}

//���ڿ� ���Կ��� : strcpy_s
void exam5()
{
	int num1 = 10;
	int num2;
	num2 = num1;
	
	char arr1[5] = "abcd";
	char arr2[5]; // ="AAAA"; ��� ������� >> abcd�� ����
	//arr2 = arr1;  //? �迭�� �̸��� �ּҴ�, �迭�� L value�� ����� �� ����. �迭�� �̸��� ����ּ��̱� ������
	
	//arr2[0] = arr1[0];
	//arr2[1] = arr1[1]; //�ϳ� �ϳ� ������ �Űܾ��� �� ������ �� ������ strcpy_s�� �ִ�
	strcpy_s(arr2, sizeof(arr2), arr1);

	printf("%s\n", arr2);
}

//���ڿ� ���ϱ� : strcat_s
void exam6()
{
	char str1[] = "abcd";
	char str2[20] = "ABCD";
	strcat_s(str2, sizeof(str2), str1);
	printf("%s\n", str2);
}

//���ڿ� �� : strcmp
//ù��° ���ڿ��� �۳�? ������ ��ȯ
//ù��° ���ڿ��� ����? 0�� ��ȯ
//ù��° ���ڿ��� ũ��? ����� ��ȯ
void exam7()
{
	char str1[] = "ABCD";
	char str2[] = "ABc"; // 0 0 ����(�ƽ�Ű�ڵ�)

	if (strcmp(str1, str2) == 0)
	{
		printf("���ڿ��� ����\n");
	}
	
	if (str1 != str2)
	{
		printf("������ ���ϴ� ���ϱ�?\n");
	}
}

//���ڿ��� ���� : strlen() : byte ��ȯ
void exam8()
{
	char str1[20] = "1";
	char str2[20] = "ȫ1";

	printf("%dbyte, %dbyte\n",
		sizeof(str1), strlen(str1));  //20, 1(�ι��� ����)
	
	printf("%dbyte, %dbyte\n",
		sizeof(str2), strlen(str2));  //20, 3(�ѱ��� 2����Ʈ, �ι��� ����)
}