#include<stdio.h>
int main(){
	int n;
	while(~scanf("%d",&n)){
		int c[20][20]; 
		if(n==0) break;
		for(int i=0;i<n;i++){
			for(int j=0;j<=i;j++){
				if(j==0||i==j) c[i][j]=1;
				else 
					c[i][j]=c[i-1][j]+c[i-1][j-1];
				if(j==i) printf("%d",c[i][j]);
				else printf("%d ",c[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
} 
