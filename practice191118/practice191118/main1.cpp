#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class BinInsert {
	vector<int> changeTwo(int num)
	{
		vector<int> cur;
		while (num)
		{
			int tmp = num % 2;
			cur.push_back(tmp);
			num = num / 2;
		}

		return cur;
	}
public:

	int binInsert(int n, int m, int j, int i) {
		vector<int> ansn;
		vector<int> ansm;
		vector<int> tmp;
		int sum = 0;
		ansn = changeTwo(n);
		ansm = changeTwo(m);

		for (int x = j-1; x < i; x++)
		{
			ansn[x] = ansm[x];
		}

		for (int y = 0; y < (i - j + 1); y++)
		{
			tmp[y] = ansn[y];
		}

		for (int z = tmp.size()-1; z >=0; z++)
		{
			sum += tmp[z] * pow(z, 10);
		}
		return sum;
	}
};

int main1()
{
	int n = 0;
	int m = 0;
	int i = 0;
	int j = 0;

	cin >> n >> m >> j >> i;

	BinInsert s1;
	cout<<s1.binInsert(n, m, i, j)<<endl;
	system("pause");
	return 0;
}