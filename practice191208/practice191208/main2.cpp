#include <iostream>
using namespace std;
int main2()
{
	int n = 0;
	int count = 0;
	while (cin >> n && n != 0)
	{
		count = 0;
		while ( n / 2)
		{
			count++;
			n = n / 2;
		}
		cout << count << endl;
	}
	system("pause");
	return 0;
}