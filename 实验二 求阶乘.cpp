#include<stdio.h>
int main(){
	int n;
	while(~scanf("%d",&n)){
		int sum=1;
		if(n<=0)
			printf("shuruwuxiao!\n");
		else{
			for(int i=1;i<=n;i++)
				sum*=i;
			printf("%d\n",sum);
		}
	}
	return 0;
} 
