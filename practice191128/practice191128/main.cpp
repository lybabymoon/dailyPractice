#include <iostream>
#include <string>
using namespace std;

string reserve(string s1)
{
	int left = 0;
	int right = s1.size() - 1;

	while (left < right)
	{
		swap(s1[left], s1[right]);
		left++;
		right--;
	}

	return s1;
}
int main1()
{
	string str;

	while (cin >> str)
	{
		cout << reserve(str) << endl;
	}
	system("pause");
	return 0;
}