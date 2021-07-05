#include<stdio.h>
int main(){
	int a,b,min,max,c;
	while(~scanf("%d%d",&a,&b)){
		if(a==b){
			printf("%d %d\n",a,b);
			break;
		}
		if(a>b){
			min=b;max=a;
		}
		else{
			min=a;max=b;
		} 
		for(int i=min;i>=1;i--){
			if(a%i==0&&b%i==0){
				printf("%d ",i);
				break;
			}
		}
		for(int i=1;i<=min;i++){
			c=(i*max)%min;
			if(c==0){
					printf("%d\n",i*max);
					break;
			}
		}
	}
	return 0;
}
