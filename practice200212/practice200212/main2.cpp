#include <iostream>
#include <vector>
using namespace std;

int main2()
{
	int n = 0;
	int max = 0;
	int prev = 0;
	cin >> n;
	vector<int> nums;
	while (n--)
	{
		int tmp;
		cin >> tmp;
		nums.push_back(tmp);
	}
	
	max = nums[0];
	prev = nums[0];
	for (int i = 1; i < nums.size(); i++)
	{
		if ((max + nums[i]) < nums[i])
		{
			max = nums[i];
		}
		else
		{
			max = max + nums[i];
		}

		if (prev < max)
		{
			prev = max;
		}
	}

	cout << prev <<endl;
	return 0;
}