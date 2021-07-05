
 
#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<math.h>
#define INF 0x3f3f3f3f
using namespace std;
 
int dp[205][205];
int cost[205];
 
void init(int n)
{
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			dp[i][j] = INF;
		}
	}
	for (int i = 0; i <= n; i++)
	{
		cost[i] = INF;
	}
}
 
int main()
{
	int n;
	cin >> n;
 
	init(n);		//��ʼ��
	for (int i = 1; i <= n - 1; i++)		//����ֵ���ǵ�֮�����Ļ���
	{
		for (int j = i + 1; j <= n; j++)
		{
			cin >> dp[i][j];
		}
	}
 
	cost[1] = 0;	//��㻨����Ϊ0
	for (int i = 1; i <= n - 1; i++)
	{
		for (int j = i + 1; j <= n; j++)	//�ӵڶ����㿪ʼ���㻨��
		{
			cost[j] = min(cost[j], cost[i] + dp[i][j]);
		}
	}
 
	cout << cost[n] << endl;			//���һ����Ϊ�յ����Ż���
 
 
    return 0;
}
