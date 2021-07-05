#include<stdio.h>
int main(){
	int a[3],b[3];
	while(~scanf("%d%d%d",&a[0],&a[1],&a[2])){
		scanf("%d%d%d",&b[0],&b[1],&b[2]);
		int c[3];
		c[2]=a[2]+b[2];
		c[1]=a[1]+b[1];
		c[0]=a[0]+b[0];
		if(c[2]>=60){
			c[2]-=60;
			c[1]++;
		}
		if(c[1]>=60){
			c[1]-=60;
			c[0]++;
		}
		printf("%02d:%02d:%02d\n",c[0],c[1],c[2]);
	}
	return 0;
} 
