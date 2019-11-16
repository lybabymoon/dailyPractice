#include<iostream>
#include<vector>
using namespace std;

int findMaxRoad(int m, int n)
{
	if (!m || !n)
		return 0;
	vector<vector<int>> ans(m+1,vector<int>(n+1,0));
	for (int i = 0; i < m+1; i++)
	{
		ans[i][0] = 1;
	}

	for (int j = 0; j < n+1; j++)
	{
		ans[0][j] = 1;
	}
	
	for (int i = 1; i < m+1; i++)
	{
		for (int j = 1; j < n+1; j++)
		{
			ans[i][j] = ans[i - 1][j] + ans[i][j - 1];
		}
	}
	return ans[m][n];
}

int main()
{
	int a = 0;
	int b = 0;
	cin >> a >> b;

	cout << findMaxRoad(a, b)<<endl;
	system("pause");
	return 0;
}