#include<iostream>
#include <vector>
using namespace std;

int findTheFirstEvenNum(vector<int> cur)
{
	for (int i = 2; i < cur.size()-2; i++)
	{
		if (cur[i] % 2 == 0)
		{
			return i-1;
		}
	}

	return -1;
}

int findNum(int n)
{
	vector<vector<int>> ans(n,vector<int>(5));
	ans[0][0] = 0;
	ans[0][1] = 0;
	ans[0][2] = 1;
	ans[0][3] = 0;
	ans[0][4] = 0;

	for (int i = 1; i < n; i++)
	{	
		ans[i].resize(ans[i - 1].size() + 2);
		for (int j = 0; j < ans[i - 1].size() + 2; j++)
		{
			if (j == 0)
			{
				ans[i][j] = 0;
			}
			else if (j == 1)
			{
				ans[i][j] = 0;
			}
			else if (j>(ans[i - 1].size() - 1))
			{
				ans[i][j] = 0;
			}
			else
			{
				ans[i][j] = ans[i - 1][j] + ans[i - 1][j - 1] + ans[i - 1][j - 2];
			}
		}
	}

	return findTheFirstEvenNum(ans[n - 1]);
}
int main1()
{
	int n = 0;
	while (cin >> n)
	{
		cout << findNum(n);
	}

	system("pause");
	return 0;
}