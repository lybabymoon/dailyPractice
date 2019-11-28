#include <iostream>
using namespace std;

int freeDrinking(int num)
{
	int sum = 0;

	sum = num / 2;

	return sum;
}

int main1()
{
	int num = 0;
	while (cin >> num && num != 0)
	{
		cout << freeDrinking(num) << endl;
	}
	return 0;
}