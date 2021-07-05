#include<stdio.h>
int BinarySearch(int a[],int n,int num){
	int L=0,times=0,mid;
	int R=n-1;
	while(L<=R){
		mid=L+(R-L)/2;
		times++;
		if(a[mid]=num){
			printf("%d\n",mid);
			return times;
		}
		else if(num>a[mid])
			L=mid+1;
		else
			R=mid-1;
	}
	printf("-1\n");
	return times;
}
int main(){
	int n,num,res;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	scanf("%d",&num);
	res=BinarySearch(a,n,num);
	printf("%d\n",res);
	return 0;
}
