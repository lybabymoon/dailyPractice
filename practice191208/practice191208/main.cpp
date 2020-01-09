#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

class Solution {
public:
	/**
	*	正数数组中的最小不可组成和
	*	输入：正数数组arr
	*	返回：正数数组中的最小不可组成和
	*/
	int getFirstUnFormedNum(vector<int> arr, int len) {
		//int sum = 0;
		//int min = arr[0];
		//set<int> ans;

		//for (int i = 0; i < arr.size(); i++)
		//{
		//	ans.insert(arr[i]);
		//	sum += arr[i];
		//	if (arr[i] < min)
		//	{
		//		min = arr[i];
		//	}
		//}

		//for (int i = 0; i < arr.size(); i++)
		//{
		//	for (int j = i+1; j < arr.size(); j++)
		//	{
		//		int tmp = arr[i] + arr[j];
		//		ans.insert(tmp);
		//	}
		//}
		//
		//set<int>::iterator it = ans.begin();
		//int j = 0;
		//int i = 0;
		//for (i = min; i <= sum && j < ans.size(); i++)
		//{
		//	if (i != *it)
		//	{
		//		return i;
		//	}
		//	it++;
		//	j++;
		//}

		//return i + 1;


		set<int> S;
		vector<int> tmp;
		int mi = 0x7fffffff;
		for (int i = 0; i < len; ++i) {
			if (arr[i] <  mi) mi = arr[i];
			for (set<int>::iterator it = S.begin(); it != S.end(); ++it) tmp.push_back(*it + arr[i]);
			for (unsigned int i = 0; i < tmp.size(); ++i)S.insert(tmp[i]);
			S.insert(arr[i]);
			tmp.clear();
		}
		for (int i = mi;; ++i) if (S.find(i) == S.end()) return i;
		return -1;
	}
};

int main()
{
	Solution s1;
	vector<int> arr = { 3, 1, 2 };
	cout << s1.getFirstUnFormedNum(arr, arr.size()) << endl;
	system("pause");
	return 0;
}