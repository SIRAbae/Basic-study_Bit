#include <iostream>
using namespace std;

class Date
{
	int year;
	int month;
	int day;
	bool isequals;
public:
	Date(int y, int m, int d)
	{
		year = y;
		month = m;
		day = d;
	}

	void print()
	{
		cout << year << "/" << month << "/" << day << endl;
	}
	bool cmp(Date ar2)
	{
		if (year == ar2.year && month == ar2.month && day == ar2.day)
			return true;
		else
			return false;
		//인자를 일일이 비고해서 출력 
		// 비교 방법 학습

	}


};
int main()
{
	Date arr1(2019, 4, 11);
	Date arr2(2019, 4, 11);

	arr1.print();	//2019/4/11	
	arr2.print();	//2019/4/11	

	bool isequals = arr1.cmp(arr2);
	cout << isequals << endl;

	return 0;
}