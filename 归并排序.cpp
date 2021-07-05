#include<stdio.h>
int a[1001],b[1001];
void msort(int left,int right){
	int mid=(left+right)/2;
	msort(left,mid);
	msort(mid+1,right);
	int temp=mid+1,k=0;
	while(left<=mid&&temp<=right){
		if(a[left]>a[temp])
			b[k++]=a[temp++];
		else
			b[k++]=a[left++];
	}
	while(left<=mid)
		b[k++]=a[left++];
	while(temp<=right)
		b[k++]=a[temp++];
	for(int i=0;i<k;i++)
		a[i]=b[i];
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	msort(0,n-1);
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
	return 0;
} 
