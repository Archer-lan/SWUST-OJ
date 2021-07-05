#include<stdio.h>
int main(){
	int L,M,sum;
	scanf("%d%d",&L,&M);
	sum=L;
	for(int i=0;i<M;i++){
		int a[i],b[i];
		scanf("%d %d",&a[i],&b[i]);
		if(a[i]<=b[i+1])
			sum-=b[i]-a[i+1]+1;
		else
			sum-=b[i]-a[i]+1;
	}
	printf("%d\n",sum);
	return 0;
} 
