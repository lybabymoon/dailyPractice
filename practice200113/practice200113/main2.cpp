#include <iostream>
using namespace std;

string reverseOnlyLetters(string S) {
	int left = 0;
	int right = S.size() - 1;

	while (left < right)
	{
		if ((S[left] < 'a' || S[left] > 'z') && (S[left] < 'A' || S[left] > 'Z'))
		{
			left++;
			continue;
		}

		if ((S[right] < 'a' || S[right] > 'z') && (S[right] < 'A' || S[right] > 'Z'))
		{
			right--;
			continue;
		}

		swap(S[left], S[right]);
		left++;
		right--;
	}

	return S;
}

int main()
{
	string s{ "a-bC-dEf-ghIj"};
	reverseOnlyLetters(s);
	return 0;
}