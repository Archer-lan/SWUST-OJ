#include<stdio.h>
#include<math.h>
int main(){
	int m,n;
	while(~scanf("%d%d",&m,&n)){
		int sum1=0,sum2=0,t=0;
		if(m>n){
			t=m;
			m=n;
			n=t;
		}
		for(int i=m;i<=n;i++){
			if(i%2==0)
				sum1+=i*i;
			else
				sum2+=i*i*i;
		}
		printf("%d %d\n",sum1,sum2);
	} 
	return 0;
} 
