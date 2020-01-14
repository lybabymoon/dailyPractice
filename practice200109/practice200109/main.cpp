#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int removeElement(vector<int>& nums, int val) {
	int k = 0;
	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[i] != val)
		{
			nums[k] = nums[i];
			k++;
		}
		else
		{
			nums[k] = nums[i];
		}
	}
	return k;
}
int main()
{
	vector<int> cur{ 3,3};
	int val = 2;
	removeElement(cur, val);
	return 0;
}