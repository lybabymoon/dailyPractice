//#include <iostream>
//#include <vector>
//using namespace std;
//
//vector<string> compareTheHand(vector<char> &s1, vector<char> &s2,int & flag)
//{
//	vector<string> ans;
//	if ((s1[0] == 'j' && s1[1] == 'J') )   //|| (s1[0] == 'J' && s1[1] == 'j')
//	{
//		ans[0] = "joker";
//		ans[1] = "Joker";
//		return ans;
//	}
//	if ((s2[0] == 'j' && s2[1] == 'J'))   //|| (s1[0] == 'J' && s1[1] == 'j')
//	{
//		ans[0] = "joker";
//		ans[1] = "Joker";
//		return ans;
//	}
//
//	while (1)
//	{
//		if (s1.size() == s2.size() && s1.size() == 1)
//		{
//			if (s1)
//		}
//	}
//
//	ans[0] = "error";
//	return ans;
//}
//
//
//int main2()
//{
//	vector<char> no1;
//	vector<char> no2;
//	char tmp;
//	int flag = 0;
//
//	while (cin >> tmp)
//	{
//		if (tmp == '-')
//		{
//			flag = 1;
//			continue;
//		}
//
//		if (flag == 0)
//		{
//			no1.push_back(tmp);
//		}
//		else
//		{
//			no2.push_back(tmp);
//		}
//	}
//
//	flag = 0;
//	compareTheHand(no1, no2,flag);
//	system("pause");
//	return 0;
//}