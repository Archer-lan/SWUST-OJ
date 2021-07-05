#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	float a[n][7],b[6],s;
	for(int i=0;i<n;i++){
		for(int j=0;j<6;j++){
			scanf("%f",&a[n][j]);
		}
	}
	for(int i=0;i<n;i++){
		a[i][6]=(a[i][1]+a[i][2]+a[i][3]+a[i][4]+a[i][5])/5;
	}
	for(int i=1;i<6;i++){
		for(int j=0;j<n;j++){
			s+=a[j][i];
			b[i]=s/4;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<7;j++){
			printf("%.1f",a[i][j]);
			if(i<6)
				printf(" ");
			}
			printf("\n");
	}
	for(int i=0;i<6;i++){
		printf("%.1f",b[i]);
		if(i<5)
			printf(" ");
		else
			printf("\n");
	}
	return 0;
}
