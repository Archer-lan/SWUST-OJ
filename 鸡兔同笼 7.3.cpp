#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int feet,max,min;
		scanf("%d",&feet);
		min=feet/4+(feet%4)/2;
		max=feet/2;
		if(feet%2==0)
			printf("%d %d\n",min,max);
		else
			printf("0 0\n");
	}
	return 0;
}
