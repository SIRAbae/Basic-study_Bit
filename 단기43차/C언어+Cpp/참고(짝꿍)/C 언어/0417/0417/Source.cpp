//source.cpp
#include <iostream>
using namespace std;

#include "app.h"

int main()
{
	app app1;

	app1.init();
	app1.run();
	app1.exit();

	return 0;
}