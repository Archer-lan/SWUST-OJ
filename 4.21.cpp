#include<stdio.h>
#include<string.h>
int main(){
	int n,a[1000];
	scanf("%d",&n);
	for(int i=2;i<=n;i++) {
		memset(a,0,sizeof(int));
		a[0]=1;
		int c=0;
		for(int j=2;j<=(i/2);j++){
			for(int k=j;k<i;k++){
				if((j*k)==i){
					c++;
					a[c]=j;
					c++;
					a[c]=k;
				}
			}
		}
		int t=0;
		for(int j=0;j<=c;j++){
			for(int k=0;k<c-j;k++){
				if(a[k]>a[k+1]){
					t=a[k];
					a[k]=a[k+1];
					a[k+1]=t;
				}
			}
		}
		t=0;
		for(int j=0;j<=c;j++)
			t+=a[j];
		if(i==t){
			printf("%d its fastors are ",i);
			for(int j=0;j<=c;j++)
				printf("%d ",a[j]);
			printf("\n");
		}
	}
	return 0;
}
