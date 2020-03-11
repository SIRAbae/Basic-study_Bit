//source.cpp
#include <iostream>
using namespace std;

#include "control.h"

int main()
{
	control con(10);
	//=====================================
	con.insertstudent();
	con.insertstudent();
	con.selectstudent();
	con.printallstudent();
	//=====================================
	con.updatestudent();
	con.printallstudent();
	//=====================================
	con.deletestudent();
	con.printallstudent();

	return 0;
}