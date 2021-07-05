#include<stdio.h>
#include<math.h>
int main(){
	int a,n,sum=0,b[6],result;
	scanf("%d%d",&a,&n);
	for(int i=0;i<n;i++){
		sum=sum+a*(pow(10,i));
		b[i]=sum;
	}
	result=sum+b[0]+b[1]+b[2]+b[3];
	printf("%d",result);
	return 0;
}
