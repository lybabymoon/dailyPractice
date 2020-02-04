#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string s)
{
	string str = "";
	for (auto c : s)
	{
		if (isalnum(c)) str += tolower(c);
	}
	for (int i = 0, j = str.size() - 1; i < j; i++, j--)
	{
		if (str[i] != str[j])
			return false;
	}

	return true;
}

int main1()
{

	return 0;
}