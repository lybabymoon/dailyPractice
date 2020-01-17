#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int thirdMax(vector<int>& nums) 
{
	if (nums.size() == 1)
	{
		return nums[0];
	}
	sort(nums.begin(), nums.end());
	int count = 1;
	for (int i = nums.size() - 2; i >= 0; i--)
	{
	
		if (nums[i] != nums[i + 1])
		{
			count++;
		}
		if (count == 3)
		{
			return nums[i];
		}
	}

	return nums[nums.size() - 1];
}

int main()
{
	vector<int> ans{ 1, 3, 2 };
	thirdMax(ans);
	return 0;
}