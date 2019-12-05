#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<int>> findMinRount(vector<vector<int>> & board, int m, int n)
{
	vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
	
	int x = m - 1;
	int y = n - 1;

	for (int j = 1; j < m; j++)
	{
		if (board[0][j - 1] == 0 && board[0][j] != 1)
			board[0][j] = 0;
		else if (board[0][j - 1] == 1)
			board[0][j] = 1;
		else
		{
			continue;
		}
	}

	for (int i = 1; i < n; i++)
	{
		if (board[i - 1][0] == 0 && board[i][0]!=1)
			board[i][0] = 0;
		else if (board[i - 1][0] == 1)
			board[i][0] = 1;
		else
		{
			continue;
		}
	}

	
	for (int i = 1; i < m; i++)
	{
		for (int j = 1; j < n; j++)
		{
			if (board[i][j] == 1)
			{
				continue;
			}
			else if (board[i - 1][j] == 1 && board[i][j - 1] == 1)
			{
				board[i][j] = 1;
			}
			else
			{
				board[i][j] = 0;
			}
		}
	}

	dp[0][0] = 1;
	for (int i = 1; i < n; i++)
	{
		if (board[i][0] == 1)
			dp[i][0] = INT_MAX;
		else if (board[i][0] == 0)
			dp[i][0] = dp[i - 1][0] + 1;
	}

	for (int j = 1; j < m; j++)
	{
		if (board[0][j] == 1)
			dp[0][j] = INT_MAX;
		else if (board[j][0] == 0)
			dp[0][j] = dp[0][j - 1] + 1;
	}
	for (int i = 1; i < m; i++)
	{
		for (int j = 1; j < n; j++)
		{
			if (board[i][j] == 1)
			{
				dp[i][j] = INT_MAX;
			}
			else
			{
				dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + 1;
			}
		}
	}

	int length = dp[m - 1][n - 1];

	vector <vector<int>>ans(length+1, vector<int>(2+1, 0));


	ans[length-1][0] = m - 1;
	ans[length-1][1] = n - 1;
	ans[0][0] = 0;
	ans[0][1] = 0;
	length--;
	while (length>0)
	{
		if (x == 0 && y!=0)
		{
			length--;
			y = y - 1;
			ans[length][0] = x;
			ans[length][1] = y;
		}
		else if (y == 0 && x!=0)
		{
			length--;
			x = x - 1;
			ans[length][0] = x;
			ans[length][1] = y;
		}
		else if (dp[x][y - 1] <= dp[x - 1][y])
		{
			length--;
			y = y - 1;
			ans[length][0] = x;
			ans[length][1] = y;
		}
		else if (dp[x][y - 1] > dp[x - 1][y])
		{
			length--;
			x = x - 1;
			ans[length][0] = x;
			ans[length][1] = y;
		}
	}
	return ans;
}
int main()
{
	int m, n;
	
	while (cin >> m >> n)
	{
		vector<vector<int>> board(m+1,vector<int>(n+1,0));
		vector<vector<int>> ans;
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				int tmp;
				cin >> tmp;
				board[i][j] = tmp;
			}
		}
		ans = findMinRount(board, m, n);
		for (int i = 0; i < ans.size()-1; i++)
		{
			cout << "(" << ans[i][0] << "," << ans[i][1] << ")" << endl;;
		}
	}
	
	system("pause");
	return 0;
}