//����.cpp
//namespace
//������ �߰��Ͽ� �Ʒ� �ڵ尡 ����ǵ��� �� ��
#include <iostream>
using namespace std;
/*
void foo()
{
	printf("global foo()\n");
}
namespace one
{
	void foo() { printf("namespace one::foo()\n"); }
}

namespace two
{
	void foo() { printf("namespace two::foo()\n"); }
}


int main()
{
	foo();			//global foo()
	one::foo();		//namespace one::foo()
	two::foo();		//namespace two::foo()

	return 0;
}
*/

//������ 2���� ��ȯ�ϴ� swap �Լ��� ���۷����� ����ؼ� �����Ͻÿ�
/*
void swap(int& n1, int& n2);

int main()
{
	int num = 10, num1 = 20;

	swap(num, num1);
	cout << num << " " << num1 << endl;
	return 0;
}

void swap(int& n1, int& n2)
{
	n1 = 20;
	n2 = 10;
}
*/


//function overloading
//�Ʒ� �ڵ尡 ���������� ������ �� �ֵ��� �Լ� �����ε��� �̿��Ͽ� �����Ͻÿ�
/*
int foo(int n1, int n2, int n3, int n4)
{
	cout << n1 << ":" << n2 << ":" << n3 << ":" << n4 << endl;

	return 0;
}
int foo(int n1, int n2, int n3)
{
	cout << n1 << ":" << n2 << ":" << n3 << endl;

	return 0;
}
int foo(int n1, int n2)
{
	cout << n1 << ":" << n2 << endl;

	return 0;
}
int foo(int n1)
{
	cout << n1 << endl;

	return 0;
}
int main()
{
	foo(10, 20, 30, 40); //10 : 20 : 30 : 40
	foo(10, 20, 30); //10 : 20 : 30
	foo(10, 20); //10 : 20
	foo(10); //10

	return 0;
}
*/



//default parameter
//�Ʒ� �ڵ尡 ���������� ������ �� �ֵ��� �⺻���� �̿��Ͽ� �����Ͻÿ�
/*
void foo(int n1 = 0, int n2 = 1, int n3 = 2, int n4 = 3)
{
cout << n1 << ":" << n2 << ":" << n3 << ":" << n4 << endl;
}

int main()
{
foo(10, 20, 30, 40);	//10 : 20 : 30 : 40
foo(10, 20, 30);		//10 : 20 : 30 : 3
foo(10, 20);			 //10 : 20 : 2 : 3
foo(10);				//10 : 1 : 2 : 3

return 0;
}
*/

//Ű����κ��� �ҹ��ڸ� �Է� �޾� �빮�ڷ� ��ȯ�Ͽ� ����ϼ���
//�Է�(�ҹ���)a => ��ȯ(�빮��)A

/*
char change(char ch);

int main()
{
	char ch;

	cout << "�Է�(�ҹ���) : ";
	cin >> ch;

	char result = change(ch);

	cout << "��ȯ(�빮��) : " << result << endl;
	return 0;
}
char change(char ch)
{
	return ch - ('a' - 'A');
}
*/

//���� 5���� �Է� �迭�� �Է� �ް�, �� ���� ���ϴ� ���
//�迭�� ���� �޾� �� ���� ����� ��ȯ�ϴ� �Լ�
// �Է�1 : 10 �Է�2 : 3 �Է�3 : 20 �Է�4 : 5 �Է�5 : 7
// >>���� ��� : 45

char change(char ch);

int main()
{
	int num1;
	int num2;
	int num3;
	int num4;
	int num5;

	cout << "�Է�1 : ";
	cin >> num1;

	cout << "�Է�2 : ";
	cin >> num2;

	cout << "�Է�3 : ";
	cin >> num3;

	cout << "�Է�4 : ";
	cin >> num4;

	cout << "�Է�5 : ";
	cin >> num5;

	char result = change(ch);

	cout << "��ȯ(�빮��) : " << result << endl;
	return 0;
}
char change(char ch)
{
	return ch - ('a' - 'A');
}