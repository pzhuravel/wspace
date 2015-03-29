//============================================================================
// Name        : LR3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
//	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	float sum = 0;
	for(int i=1;i<=10;i++)
	{
		sum+=i;
	}
	printf("Sum is %3.2f",sum);

	return 0;
}
