#include <iostream>
using namespace std;
class student
{
	int number;
	char name[20];
	int score;
	char ch;

public:
	student(int n)
	{
		number = n;
		strcpy_s(name, sizeof(name), " ");
		score = -1;
		ch = 'F';
	}
	void SetName(char *c)
	{
		strcpy_s(name, sizeof(name), c);
	}
	void SetScore(int s)
	{
		score = s;
		if (s > 90)
		{
			ch = 'A';
		}
		else if (s > 80)
		{
			ch = 'B';
		}
		else if (s > 70)
		{
			ch = 'C';
		}
		else
			ch = 'F';
	}
	void print()
	{
		cout << " �й� : " << number << endl;
		cout << " �̸� : " << name << endl;
		cout << " ���� : " << score << endl;
		cout << " ���� : " << ch << endl;
	}
};
int main()
{
	student kim(1000);		//�й� ����. / ���ڿ� "", ���� -1, ���� 'F' �ʱ�ȭ
	kim.print();			
	kim.SetName("ȫ�浿");	//���޵� �̸� ����
	kim.print();				
	kim.SetScore(99);		//���� ����. ������ ���� ������ �ʱ�ȭ	
							//���� 90�̻� A, 80�̻� B, 70�̻� C, 69�̻� F
	kim.print();

	return 0;
}