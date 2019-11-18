#include <iostream>
using namespace std;

class LCA {
public:
	int getLCA(int a, int b) {
		int a1 = a;
		int b1 = b;

		while (a1 - b1)
		{	
			
			if (b1 > a1)
			{
				b1 = b1 / 2;
			}

			if (b1 < a1)
			{
				a1 = a1 / 2;
			}
			if (a1 == b1)
				return b1;
		}

		return a1;
	}
};

int main1()
{

	system("pause");
	return 0;
}