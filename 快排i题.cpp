#include<stdio.h>
int a[100001],n;
void quicksort(int left,int right){
	if(left>right)
		return;
	int i,j,temp,t;
	i=left;
	j=right;
	temp=a[left];
	while(i!=j){
		while(a[j]>=temp&&i<j)
			j--;
		while(a[i]<temp&&i<j)
			i++;
		if(i<j){
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
	a[left]=a[i];
	a[i]=temp;
	quicksort(left,i-1);
	quicksort(i+1,right);
	return;
} 
int main(){
	int i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	quicksort(1,n);
	for(i=1;i<=n;i++){
		if(i!=n)
			printf("%d ",a[i]);
		else
			printf("%d ",a[i]);
	}
	return 0;
}
