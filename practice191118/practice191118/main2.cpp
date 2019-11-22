#include <iostream>
using namespace std;

bool judgePrime(int num)
{
	for (int i = 2; i <=sqrt(num); i++)
	{
		if (num%i == 0)
			return false;
	}
	return true;
}

void findPrime(int & a, int & b)
{
    while (1)
	{
		if (judgePrime(a) && judgePrime(b))
		{
			cout << b << endl;
			cout << a << endl;
			break;
		}

		if (!judgePrime(a) || !judgePrime(b))
		{
			a = a + 1;
			b = b - 1;
		}
	}
}

int main()
{
	int num = 0;
	int a = 0;
	int b = 0;

	while (cin >> num){
		a = num / 2 + 1;
		b = num / 2 - 1;
		findPrime(a, b);
	}
	
	system("pause");
	return 0;
}