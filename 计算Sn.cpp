#include<bits/stdc++.h>
int main(){
	int a,n,i,sum=0,x;
	scanf("%d%d",&a,&n);
	for(i=1;i<=n;i++){
		x=pow(10,i);
		sum=sum+a*(111111%x);
	}
	printf("%d",sum);
	return 0;
}
