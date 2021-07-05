#include<stdio.h>
#include<string.h>
int main(){
	int n,a[100],b[100],f=0;
	scanf("%d",&n);
	memset(b,0,sizeof(b));
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<n;i++){
		++b[a[i]];
		if(b[a[i]]>(n/2)){
			printf("%d",a[i]);
			f=1;
			break;
		}
	}
	if(f==0)
		printf("-1");
	return 0; 
} 
