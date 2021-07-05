#include<stdio.h>

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
	int n;
	scanf("%d",&n);int a[100001];
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	qsort(a,0,n-1);
	for(int i=0;i<n;i++){
		if(i%10==9)
			printf("%d\n",a[i]);
		else
			printf("%d  ",a[i]);
	}
	return 0;
} 
