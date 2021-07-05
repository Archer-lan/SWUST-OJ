#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int n,x,k=0,i,p[100];
	memset(p,0,sizeof(int));
	scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&p[i]);
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(p[i]==x) k++;
        else if(k!=0) p[i-k]=p[i];
    }
    if(k==n) printf("-1");
    else
    {
        for(i=0;i<n-k;i++) printf("%d ",p[i]);
    }
    return 0;
}
