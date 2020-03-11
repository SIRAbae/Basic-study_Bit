/*�ؾ�� ����� �ؾ Ʋ => ���ø�(������ ������ �Լ��� Ŭ������ ����)
STL������ container(������ ������ ������ ������ �ִ� ��,������ �����)
�ݺ���, �˰����Լ��� ������
�迭 ������ �ڷᱸ�� ���� => vector(�迭�� ���)��� �����̳� ex) vi.begin();=> �迭�� ù��° �ε���
Ŭ�����ȿ� Ŭ������ ���ǵ� �� �ִ� 'A::B b;' �ܺο��� ������ AŬ�����ȿ� �ִ� B��� Ŭ�����̴�
class A { class B { } }
*/

#include <iostream>
#include <vector> //�迭 �ڷᱸ��
#include <algorithm> // sort �Լ�
using namespace std;

void exam1()
{
	//int Ÿ���� �����ϴ� vector �����̳ʸ� ����� ���
	vector<int> vec;

	//����
	vec.push_back(10);	//0��°�� 10�� ����
	vec.push_back(20);	//1��°�� ����
	vec.push_back(30);	//2��°�� ����
	vec.push_back(40);	//3��°�� ����
	vec.push_back(50);	//4��°�� ����

	//�ݺ���(iterator)
	vector<int>::iterator itr = vec.begin();
	cout << *itr << endl;		//10
	itr = itr + 2;
	cout << *itr << endl;		//30 itr�� �ּҶ�� �����ض�
}

void exam2()
{
	//char Ÿ���� �����ϴ� vector �����̳ʸ� ����� ���
	vector<char> vec;

	//����
	vec.push_back('a');	//0��°�� a�� ����
	vec.push_back('b');	//1��°�� ����
	vec.push_back('c');	//2��°�� ����
	vec.push_back('d');	//3��°�� ����
	vec.push_back('e');	//4��°�� ����

						//�ݺ���(iterator)
	vector<char>::iterator itr = vec.begin();
	cout << *itr << endl;		//a
	itr = itr + 2;
	cout << *itr << endl;		//c itr�� �ּҶ�� �����ض�
}

//������ �����ϴ� vector�����̳� �����ϰ�
//�����ϰ� ���� 100�� �����ҷ�
void exam3()
{
	vector<int> vec; //������ ������ �� �ִ� ���� �����̳ʰ� �������

	//���� 100�� ����
	srand((unsigned int)time_t(0)); //������ ���� �ʱ�ȭ
	for (int i = 0; i < 100; i++)
	{
		vec.push_back(rand());
	}

	//����
	sort(vec.begin(), vec.end());	//#include <algorithm>

	//���
	vector<int>::iterator begin = vec.begin();
	vector<int>::iterator end = vec.end();
	for (; begin != end; begin++)
	{
		int value = *begin;
		cout << value << "\t";
	}
	cout << endl;
}

int main()
{
	//exam1();
	//exam2();
	exam3();
	return 0;
}