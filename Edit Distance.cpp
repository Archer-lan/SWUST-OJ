#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int Min(int a,int b,int c){
	return (a<b?a:b)<c?(a<b?a:b):c;
}
int main(){
	int dp[2005][2005];
	char a[2005],b[2005];
	cin>>a>>b;
	int la=strlen(a);
	int lb=strlen(b);
	for(int i=0;i<=la;i++)
		dp[i][0]=i;
	for(int j=0;j<=lb;j++)
		dp[0][j]=j;
	int flag=0;
	for(int i=1;i<=la;i++){
		for(int j=1;j<=lb;j++){
			if(a[i-1]==b[j-1])
				flag=0;
			else
				flag=1;
			dp[i][j]=Min(dp[i-1][j]+1,dp[i][j-1]+1,dp[i-1][j-1]+flag);
		}
	}
	cout<<dp[la][lb]<<endl;
	return 0;
}
