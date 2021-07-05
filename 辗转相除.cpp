#include<stdio.h>
int main(){
	int m,n,i,j;
	scanf("%d",&m,&n);
	i=m,j=n;
	while (i!=j)
	{
		if (i>j)
			i = i-j;
		else
			j = j-i;
	}
	printf("%d",i);
	printf("%d",m*n/i);
	return 0;
} 
