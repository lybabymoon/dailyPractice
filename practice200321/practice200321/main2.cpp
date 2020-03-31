#include <iostream>
using namespace std;
int  Fibonaci(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else if (n == 2)
	{
		return 2;
	}

	int f1 = 1;
	int f2 = 2;
	int f3 = 3;
	int count = 3;
	while (count <= n)
	{
		f3 = (f1 + f2)%1000000;
		f1 = f2 % 1000000;
		f2 = f3 % 1000000;
		count++;
	}

	return f3;
}
int main()
{

	int Arr[100001];
	int n = 0;
	Arr[0] = 1;
	Arr[1] = 1;
	for (int i = 2; i <= 100000; i++)
	{
		Arr[i] = Arr[i - 1] + Arr[i - 2];
		Arr[i] = Arr[i] % 1000000;
	}
	while (cin >> n)
	{
		cout << Arr[n] << endl;
	}
	return 0;
}