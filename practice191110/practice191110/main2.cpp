#include<iostream>
#include<vector>
using namespace std;

int maxSubArray(vector<int>& nums) {
	int maxprev = nums[0];     //记录如果取当前数字时最大为多少
	int sum = nums[0];     //记录最大的值
	for (int i = 1; i < nums.size(); i++)
	{
		if (maxprev >= 0)      //如果取当前数字时最大值为正数则将当前值累加
		{
			maxprev += nums[i];
		}
		else
		{
			maxprev = nums[i];  //如果取当前数字时最大值为负数 则将maxprev与当前值相等
		}

		if (sum < maxprev)    //如果记录的最大值 小于取当前数字时的最大值 则将sum = maxprev
		{
			sum = maxprev;
		}
	}
	return sum;
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

	cout << maxSubArray(ans);
	system("pause");
	return 0;
}