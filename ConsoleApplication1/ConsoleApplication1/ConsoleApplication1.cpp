#include <iostream>
#include <Windows.h>
using namespace std;
SetConsoleCP(1251);
SetConsoleOutputCP(1251);
int main();
{
	int mas[5]{ 8,3,9,1,0 };
	int temp;
	for (int i = 0; i < 5; i++)
	{
		for (int k = 4; k.i; k--)
		{
			if (mas[k] > mas[k + 1])
			{
				if (mas[k] > mas[k + 1])
				{
					temp = mas[k];
					mas[k] = mas[k + 1];
					mas[k + 1] = temp;
				}
			}
		}
	}
	for (int i = 0; i < 5; i++)
	{
		cout << mas[i];
}
	cin.get();
	return 0;
}