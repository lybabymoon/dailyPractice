#include <iostream>
using namespace std;

bool judgePrime(int num)
{
	for (int i = 2; i < num; i++)
	{
		if (num%i == 0)
			return false;
	}
	return true;
}
int main()
{
	int num = 0;
	int a = 0;
	int b = 0;

	cin >> num;
		//if (num % 2 == 1)
		//{
		//	a = num / 2 + 1;
		//	b = num / 2;
		//}
		//else
		//{
		//	a = num / 2 + 1;
		//	b = num / 2 - 1;
		//}


	a = num / 2 + 1;
	b = num / 2 - 1;

		while (1)
		{
			if (judgePrime(a) && judgePrime(b))
			{
				cout << a << endl;
				cout << b << endl;
				break;
			}

			if (!judgePrime(a) || !judgePrime(b))
			{
				a = a + 1;
				b = b - 1;
			}
		}
	system("pause");
	return 0;
}