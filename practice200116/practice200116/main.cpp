#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
	vector<int> ans(2, -1);
	map<int, int> m;
	for (int i = 0; i < nums.size(); i++)
	{
		if (m.count(target - nums[i]) > 0)
		{
			ans[0] = m[target - nums[i]];
			ans[1] = i;
			break;
		}

		m[nums[i]] = i;
	}
	return ans;
}

int main()
{
	vector<int> ans{ 3, 2, 4 };
	twoSum(ans, 6);
	system("pause");
	return 0;
}