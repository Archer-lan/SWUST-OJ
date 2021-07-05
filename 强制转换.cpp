#include<stdio.h>
int main(){
	float a[101];
	for(int i=1;i<=3;i++){
		scanf("%lf",&a[i]);
	}
	for(int i=1;i<=3;i++){
		if(a[i]==(int)a[i])
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0; 
} 
