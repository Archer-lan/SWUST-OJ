#include<stdio.h>
#include<string.h>
int main(){
	int n,a[1001];
	scanf("%d",&n);
	memset(a,1,sizeof(a));
	for(int i=1;i<n;i++){
		for(int j=1;j<i/2;j++){
			a[i]+=a[j];
		}
	}
	printf("%d",a[n]);
	return 0;
}
