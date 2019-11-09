//class Solution {
//public:
//	int MoreThanHalfNum_Solution(vector<int> numbers) {
//
//		int max = 0;
//		for (int i = 0; i < numbers.size(); i++)
//		{
//			if (numbers[i] > max)
//				max = numbers[i];
//		}
//		vector<int> ans(max, 0);
//		for (int i = 0; i<numbers.size(); i++)
//		{
//			ans[numbers[i]]++;
//		}
//
//		for (int j = 0; j<ans.size(); j++)
//		{
//			if (ans[j] >(numbers.size() / 2))
//				return j;
//		}
//		return 0;
//	}
//};