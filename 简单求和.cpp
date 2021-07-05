#include<bits/stdc++.h>
int main(){
	int a,n,sum=0;
	scanf("%d%d",&a,&n);
	for(int i=0;i<n;i++)
		for(int j=0;j<n-i;j++)
			sum=sum+pow(10,i)*a;
	printf("%d",sum);
	return 0;
} 
