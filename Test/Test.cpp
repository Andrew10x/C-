#include <iostream>
using namespace std;
// Version3

int main()
{
	int num; int temp;
	for (int i = 1; i <= 100; ++i)
	{
		
		temp = i; num = 0;
		while (temp)
		{
			num = num * 10 + (temp % 10);
			

			temp /= 10; cout << "   temp = " << temp << endl;
		}
		if (num == i) cout << i << endl;
		system("pause");
	} system("pause");
}
	