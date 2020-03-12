//exam.c
#include <stdio.h>
#include "exam.h"
#include <stdlib.h>
#include <time.h>

/*
�迭     arr�� +1��ŭ �̵��� �������� => arr[1]
*/
void exam1()
{
	//1. ���� 3���� ������ �� �ִ� �迭 ����
	int arr[3]; //�迭���� ����

	//2. �ʱ�ȭ(����)
	arr[0] = 10;
	scanf_s("%d", &arr[1]);
	arr[2] = arr[0] + arr[1];

	//3. ����(�迭�� ��� ����� ��) sum����
	int sum = 0;
	sum = arr[0] + arr[1] + arr[2];

	//4. ��� ���
	printf("%d\n", sum);
}

//�迭�� �ݺ���
//���� : 0~9 ������ ���� �߻���Ű�� �;�
void exam2()
{
	//���� �߻� �ʱ�ȭ
	srand((unsigned int)time(0));

	int arr[100];
	
	//���� : 0~9 ������ ��
	for(int i=0; i<10; i++)
	{
		printf("%d\n", rand()%10);
	}

	//���� : 1~10 ������ ��

	for (int i = 0; i<10; i++)
	{
		printf("%d\n", (rand() % 10) + 1);
	}
}

//�迭�� �ݺ���
void exam3()
{
	srand((unsigned int)time(0));
	
	int arr[100];

	//�迭 ������ ������ �ʱ�ȭ
	for (int i = 0; i < 100; i++)
	{
		arr[i] = rand() % 10;
	}

	//�迭 ������ ���, �迭 ��ȸ �ڵ�
	for (int i = 0; i < 100; i++)
	{
		//arr[i];
		printf("arr[%02d] = %d\n", i, arr[i]);
	}
}

/*
1. ���ڸ� 100�� ������ �迭 ������ ����
2. �迭�� �빮�ڸ� �����ϰ� ����
3. ����� ��� ���ڸ� ȭ�鿡 ����� �ϴµ�
   �� �ٿ� 10���� ���
   ex) A C D E A E Z ...
       T Q ...
*/
void exam4()
{
	srand((unsigned int)time(0));

	char arr[100];

	for (int i = 0; i < 100; i++)
	{
		arr[i] = rand() % 26 + 'A';
	}

	for (int i = 0; i < 100; i++)
	{
		printf("%c ", arr[i]);
		if ((i + 1) % 10 == 0)
			printf("\n");
	}
}

/*���� 1000���� ������ �� �ִ� �迭 ����
�ҹ��ڷ� ���� �ʱ�ȭ
�� �ٿ� 20���� ���
����ڷκ��� ���� �Ѱ��� �Է� �޾ƶ�
�迭�� ����� ���� �� �ش� ������ ������ ���*/
void exam5()
{
	srand((unsigned int)time(0));

	char arr[1000];

	for (int i = 0; i < 1000; i++)
	{
		arr[i] = rand() % 26 + 'a';
	}

	for (int i = 0; i < 1000; i++)
	{
		printf("%c ", arr[i]);
		if ((i + 1) % 20 == 0)
			printf("\n");
	}

	char a;
	printf("���� �ϳ� �Է� : ");
	scanf_s("%c", &a, sizeof(char));

	int count = 0;
	for (int i = 0; i < 1000; i++)
	{
		if (arr[i] == a)
		{
			count++;
		}
	}

	printf("%c ���ڴ� �� %d��\n", a, count);
}

void exam6()
{
	int arr[3] = { 1, 2, 3 };

	//arr�� +1��ŭ �̵��� ������ 100 + 1 => 104, +2 => 108 
	arr[1];

	//arr�ּ� ���
	printf("%d\n", arr); //1703452 => �迭�� �����ּ�

	//arr+1
	printf("%d\n", arr + 1); //1703456 4����Ʈ

	//arr�� +1��ŭ �̵��� ������
	printf("%d\n", arr[1]); //2

	printf("%d\n", *(arr + 1)); //arr�� +1 �ѵ� ������  2
}

void exam7()
{
	int arr[5] = { 1,2,3,4,5 }; //100�̶� ����
	int *parr;

	parr = arr; //????? L value �� R value�� 1���� ���� ���ȣ�� *

	printf("%d\n", parr + 2); //������ ��ȯ�� �����Ƿ� parr + 2 �� �ּҰ��� ����    108�� ���´�
	printf("%d\n", (*parr) + 2); //0���̹Ƿ� ���� ���´�  1 + 2 = 3�� ���´�
	printf("%d, %d\n", arr[2], *(arr + 2)); //arr�� +2��ŭ �̵��� ������    3�� ���´�.
	//===============================================
	int *parr1;
	parr1 = arr + 2; //�Ѵ� 1�� �̹Ƿ� �´� ����  108�� ����

	printf("%d\n", parr1[0]);   //3
	printf("%d\n", parr1[-2]);   //?  -2�� �̵��� �����̰� ������ ������ �ƴ�, -2��ŭ �̵�      1�� ����
}