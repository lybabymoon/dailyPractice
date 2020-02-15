#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool judgeIs24(vector<int> n)
{
	int n1 = 0;
	int n2 = 0;
	int n3 = 0;
	
	for (int i = 0; i < 4; i++)
	{
		if (i == 0)
		{
			n1 = n[0] + n[1];
		}
		else if (i == 1)
		{
			n1 = n[0] - n[1];
		}
		else if (i == 2)
		{
			n1 = n[0] * n[1];
		}
		else if (i == 3)
		{
			n1 = n[0] / n[1];
		}

		for (int j = 0; j < 4; j++)
		{
			if (j == 0)
			{
				n2 = n[2] + n1;
			}
			else if (j == 1)
			{
				n2 = n1 - n[2];
			}
			else if (j == 2)
			{
				n2 = n[2] * n1;
			}
			else if (j == 3)
			{
				n2 = n1 / n[2];
			}

			for (int x = 0; x < 4; x++)
			{
				if (x == 0)
				{
					n3 = n2 + n[3];
				}
				else if (x == 1)
				{
					n3 = n2 - n[3];
				}
				else if (x == 2)
				{
					n3 = n2 * n[3];
				}
				else if (x == 3)
				{
					n3 = n2 / n[3];
				}

				if (n3 == 24)
				{
					return true;
				}
			}
		}
	}
	
	return false;
}
int main()
{
	vector<int> nums;
	for (int i = 0; i < 4; i++)
	{
		int tmp = 0;
		cin >> tmp;
		nums.push_back(tmp);
	}
	
	sort(nums.begin(), nums.end());
	//for (int i = 0; i < 4; i++)
	//{
	//	for (int j = 0; j < 4; j++)
	//	{
	//		for (int x = 0; x < 4; x++)
	//		{
	//			
	//		}
	//	}
	//}
	cout << judgeIs24(nums) << endl;
	return 0;
}