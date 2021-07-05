#include<stdio.h>
int main()
{
	int a[10]={9,8,65,15,85,42,5,7,45,25},i,j,temp;
	for(j=0;j<10;j++)
		for(i=0;i<10-j;i++)
		{
			if(a[i]>a[i+1])
			{
				temp=a[i];a[i]=a[i+1];a[i+1]=temp;
			}
		}
	for(i=0;i<10;i++)
		printf("%3d",a[i]);
	return 0;
} 
