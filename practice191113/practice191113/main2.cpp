#include <iostream>
#include <string>
#include <stack>
using namespace std;

class Parenthesis {
public:
	bool chkParenthesis(string A, int n) {
		stack<char> ans;
		for (int i = 0; i < n; i++)
		{
			if (A[i] != '(' && A[i] != ')')
			{
				return false;
			}

			if (A[i] == '(')
				ans.push(A[i]);

			if (ans.empty() && A[i] == ')')
				return false;

			if (A[i] == ')')
				ans.pop();
		}

		return true;
	}
};

int main2()
{
	Parenthesis s1;
	string s2 = "(()())";
	int n = 6;
	cout << s1.chkParenthesis(s2, n) << endl;
	system("pause");
	return 0;
}