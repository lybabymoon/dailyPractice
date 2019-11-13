#include<iostream>
#include<string>
using namespace std;
bool isPalindrome(string s) {
	if (!s.size())return true;
	int i = 0, j = s.size() - 1;
	for (; i<j;)
	{
		if (ispunct(s[i]) || isspace(s[i])){ ++i; continue; }
		if (ispunct(s[j]) || isspace(s[j])){ --j; continue; }
		if (tolower(s[i]) == tolower(s[j])){ ++i, --j; }
		else
		{ 
			return false;
		}
	}
	return i >= j ? true : false;
}

int main()
{
	string s1;
	string s2;
	string tmp;
	int count = 0;
	getline(cin,s1);
	getline(cin,s2);

	for (int i = 0; i < s1.size(); i++)
	{ 
		tmp = s1;
		tmp.insert(i, s2);
		if (isPalindrome(tmp))
			count++;
	}

	cout << count << endl;
	system("pause");
	return 0;
}