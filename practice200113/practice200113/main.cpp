#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> sortedSquares(vector<int>& A) {
	for (int i = 0; i < A.size(); i++)
	{
		A[i] = A[i] * A[i];
	}

	sort(A.begin(), A.end());
	return A;
}

vector<int> sortedSquares2(vector<int>& A)
{
	if (A.size() == 1)
	{
		A[0] = A[0] * A[0];
		return A;
	}
	vector<int> arr(A.size(), 0);
	int start = 0; // which >= 0 of the first one
	for (; A[start] < 0; ++start) arr[start] = A[start] * A[start];

	for (int i = 0, idxa = start - 1, idxA = start; i < A.size(); ++i)
	{

		if (idxa < 0)
		{
			A[i] = A[idxA] * A[idxA];
			++idxA;
			continue;
		}
		if (idxA >= A.size() || arr[idxa] <= A[idxA] * A[idxA])
		{
			A[i] = arr[idxa--];
		}
		else
		{
			A[i] = A[idxA] * A[idxA];
			++idxA;
		}

	}
	return A;
}
int main1()
{
	char a = 'ab';
	char b = '\101';
	int n = 2;
	n += n -= n*n;
	cout << n;
	return 0;
}