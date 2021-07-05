#include<stdio.h>
int ss(int n){
	int i,f=1;
	if(n==1)
		f=0;
	else{
		for(i=2;i<=n/2;i++){
			if(n%i==0){
				f=0;
				break;
			}
		}
	}
	return f;
}
int main(){
	int k1,k2;
	while(~scanf("%d %d",&k1,&k2)){
		int num,d=0;
		for(int i=k1;i<k2;i++){
			num=ss(i);
			if(num==1)
				d++;
		}
		printf("%d\n",d);
	}
	return 0;
} 
