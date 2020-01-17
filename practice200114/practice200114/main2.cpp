#include <iostream>
#include <vector>
using namespace std;

int pivotIndex(vector<int>& nums)
{
	int count = 0;
	int sum1 = 0;
	int sum2 = 0;

	while (count < nums.size() - 1)
	{
		sum1 = 0;
		sum2 = 0;
		for (int i = 0; i < count; i++)
		{
			sum1 += nums[i];
		}

		for (int j = count + 1; j < nums.size()-1; j++)
		{
			sum2 += nums[j];
		}

		if (sum1 == sum2)
		{
			return count;
		}

		++count;
	}

	return -1;
}

int pivotIndex2(vector<int>& nums)
{
	int sum = 0;
	int leftsum = 0;
	for (auto & i : nums)
	{
		sum += i;
	}

	for (int i = 0; i < nums.size(); i++)
	{
		if (2 * leftsum == nums[i] + sum)
		{
			return i;
		}

		leftsum += nums[i];
	}

	return -1;
}
int main()
{

	system("pause");
	return 0;
}