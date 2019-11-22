#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
using namespace std;

bool judgeIsLuckyBag(vector<int> & cur, int start, int end)
{
	int sum1 = 0, sum2 = 1;
	for (int i = start; i <= end; i++)
	{
		sum1 += cur[i];
		sum2 *= cur[i];
	}

	return sum1>sum2 ? true : false;
}
int findLuckyBag(vector<int> & ans,int n)
{
	int pos = 0;
	int count_sum = 0;

	while (pos<n){
		for (int i = pos; i < n; i++)
		{
			if (judgeIsLuckyBag(ans, pos, i))
			{
				count_sum++;
			}
		}
		pos++;
	}
	return count_sum;
}
int main1()
{
	int n = 0;
	vector<int> ans;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int tmp = 0;
		cin >> tmp;
		ans.push_back(tmp);
	}

	cout << findLuckyBag(ans,n);
	system("pause");
	return 0;
}