#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findMinimum(int n, vector<int> left, vector<int> right) {
	int left_max = 0;
	int right_max = 0;
	int lmin = 27;
	int rmin = 27;
	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		if (left[i] * right[i] == 0)
		{
			sum += left[i] + right[i];
		}
		else
		{
			left_max += left[i];
			right_max += right[i];
			lmin = min(lmin, left[i]);
			rmin = min(rmin, right[i]);
		}
	}

	return sum + min(left_max - lmin + 1, right_max - rmin + 1) + 1;
}

int main()
{
	vector<int> left;
	vector<int> right;
	int n = 0;
	system("pause");
	return 0;
}