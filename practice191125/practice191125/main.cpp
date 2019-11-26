#include <iostream>
#include <vector>
using namespace std;

int getSum(int month)
{
	if (month == 1 || month == 2)
		return 1;
	vector<int> ans(month);
	int count = 2;
	ans[0] = 1;
	ans[1] = 1;
	while (count < month)
	{
		ans[count] = ans[count - 1] + ans[count - 2];
		count++;
	}

	return ans[month - 1];
}

int main1()
{
	int month = 0;

	while (cin >> month)
	{
		cout << getSum(month) << endl;
	}
	system("pause");
	return 0;
}