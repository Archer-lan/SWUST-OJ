#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int t,sum=0;
		scanf("%d",&t);
		for(int i=1;i<t;i++){
			if(t%i==0){
				sum+=i;
			}
		}
		printf("%d\n",sum);
	}
	
	return 0;
}
