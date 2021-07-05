#include<stdio.h>
int main(){
	int n,r;
	while(~scanf("%d %d",&n,&r)){
		if(n==0&&r==0)
			break; 
		if(n<r||n<0||r<0)
			printf("error!\n");
		else{
			long long int res=0,sum1=1,sum2=1;
				for(int i=n-r+1;i<=n;i++)
					sum1*=i;
				for(int i=1;i<=r;i++)
					sum2*=i;
				res=sum1/sum2;
				printf("%lld\n",res);
				
			}	
	}
	return 0;
}
