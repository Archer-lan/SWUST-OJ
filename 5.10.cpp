#include<stdio.h>
#include<algorithm>
#include<math.h>

void swap(int &a,int &b){
	int t=b;
	b=a;
	a=t;
}
void qsort(int a[],int l,int r)
{
    int mid=a[(l+r)/2];
    int i=l,j=r;
    do{
        while(a[i]<mid) i++;
        while(a[j]>mid) j--;
        if(i<=j)
        {
            swap(a[i],a[j]);
            i++;
            j--;
        }
    }while(i<=j);
    if(l<j) qsort(a,l,j);
    if(i<r) qsort(a,i,r);
}

int main(){
	int n,x[10001],y[10001];
	scanf("%d",&n);
	int a,b,sum=0;
	for(int i=0;i<n;i++)
		scanf("%d%d",&x[i],&y[i]);
	qsort(x,0,n-1);
	qsort(y,0,n-1);
	if(n%2==1){
		a=x[n/2];
		b=y[n/2];
	}
	else{
		a=(x[n/2-1]+x[n/2])/2;
		b=(y[n/2-1]+y[n/2])/2;
	}
	for(int i=0;i<n;i++)
		sum+=abs(a-x[i])+abs(b-y[i]);
	printf("%d",sum);
	return 0;
}
