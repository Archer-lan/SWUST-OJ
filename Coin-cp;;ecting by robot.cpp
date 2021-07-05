 #include <stdio.h>
 int dp[1001][1001];
 int main()
 {
     int i, j, n, m;
     scanf("%d%d", &n, &m);
     for(int i=0;i < n;i++)
     	for(int j=0;j < m;j++)
         	scanf("%d", &dp[i][j]);
     for(int i=n-1;i >= 0;i--)
     	for(int j=m-1;j >= 0;j--)
        	dp[i][j] += dp[i + 1][j] > dp[i][j + 1] ? dp[i + 1][j] : dp[i][j + 1];
     printf("%d ",dp[0][0]);
 }
