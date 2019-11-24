#include <iostream>
using namespace std;

int findNumOf1(int num)
{
	int count = 0;
	while (num)
	{
		num = (num & (num - 1)) >> 1;
		count++;
	}
	return count;
}
int main1()
{
	int num = 0;
	while (cin >> num)
	{
		cout << findNumOf1(num) <<endl;
	}

	system("pause");
	return 0;
}