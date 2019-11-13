#include<iostream>
#include<vector>
using namespace std;

int maxSubArray(vector<int>& nums) {
	int maxprev = nums[0];     //��¼���ȡ��ǰ����ʱ���Ϊ����
	int sum = nums[0];     //��¼����ֵ
	for (int i = 1; i < nums.size(); i++)
	{
		if (maxprev >= 0)      //���ȡ��ǰ����ʱ���ֵΪ�����򽫵�ǰֵ�ۼ�
		{
			maxprev += nums[i];
		}
		else
		{
			maxprev = nums[i];  //���ȡ��ǰ����ʱ���ֵΪ���� ��maxprev�뵱ǰֵ���
		}

		if (sum < maxprev)    //�����¼�����ֵ С��ȡ��ǰ����ʱ�����ֵ ��sum = maxprev
		{
			sum = maxprev;
		}
	}
	return sum;
}

int main1()
{
	int n = 0;
	vector<int> ans;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int tmp = 0;
		cin >> tmp;
		ans.push_back(tmp);
	}

	cout << maxSubArray(ans);
	system("pause");
	return 0;
}