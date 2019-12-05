#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int getMost(vector<vector<int>> board) {

	if (board.empty()) return 0;



	for (int i = 1; i < 6; ++i) {

		board[0][i] += board[0][i - 1];

		board[i][0] += board[i - 1][0];

	}



	for (int i = 1; i < 6; ++i){

		for (int j = 1; j < 6; ++j){

			board[i][j] += max(board[i - 1][j], board[i][j - 1]);

		}

	}

	return board[5][5];
}

int main1()
{
	vector<vector<int>> board;


	system("pause");
	return 0;
}