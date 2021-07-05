#include<stdio.h>
int main(){
	int a[11],n,result=0;
	for(int i=0;i<10;i++)
		scanf("%d",&a[i]);
	scanf("%d",&n);
	for(int i=0;i<10;i++){
		if(n+30>=a[i])
			result+=1;
		else
			result=result;
	}
	printf("%d",result);
	return 0;
}
