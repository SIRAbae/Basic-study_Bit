#include <iostream>
using namespace std;

class position
{
private:
	int n1;
	int n2;
	char ch;
public:
	position(int num1, int num2, char c)
	{
		n1 = num1;
		n2 = num2;
		ch = c;
	}
	position(int num1, int num2)
	{
		n1 = num1;
		n2 = num2;
		ch = '*';
	}
	position(char c)
	{
		n1 = 0;
		n2 = 0;
		ch = c;
	}
	void OutPosition()
	{
		cout << n1 << "/" << n2 << "/" << ch << endl;
	}
};

int main()
{
	position Here(30, 10,'A');
	position There(40,5);
	position Where('K');

	Here.OutPosition();		//30/10/A
	There.OutPosition();	//40/5/*
	Where.OutPosition();	//0/0/K
	return 0;
}