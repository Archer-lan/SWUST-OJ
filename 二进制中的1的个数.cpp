#include<stdio.h>
#include<string.h>
int main(){
	int n,a[15],i=0,c=0;
	scanf("%d",&n);
	memset(a,0,sizeof(int));
	for(;;i++){
		a[i]=n%2;
		if(a[i]==1)
			c++;
		n/=2;
		if(n==0)
			break;
	}
	printf("%d\n",c);
	return 0;
}
