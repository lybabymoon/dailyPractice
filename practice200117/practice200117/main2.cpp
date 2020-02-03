#include <iostream>
#include <vector>

using namespace std;

vector<int> searchRange(vector<int>& nums, int target)
{
	vector<int> ans(2, -1);
	if (nums.empty())
	{
		return ans;
	}
	int left = 0;
	int right = nums.size()-1;
	
	while (left < right)
	{
		int mid = left + (right - left) / 2;
		if (nums[mid] >= target)
		{
			right = mid;
		}
		else
		{
			left = mid + 1;
		}
	}

	if (nums[left] != target)
	{
		return ans;
	}
	ans[0] = left;
	right = nums.size() - 1;

	while (left < right)
	{
		int mid = left + (left + right) / 2;
		if (nums[mid] <= target)
		{
			left = mid + 1;
		}
		else
		{
			right = mid;
		}
	}
	ans[1] = right;
	return ans;
}
int main()
{

	return 0;
}