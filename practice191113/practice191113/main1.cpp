#include<iostream>
using namespace std;

int Fibonacci(int N)
{
	int f1 = 0;
	int f2 = 1;
	int fi = 0;
	int tmp1 = 0;
	int tmp2 = 0;

	if (N == 0)
		return 0;

	if (N == 1)
		return 0;

	if (N == 2)
		return 0;
	do
	{
		fi =f1 + f2;
		f1 = f2;
		f2 = fi;
	} while (fi < N);

	tmp1 = f1;
	tmp2 = fi;
	return  (tmp2 - N)>=(N - tmp1) ? (N - tmp1) : (tmp2 - N);
}
int main()
{
	int N = 0;
	cin >> N;

	cout << Fibonacci(N);
	system("pause");
	return 0;
}