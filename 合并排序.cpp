#include<stdio.h>
#include<stdlib.h>
void Mergesort(int a[],int n);
void Merge(int a[],int Ta[],int L,int R,int REND); 
void Msort(int a[],int Ta[],int Left,int Right){
	int center;
	if(Left<Right){
		center=(Left+Right)/2;
		Msort(a,Ta,Left,center);
		Msort(a,Ta,center+1,Right);
		Merge(a,Ta,Left,center+1,Right);
	}
}
void Mergesort(int a[],int n){
	int *Ta;
	Ta=(int *)malloc(n*sizeof(int));
	if(Ta!=NULL){
		Msort(a,Ta,0,n-1);
		free(Ta);
	}
	else
		return ;
}

void Merge(int a[],int Ta[],int L,int R,int REND){
	int i,LEND,T,NUM;
	LEND=R-1;
	T=L;
	NUM=REND-L+1;
	while(L<=LEND&&R<=REND){
		if(a[L]<=a[R])
			Ta[T++]=a[L++];
		else
			Ta[T++]=a[R++];
	}
	while(L<=LEND)
		Ta[T++]=a[L++];
	while(R<=REND)
		Ta[T++]=a[R++];
	for(i=0;i<NUM;i++,REND--)
		a[REND]=Ta[REND];
}

int main(){
	int n,a[1001];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	Mergesort(a,n);
	for(int i=1;i<=n;i++){
		if(i%10==0)
			printf("%d\n",a[i-1]);
		else if(i==n)
			printf("%d\n",a[i-1]);
		else
			printf("%d ",a[i-1]);
	}
	return 0;
}
