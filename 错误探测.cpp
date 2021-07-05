#include<stdio.h>
#include<string.h>
int main(){
	int n;
	while(~scanf("%d",&n)){
	int a[101][101],b[101],c[101],flag=0;
	memset(b,0,sizeof(b));
	memset(c,0,sizeof(c));
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]==1){
				b[i]++;
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[j][i]==1){
				c[i]++;
			}
		}
	}
	for(int i=0;i<n;i++){
		if(b[i]%2!=0||c[i]%2!=0){
			flag++;
			break;
		}
	}
	if(flag==0)
		printf("OK\n");
	else
		printf("Corrupt\n");
	}
	return 0;
}
