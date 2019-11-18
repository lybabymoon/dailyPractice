#include <iostream>
#include <vector>
using namespace std;

//int max_cur_bit1(int n)
//{
//
//	int max = 0;
//
//	while (n)
//	{
//		int count = 0;
//		while (n & 1 == 1)
//		{
//			count++;
//			n = n >> 1;
//		}
//		//出来了，说明1不连续了
//		//比较和之前的max,大的话就更新max
//		max = count > max ? count : max;
//		n = n >> 1;
//	}
//	return max;
//}

int main()
{
	vector<int> s1;
	int n = 0;
	int max = 0;
	int n2 = 0;
	int count = 0;
	cin >> n;
	n2 = n;
	while (n)
	{
		int tmp = n % 2;
		s1.push_back(tmp);
		n = n / 2;
	}
	for (int i = 0; i < s1.size(); i++)
	{

		if (s1[i] == 1)
			++count;
		if (s1[i] == 0)
			count = 0;
		if (count > max)
			max = count;
	}

	cout << max << endl;
	//cout << max_cur_bit1(n2) << endl;
	system("pause");
	return 0;
}