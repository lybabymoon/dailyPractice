#include <iostream>
#include <cmath>
using namespace std;
//
int main2()
{
	int n = 0;
	int count = 0;
	while (cin >> n)
	{
		count = 0;
		for (int i = 2; i <= sqrt(n); i++)
		{
			if (n%i == 0)
			{
			while (n%i == 0)
				n = n / i;
				count++;
			}
		}
		if (n != 1)
			count++;
		cout << count << endl;
	}
	system("pause");
	return 0;
}