﻿#include <iostream>
using namespace std;

int main()
{
	int num; int temp;
	for (int i = 1; i <= 100; ++i)
	{
		cout << "i = " << i;
		temp = i; num = 0;
		while (temp)
		{
			num = num * 10 + (temp % 10);
			cout << "   num = " << num;

			temp /= 10; cout << "   temp = " << temp << endl;
		}
		if (num == i) cout << i << endl;
		system("pause");
	} system("pause");
}
	