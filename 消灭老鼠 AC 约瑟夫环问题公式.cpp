#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m,n;
    while(~scanf("%d %d",&n,&m))
    {
        int i,r=0;
        for(i=2;i<=n;i++)
        {
           r=(r+m)%i;
        }
        printf("%d\n",r+1);
    }     
    return 0;
}
