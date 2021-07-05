#include<stdio.h>
int main(){
	int a[5][5],b[5][5],res[5][5];
	for(int i=1;i<4;i++){
		for(int j=1;j<4;j++)
			scanf("%d ",&a[i][j]);} 
	for(int i=1;i<4;i++){
		for(int j=1;j<4;j++)
			scanf("%d ",&b[i][j]);} 
	for(int i=1;i<4;i++){
		for(int j=1;j<4;j++){
			int sum=0;
			for(int m=1;m<4;m++){
				sum = sum+a[i][m]*b[m][j];
			}
			res[i][j]=sum;
		}
	}
	for(int i=1;i<4;i++){
		for(int j=1;j<4;j++)
			printf("%d ",res[i][j]);
		printf("\n");
	}
	return 0;
} 
