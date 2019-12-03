#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//vector<int> quicklySort(vector<int> & ans)
//{
//	int flag = ans[0];
//	for (int i = 0; i < ans[i]; i++)
//	{
//		if (ans[i] > flag)
//		{
//			swap(ans[i],)
//		}
//	}
//}
int getValue(vector<int> gifts, int n)
{
	sort(gifts.begin(), gifts.end());
	vector<int> cur(gifts[n-1]+1,0);
	for (int i = 0; i < n; i++)
	{
		cur[gifts[i]]++;
	}

	for (int i = 0; i <= gifts[n - 1]; i++)
	{
		if (cur[i] > n / 2)
		{
			return i;
		}
	}

	return 0;
}

int main1()
{
	int n = 0;
	cin >> n;

	vector<int> ans(n, 0);
	for (int i = 0; i < n; i++)
	{
		int tmp;
		cin >> tmp;
		ans[i] = tmp;
	}

	cout << getValue(ans, n);
	system("pause");
	return 0;
}