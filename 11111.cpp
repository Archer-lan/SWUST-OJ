#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
	char a[100],b[100];
	int c[10],d[10];
	while(~scanf("%s %s",&a,&b))
	{
	memset(c,0,sizeof(int));
	memset(d,0,sizeof(int));
	int l1,l2,max;
	l1=strlen(a);
	l2=strlen(b);
	for(int i=0,t=l1-1;t>=0;)
	{
		
		c[i]=a[t]-'0';i++;t--;
	}
	for(int i=0;i<l1;i++) printf("%d",c[i]);
	printf("\n");
	for(int i=0,t=l2-1;t>=0;i++,t--)
	{
	    d[i]=b[t]-'0';
	}for(int i=0;i<l2;i++) printf("%d",d[i]);
	max=l1>l2?l1:l2;
	for(int i=0;i<max;i++)
	{
		c[i]+=d[i];
		if(c[i]>10)
		{
			c[i]=c[i]-10;
			c[i+1]=c[i+1]+1;
		}
	}
	if(c[max])
	{
		printf("%d",c[max]);
	}
		for(int i=max-1;i>=0;i--)
	{
		printf("%d",c[i]);
	}
	printf("\n");
}
}

