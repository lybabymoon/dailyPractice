#include <iostream>
#include <vector>
using namespace std;

vector<int> getDivisor(int num)
{
	vector<int> ans;
	for (int i = 1; i < num; i++)
	{
		if (num % i == 0)
		{
			ans.push_back(i);
		}
	}
	return ans;
}

bool judgePerfectNum(vector<int> ans,int num)
{
	int sum = 0;
	for (int i = 0; i < ans.size(); i++)
	{
		sum += ans[i];
	}
	if (sum == num)
		return true;
	else
		return false;
}

int countPerfectNum(int n)
{
	vector<int> ans;
	int count = 0;
	for (int i = 3; i <= n; i++)
	{
		ans = getDivisor(i);
		if (judgePerfectNum(ans, i))
			count++;
	}
	return count;
}

int main1()
{
	int n = 0;
	while(cin >> n)
	cout << countPerfectNum(n) << endl;
	system("pause");
	return 0;
}