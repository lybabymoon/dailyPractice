//#include <iostream>
//#include <vector>
//using namespace std;
//
////����� ��������
//int main1()
//{
//	int length = 0;
//	int n = 0; //�������
//	int count = 0;    //������ÿһ���˵�a_i����һάvector
//	int cur = 0;      //������λ��
//	int sum = 0;      //������
//	cin >> n;
//	vector<vector<int>> a_i(n,vector<int>()) ;
//	length = 3 * n + 1;
//	vector<int> ans(length,0);
//	for (int i = 0; i < n; i++)       //����ÿһ�������a_i
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			int tmp = 0;
//			cin >> tmp;
//			a_i[i].push_back(tmp);
//		}
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			ans[count++]=a_i[i][j];
//		}
//	}
//
//	for (int i = 0; i < length - 2; i++)
//	{
//		for (int j = 0; j < length - 2 - i; j++)
//		{
//			if (ans[j]>ans[j + 1])
//			{
//				swap(ans[j], ans[j + 1]);
//			}
//		}
//	}
//
//	cur = n / 3;
//	while (1)
//	{
//		if (cur == ((n / 3) * 2))
//			break;
//		sum += ans[cur];
//		cur++;
//	}
// 
//	
//	cout << sum;
//	system("pause");
//	return 0;
//}