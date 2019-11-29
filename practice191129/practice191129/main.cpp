#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int getMaxCommonDivisor(int num1, int num2)
{
	if (num1 < num2)
	{
		swap(num1, num2);
	}

	for (int i = num2; i>0; i--)
	{
		if (num1%i == 0 && num2%i == 0)
		{
			return i;
		}
	}
}

int getCapacityValue(vector<int> & ans, int a)
{
	int c = a;
	for (int i = 0; i < ans.size(); i++)
	{
		if (ans[i] <= c)
		{
			c = c + ans[i];
		}
		else if (ans[i] > c)
		{
			c = c + getMaxCommonDivisor(c, ans[i]);
		}
	}

	return c;
}

int main1()
{
	int a = 0;
	int n = 0;
	

	while (cin >> n >> a)
	{
		vector<int> ans(n,0);
		for (int i = 0; i < n; i++)
		{
			int tmp;
			cin >> tmp;
			ans.push_back(tmp);
		}

		cout << getCapacityValue(ans, a) << endl;
	}
	return 0;
}