#include "pch.h"
#include<iostream>  
#include<ctime>
#include <windows.h>
#include <iomanip>
using namespace std;

int mult (int a, int b)
{
	int result;
	result = a * b;
	return result;
}

int main()
{
	int c;
	c = mult(4, 5);
	cout << c << endl;
	system("pause");
}