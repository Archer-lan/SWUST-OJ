#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

void Change(int* a, int low, int high)
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
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		b[i] = a[i];
	}

	int cnt = n;//cnt为a[i]这个数应该在的位置
	sort(b + 1, b + 1 + n);

	for (int i = n; i >= 0; i--)//从最大的数开始翻转
	{
		for (int j = 1; j <= cnt; j++)
		{
			//如果该数不在其应该在的位置
			if (a[j] == b[i] && j != cnt)
			{
				//如果a[i]是第一个就只翻转一次，如果不是就要翻转两次
				//先将该数翻转到第一层
				//然后再
				if (j != 1)
				{
					ans++;
					
					Change(a, 1, j);
				}cout << j << cnt << endl;
				Change(a, 1, cnt);
				ans++;
				break;
			}
		}

		cnt--;//修改位置
	}
	cout << ans << endl;

	return 0;
}