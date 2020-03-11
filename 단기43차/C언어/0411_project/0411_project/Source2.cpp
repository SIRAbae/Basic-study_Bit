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
		cout << " 학번 : " << number << endl;
		cout << " 이름 : " << name << endl;
		cout << " 점수 : " << score << endl;
		cout << " 학점 : " << ch << endl;
	}
};
int main()
{
	student kim(1000);		//학번 저장. / 문자역 "", 점수 -1, 학점 'F' 초기화
	kim.print();			
	kim.SetName("홍길동");	//전달된 이름 저장
	kim.print();				
	kim.SetScore(99);		//점수 저장. 점수에 따라 학점도 초기화	
							//학점 90이상 A, 80이상 B, 70이상 C, 69이상 F
	kim.print();

	return 0;
}