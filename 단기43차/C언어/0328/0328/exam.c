#include <stdio.h>
#include "exam.h"

/*
char ch  => char , 1�� 1byte
char* ch2 => char* , 1�� 4byte
char arr1[5] => char , 5�� 4byte
char *arr2[5] => char* , 5�� 20byte  arr2�������� �������� �����ڰ� ����, �켱������ �迭�������̴�(���ȣ) �����Ϳ����ڰ� �ƴ϶�..
*/
void exam1()
{
	char ch1; // char, 1�� 1byte
	char* ch2; // char*, 1�� 4byte
	char arr1[5]; // char, 5�� 4byte
	char *arr2[5]; // char*, 5�� 20byte
	//=======================================
	//ch1�� �ּ� 100, ch2�� 104, arr1�� 108, arr2�� 113(5����Ʈ�� �ö�)
	ch1 = 'A';	//'A'
	ch2 = &ch1;	//100

	arr1[0] = 'B';	//'B'
	arr1[1] = 'C';	//'C'

	arr2[0] = &ch1;	//100 //ch1�� 0�� �ּ�(&)�� �پ����Ƿ� 1��
	//arr2[1] = &ch2; //ch2�� 1�� �ּ�(&)�� �پ����Ƿ� 2��
	arr2[1] = ch2;	//100 &ch1
	arr2[3] = arr1;	//108

	printf("%c\n", ch1);		//'A' 0��
	printf("%c\n", *ch2);		//'A' 0��
	printf("%c\n", arr1[1]);	//'C' 0��
	//printf("%c\n", arr2[0]);	//�ּҰ��� ��ȯ, arr2�� 2��
	printf("%c\n", *(arr2[0]));	//'A'

}

/*
2�����迭�� ������
*/
void exam2()
{
	//2���� �ٽ��� ���� ũ���̴�
	int arr[2][3] = { {1,2,3},
					   {4,5,6} };
	int (*pp)[3];

	pp = arr; 
	printf("%d, %d\n", arr + 1, pp + 1);				
}

/*
�Լ��� �������� å p106�� ��
1. Call by value : 
2. Call by address(reference) : 
*/
void foo(int num, int *num1)  //()�ȿ��� �Ű����� 2���� ����Ǿ���� int�� 0�� int�� 1��
{
	int num2 = num;

	printf("foo:num2 => %d\n", num2);   // 10�� ���´�

	*num1 = 15;  //0���� 0�� ���������� ����
}

void exam3()
{
	int num = 10;
	foo(num, &num); //Call by value, Call by address

	printf("%d\n", num);  //15
}
/*
void add(int num1, int num2, int *result)
{
	*result = num1 + num2;
}
void exam4()
{
	int num1 = 10;
	int num2 = 20;
	int result;
	add(num1, num2, &result);

	printf("%d + %d = %d\n", num1, num2, result);
	//10 + 20 = 30
}
*/

void add(int num1, int num2, int *result)
{
	*result = num1 + num2;
}
void sub(int num1, int num2, int *result)
{
	*result = num1 - num2;
}
void mul(int num1, int num2, int *result)
{
	*result = num1 * num2;
}
void exam5()
{
	int num1 = 10;
	int num2 = 20;
	int result;
	add(num1, num2, &result);
	printf("%d + %d = %d\n", num1, num2, result);
	//10 + 20 = 30
	sub(num1, num2, &result);
	printf("%d - %d = %d\n", num1, num2, result);
	//10 - 20 = -10
	int arr[3] = { 10,20,0 };
	mul(arr[0], arr[1], &arr[2]);
	printf("%d * %d = %d\n", arr[0], arr[1], arr[2]);
	//10 * 20 = 200
}