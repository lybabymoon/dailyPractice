#include<iostream>
#include<vector>
using namespace std;

class Solution
{
	int m_m;
	int m_h;
public:
	int findMaxNum(int  w,int h)
	{
		int res = 0;
		vector<vector<int>> ans;
		ans.resize(w);

		for (auto & i : ans)
		{
			i.resize(h, 1);
		}

		for (int i = 0; i < w; i++){
			for (int j = 0; j < h; j++){
					if (ans[i][j] == 1){
					res++;
					
					if ((i + 2) < w)
						ans[i + 2][j] = 0;

					if ((j + 2) < h)
						ans[i][j + 2] = 0;
				}
			}
		}
		return res;
	}

};
int main1()
{
	Solution s1;
	int m = 0, n = 0;
	cin >> m >> n;
	cout << s1.findMaxNum(m, n);
	system("pause");
	return 0;
}