#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
{
	int p = m-- + n-- - 1;
	while (m >= 0 && n >= 0)
	{
		nums1[p--] = nums1[m--] > nums2[n--] ? nums1[m--] : nums2[n--];
	}

	while (n >= 0)
	{
		nums1[p--] = nums2[n--];
	}
}
int main()
{
	int m = 3, n = 3;
	vector<int> nums1{ 1, 2, 3, 0, 0, 0 };
	vector<int> nums2{ 2, 5, 6 };
	merge(nums1, m, nums2, n);
	return 0;
}