#include <iostream>
using namespace std;
#include <vector>
#include <queue>
int main()
{
	
	int N = 0;
	int count = 1;
	int flag = 0;
	cin >> N;
	vector<int> ans(N+1,0);
	while (1)
	{
		int tmp;
		cin >> tmp;
		flag = tmp;
		if (tmp != count)
		{
			ans[tmp] = 1;
		}
		else
		{
			cout << count << " " << flag << endl;
			count++;
			if (count > N)
			{
				break;
			}
		
			while(ans[count])
			{
				cout << count << " " << flag << endl;
				count++;
				if (count > N)
				{
					break;
				}
			}

			if (count > N)
			{
				break;
			}
		}
	}
	

	//时间复杂度超出n
	//while (count <= N)
	//{
	//	if (count == ans[j])
	//	{
	//		if (flag < j)
	//		{
	//			flag = j;
	//		}

	//		cout << count << " " << ans[flag] << endl;
	//		count++;
	//	}
	//	j++;
	//	if (j > N)
	//	{
	//		j = 1;
	//	}
	//}
	return 0;
}