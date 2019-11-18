#include<iostream>
#include<vector>
using namespace std;

class Board {
public:
	bool checkWon(vector<vector<int>> board) {
		int sum = 0;
		for (int i = 0; i < 3; i++)
		{
			sum = 0;
			for (int j = 0; j < 3; j++)
			{
				sum += board[i][j];
			}
			if (sum == 3)
			{
				return true;
			}
		}

		for (int i = 0; i < 3; i++)
		{
			sum = 0;
			for (int j = 0; j < 3; j++)
			{
				sum += board[j][i];
			}
			if (sum == 3)
			{
				return true;
			}
		}

		if ((board[0][0] + board[1][1] + board[2][2]) == 3)
			return true;

		if ((board[0][2] + board[1][1] + board[2][0]) == 3)
			return true;

		return false;
	}
};

int main()
{
	vector<vector<int>> board(3, vector<int>(3, 0));

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> board[i][j];
		}
	}

	Board s1;
	s1.checkWon(board);
	system("pause");
	return 0;
}