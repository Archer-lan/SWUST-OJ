#include<stdio.h>
int c=0;
int fb(int n){
	c++;
	if(n==2||n==1)
		return 1;
	else
		return fb(n-1)+fb(n-2);
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d %d\n",fb(n),c);
	return 0;
} 
