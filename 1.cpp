#include<stdio.h>
#include<stdlib.h>
typedef struct
{
	int a[100];
	int length;
 }Sqlist;
 void Initlist(Sqlist *&L)
 {
 	L=(Sqlist *)malloc(sizeof(Sqlist));
 	L->length=0;
 }
 void Createlist(Sqlist *&L)
 {
 	int n,i;
 	scanf("%d",&n);
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&L->a[i]);
	 }
	L->length=n;
 }
 void Movelist(Sqlist *&L)
 {
 	int i,b[100],c[100],n,p,j;
 	n=L->length;
 	scanf("%d",&p);
 	if(p>=1&&p<=n)
 	{
		for(j=0;j<p;j++)
		{
			b[j]=L->a[j];
		}
		i=0;
		for(j=p;j<n;j++)
		{
			c[i]=L->a[j];
			i++;
		}
		for(i=0;i<p;i++)
		{
			L->a[i]=c[i];
		}
		i=0;
		for(j=n-p;j<n;j++)
		{
			L->a[j]=b[i];
			i++;
		}
	}
 	else{
 		printf("error!");
	 }
 }
 void outputlist(Sqlist *&L)
 {
 	int i;
 	for(i=0;i<L->length;i++)
 	{
 		printf("%d ",L->a[i]);
	 }
 }
 int main()
 {
 	Sqlist *L;
 	Initlist(L);
 	Createlist(L);
 	Movelist(L);
 	outputlist(L);
 	return 0;
 }
