#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;

int main1()
{
	int sum = 0;
	int n = 0;
	cin >> n;
	int length = 3 * n;
	deque<int> ans;

	for (int i = 0; i <length; i++)
	{
		int tmp = 0;
		cin >> tmp;
		ans.push_back(tmp);
	}

	sort(ans.begin(),ans.end());

	for (int i = 0; i < n; i++)
	{
		ans.pop_back();
		sum += ans.back();
		ans.pop_back();
	}

	cout << sum;
	system("pause");
	return 0;
}