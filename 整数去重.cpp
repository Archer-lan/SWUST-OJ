#include<stdio.h>
#include<string.h>
int main(){
	int n;
	while(~scanf("%d",&n)){
		int a[20001],b[101],c[20001],j=0,m=0;
		memset(b,0,sizeof(b));
		for(int i=0;i<n;i++)
			scanf("%d",&a[i]);
		for(int i=0;i<n;i++){
			b[a[i]]++;
			if(b[a[i]]>1){
				a[i]=1; 
				b[a[i]]=1;
				m++;
			}
		}
		for(int i=0;i<n;i++){
			if(a[i]!=1){
				c[j++]=a[i];
			}
		}
		for(int i=0;i<n-m;i++){
			printf("%d",c[i]);
			if(i!=n-m-1)
				printf(" ");
			else
				printf("\r\n");
		}
	}
	return 0;
}
