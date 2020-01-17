#include <iostream>
#include <vector>
using namespace std;
/*int main()
{
	char *p = "abcdefgh", *r;
	long *q;
	q = (long*)p;
	q++;
	r = (char*)q;
	printf("%s\n", r);

	return 0;
}*/

vector<int> sortArrayByParity(vector<int>& A)
{
	int left = 0;
	int right = A.size() - 1;

	while (left < right)
	{
		while (A[left] % 2 == 0)   //找出不是偶数的
		{
			left++;
		}

		while (A[right] % 2 != 0)  //找出是偶数的
		{
			right--;
		}

		swap(A[left], A[right]);
		left++;
		right--;
	}

	return A;
}

int main1()
{
	char str[] = "ABCD", *p = str;
	printf("%d\n", *(p + 4));
	return 0;
};