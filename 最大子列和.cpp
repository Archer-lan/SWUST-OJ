#include<stdio.h>
#define max 100000
int maxsum(int a[],int k){
	int now=0,sum=0;
	for(int i=0;i<k;i++){
		now+=a[i];
		if(now>sum){
			sum=now;
		}
		else if(now<0){
			now=0;
		}
	}
	return sum;
}

int main(){
	int k,a[max];
	scanf("%d",&k);
	for(int i=0;i<k;i++){
		scanf("%d",&a[i]);
	}
	printf("%d\n",maxsum(a,k));
	return 0;
} 
