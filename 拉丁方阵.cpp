#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			a[i][j]=j+i+1;
			if(a[i][j]>n){
				a[i][j]=1;
				for(int k=0;k<j;k++){
					if(a[i][k]==a[i][j])
						a[i][j]++;
				}
			}
		}
	}
	for(int i=0;i<n;i++){ 
		for(int j=0;j<n;j++){
			printf("%d",a[i][j]);
			if(j<n-1)
				printf(" ");
		}
		printf("\n");
	} 
	return 0;
}
