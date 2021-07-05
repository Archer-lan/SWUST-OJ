#include<stdio.h>
#include<string.h>
int swp(char a[])
{
    int c;
    if(strcmp(a,"zero")==0) c=0;
    else if(strcmp(a,"one")==0) c=1;
    else if(strcmp(a,"two")==0) c=2;
    else if(strcmp(a,"three")==0) c=3;
    else if(strcmp(a,"four")==0) c=4;
    else if(strcmp(a,"five")==0) c=5;
    else if(strcmp(a,"six")==0) c=6;
    else if(strcmp(a,"seven")==0) c=7;
    else if(strcmp(a,"eight")==0) c=8;
    else if(strcmp(a,"nine")==0) c=9;
    return c;
}
int main()
{
    while(1)
	{
		int i,sum1=0,sum2=0,end=0;
		char a[10];
		for(i=0;;i++)
		{	
			scanf("%s",a);
			if(a[0]=='+')break;
			if(swp(a)==0)end++;
			sum1*=10;
			sum1+=swp(a);
		}
		for(i=0;;i++)
		{
			scanf("%s",a);
			if(a[0]=='=')break;
			if(swp(a)==0 && end==1)return 0;
			sum2*=10;
			sum2+=swp(a);
		}
		printf("%d\n",sum1+sum2);
	}
    return 0;}
