#include<stdio.h>
int a[1001];
void quicksort(int left,int right){
	int temp,i,j,t;
	if(left>right)
		return ;
	i=left;
	j=right;
	temp=a[left];
	while(i<j){
		while(i<j&&a[j]>=temp)
			j--;
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		while(i<j&&a[i]<=temp)
			i++;
			t=a[i];
			a[i]=a[j];
			a[j]=t;
	}
	a[i]=temp;
	quicksort(left,i-1);
	quicksort(i+1,right);
	return ;
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
	quicksort(1,n);
	for(int i=1;i<=n;i++){
		printf("%d ",a[i]);
	}
	return 0;
} 
