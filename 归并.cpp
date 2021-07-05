#include<stdio.h>
void msort(int *arr,int *temparr,int start,int mid,int end){
	int left_start=start;
	int left_end=mid;
	int right_start=mid+1;
	int right_end=end;
	int index=start;
	while(left_start<=left_end&&right_start<=right_end){
		if(arr[left_start]>arr[right_start])
			temparr[index++]=arr[right_start++];
		else
			temparr[index++]=arr[left_start++];
	}
	while(left_start<=left_end){
		temparr[index++]=arr[left_start++];
	}
	while(right_start<right_end)
		temparr[index++]=arr[right_start++];
	for(index=start;index<=end;++index)
		arr[index]=temparr[index];
}
void sortm(int *arr,int *temparr,int start,int end){
	int mid=(start+end)/2;
	sortm(arr,temparr,start,mid);
	sortm(arr,temparr,mid+1,end);
	msort(arr,temparr,start,mid,end);
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n],temp[n];
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	sortm(a,temp,0,n-1);
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
	return 0;
}
