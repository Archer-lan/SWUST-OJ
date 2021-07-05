#include<stdio.h>
#include<string.h>
int main(){
	int n,a[20002],b[20002];
	scanf("%d",&n);
	memset(b,0,sizeof(b));
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<n;i++){
		if(b[a[i]]<1)
			b[a[i]]++;
		else{
			for(int j=i;j<n-1;j++)
				a[j]=a[j+1];
			n--;
		}
	}
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
	return 0;
}
