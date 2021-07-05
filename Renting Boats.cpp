
 
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
 
	init(n);		//初始化
	for (int i = 1; i <= n - 1; i++)		//给出值，是到之后各点的花费
	{
		for (int j = i + 1; j <= n; j++)
		{
			cin >> dp[i][j];
		}
	}
 
	cost[1] = 0;	//起点花费置为0
	for (int i = 1; i <= n - 1; i++)
	{
		for (int j = i + 1; j <= n; j++)	//从第二个点开始计算花费
		{
			cost[j] = min(cost[j], cost[i] + dp[i][j]);
		}
	}
 
	cout << cost[n] << endl;			//最后一个就为终点最优花费
 
 
    return 0;
}
