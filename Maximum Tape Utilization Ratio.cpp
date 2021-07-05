#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int n,c;
int Code[600],w[600],x[600],best[600];
int xm,m,r,cw,bestw;

void Loading(int i){
	int j=0;
	if(i>=n){
		if(xm==m){
			for(j=0;j<n;j++){
				best[j]=x[j];
				bestw=cw;
			}
		}
		return ;
	}
	r-=w[i];
	if(cw+w[i]<=c && xm<m){
		x[i]=1;
		xm++;
		cw+=w[i];
		Loading(i+1);
		cw-=w[i];
		xm--;
	}
	if(cw+r>bestw){
		x[i]=0;
		Loading(i+1);
	}
	r+=w[i];
}

int cmp(const void *a,const void *b){
	return ((*(int *)a)-(*(int *)b));
}

int greedy(int a[],int n,int m){
	int i=0,sum=0;
	qsort(a,n,sizeof(int),cmp);
	while(i<n){
		sum+=a[i];
		if(sum<=m){
			i++;
		}
		else break;
	}
	return i;
}

int main(){
	int i,flag=0;
	scanf("%d %d",&n,&c);
	for(i=0;i<n;i++)
		scanf("%d",&Code[i]);
	memcpy(w,Code,sizeof(Code));
	m=greedy(Code,n,c);
	printf("%d ",m);
	for(i=0;i<n;i++)
		r+=w[i];
	Loading(0);
	printf("%d\n",bestw);
	for(i=0;i<n;i++){
		if(best[i]&&flag==0){
			printf("%d",w[i]);
			flag=1;
		}
		else if(best[i]&&flag==1)
			printf(" %d",w[i]);
	}
	printf("\n");
	return 0;
}
