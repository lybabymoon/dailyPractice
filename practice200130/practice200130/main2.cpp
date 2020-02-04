#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> subsets(vector<int>& nums) {
	vector<vector<int>> ans;
	ans.push_back({});
	for (int i = 0; i < nums.size(); i++)
	{
		int cnt = ans.size();
		for (int j = 0; j < cnt; j++)
		{
			vector<int> tmp = ans[j];
			tmp.push_back(nums[i]);
			ans.push_back(tmp);
		}
	}
	return ans;
}

int main()
{
	vector<int> nums{ 1, 2, 3 };
	subsets(nums);
	return 0;
}