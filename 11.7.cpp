#include<stdio.h>
#include<string.h> 
int main(void) 
{ 
  int n;
  
  scanf("%d",&n);
  if(n==1)
  {
	printf("1\n");
  }
  else if(n>=2)
  {
	int num1=1,min,max,flag;
   for(int i=0;i<n-1;i++)
  {
	num1*=10;
  }
   max=num1*10;
   min=num1+8;
   int d=num1;
 for(int i=min;i<max;i+=9)
  {
  	num1=d;
  	flag=0;
  	int a[10]={0};
	for(int j=1;j<=n;j++)
	{  
		int t=i/num1;
		num1/=10;
		a[j]=t%10;
		if(t%j==0)
		{
		flag+=1;
		if(t%10==0)
		{
			flag-=1;
		}
		}
		else
		{
		break;
		}
		
	}
	for(int j=1;j<=n;j++)
	{
		for(int k=j+1;k<=n;k++)
		{
			if(a[j]==a[k])
			{
				flag-=1;
			}
		}
	}
	    if(flag==n&&i%9==0)
	    {
		printf("%d\n",i);
		break;
	    }
 }
 }
  return 0;
}

