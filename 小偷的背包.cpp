#include<stdio.h>
#define Maxsize 1000

int height[Maxsize];
bool Judge(int s,int n){
	if(s==0)
		return true;
	if(s<0||(s>0&&n<0))
		return false;
	else if(Judge(s-height[n],n-1))
		return true;
	else return Judge(s,n-1);
}

int main(){
	int n,total;
	scanf("%d%d",&total,&n);
	for(int i=0;i<n;i++){
		scanf("%d",&height[i]);
	}
	if(Judge(total,n-1)){
		printf("yes!");
	}
	else{
		printf("no!");
	}
	return 0;
}
