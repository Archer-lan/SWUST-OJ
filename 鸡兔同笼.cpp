#include<stdio.h>
int main(){
	int n,a,b,min,max;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a);
		if(a%2!=0)
			printf("0 0\n");
		else{
			b=a%4;
			min=b/2+a/4;
			max=a/2;
			printf("%d %d\n",min,max);
		}
	}
	return 0;
}
