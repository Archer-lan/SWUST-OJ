#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
int  dp[8001];
int Ta[200];
int Tb[200];
int max(int a,int b){
	return a<b?b:a;
}
int min(int a,int b){
	return a<b?a:b;
}
int main(){
	int i,j,n;
	int i_max=0,i_min=99999,sum=0;
	while(cin>>n){
		sum=0; i_min =99999;
		memset(dp,0,sizeof(dp));
		for(i=0;i<n;i++){
			cin>>Ta[i];
			sum+=Ta[i];
		}
		for(i=0;i<n;i++)
			cin>>Tb[i];
		for(i=0;i<n;i++){
			for(j=sum;j>=0;j--){
				if(j>=Ta[i])
					dp[j]=min(dp[j]+Tb[i],dp[j-Ta[i]]);
				else
					dp[j]+=Tb[i];
			}
		}
		for(i=0;i<sum;i++){
			i_max=max(i,dp[i]);
			i_min=min(i_min,i_max);
		}
		cout<<i_min<<endl;
	}
	return 0;
}

