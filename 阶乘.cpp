#include<bits/stdc++.h>
int main(){
	int n;
	long long int Sn=0;
    int x;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		x=1;
		for(int j=1;j<=i;j++){
			x*=j;
		}
		Sn+=x;
	}
	printf("%lld\n",Sn);
	return 0;
}
