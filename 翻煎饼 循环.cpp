#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

void Change(int *a, int low, int high)
{
	for (int i = low, j = high; i < j; i++, j--)
	{
		int temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}

int main()
{
	int ans = 0;
	int n;
	int a[1005], b[1005];
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		b[i] = a[i];
	}

	int cnt = n;//cntΪa[i]�����Ӧ���ڵ�λ��
	sort(b + 1, b + 1 + n);
	
	for (int i = n; i >= 0; i--)//����������ʼ��ת
	{
		for (int j = 1; j <= cnt; j++)
		{
			//�������������Ӧ���ڵ�λ��
			if (a[j] == b[i] && j != cnt)
			{
				//���a[i]�ǵ�һ����ֻ��תһ�Σ�������Ǿ�Ҫ��ת����
				//�Ƚ�������ת����һ��
				//Ȼ����
				if (j != 1)
				{
					ans++;
					Change(a, 1, j);
				}
				cout<<j<<cnt<<endl;
				Change(a, 1, cnt);
				ans++;
				break;
			}
		}
		 
		cnt--;//�޸�λ��
	}
	cout << ans << endl;

	return 0;
}
