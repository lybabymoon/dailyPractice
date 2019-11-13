#include<iostream>
#include<vector>
using namespace std;
int findTimes1(int num1, vector<int> &nums)
{
	int count = 1;
	for (int j = 1; j<num1 - 1; j++)
	{
		if (nums[j] > nums[j - 1] && nums[j] > nums[j + 1])
		{
			count++;
		}
		else if (nums[j] < nums[j - 1] && nums[j] < nums[j + 1])
		{
			count++;
		}
	}
	return count;
}
int main1()
{

	int num1 = 0;
	
	cout << "Please input your number:" << endl;
	cin >> num1;
	vector<int> nums(num1+1,0);
	if (num1 == 0)
		cout << 0 << endl;
	if (num1 == 1)
		cout << 1 <<endl;
	for (int i = 0; i<num1; i++)
	{
		cin >> nums[i];
	}
	cout << findTimes1(num1, nums);
	system("pause");
	return 0;
}