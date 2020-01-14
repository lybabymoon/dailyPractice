#include <iostream>
#include <string>
#include <vector>
using namespace std;

void rotate(vector<int>& nums, int k)
{
	int len = nums.size();
	vector<int> ans(nums.size(), 0);
	for (int i = 0; i < nums.size(); i++)
	{
		ans[(i + k) % len] = nums[i];
	}
	nums = ans;
}

int main()
{
	
	return 0;
}