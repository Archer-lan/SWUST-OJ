#include<stdio.h>
#include<string.h> 
int main(){
	int n,a[20002],b[101],i=0;
	scanf("%d",&n);
	memset(b,0,sizeof(b));
	while(~scanf("%d",&a[i])){
		b[a[i]]++;
		if(b[a[i]]>1){
			b[a[i]]=1;
			--i;
			--n;
		}
		i++;
		if(i==n)
			break;
	} 
	for(int i=0;i<n;i++){
		printf("%d",a[i]);
		if(i=n)
			printf("\r\n");
		else
			printf(" ");
	}
	return 0;
}
