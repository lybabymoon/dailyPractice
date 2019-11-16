#include<iostream>
using namespace std;

class UnusualAdd 
{
public:
	int addAB(int A, int B) 
	{
		if (B == 0)
			return A;
		int sum = 0;
		sum = A^B;
		int carry = (A&B) << 1;
		return addAB(sum, carry);
		//A+B = A^B + (A&B)<<1
	}
};

int main1()
{
	int a = 0;
	int b = 0;
	cin >> a >> b;

	UnusualAdd s1;

	cout<<s1.addAB(a, b);
	system("pause");
	return 0;
}