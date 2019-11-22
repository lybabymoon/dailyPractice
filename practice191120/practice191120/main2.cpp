#include <iostream>
#include <vector>
using namespace std;

vector<int> findMaxNum(int num)
{
	vector<int> ans;
	for (int i = num - 1; i > 1; i--)
	{
		if (num%i == 0)
			ans.push_back(i);
	}

	return ans;
}
int findMinStemp(int n, int m)
{
	vector<int> ans;
	vector<int> cur;
	int len = m - n + 1;
	//判断n是否有约数 如果没有返回-1
	if (findMaxNum(n).size() == 0)
		return -1;

	for (int i = 0; i < len; i++)
	{
		ans[i] = 0;
	}

	
}

int main1()
{
	int m = 0;
	int n = 0;
	cin >> n >> m;



	system("pause");
	return 0;
}