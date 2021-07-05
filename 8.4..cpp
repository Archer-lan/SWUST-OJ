#include<stdio.h>
int b[1000];
void quicksort(int left,int right){
	int temp,i,j,t;
	if(left>right)
		return ;
	i=left;
	j=right;
	temp=b[left];
	while(i<j){
		while(i<j&&b[j]>=temp)
			j--;
		t=b[i];
		b[i]=b[j];
		b[j]=t;	
		while(i<j&&b[i]<=temp)
			i++;
		t=b[i];
		b[i]=b[j];
		b[j]=t;
	}
	b[i]=temp;
	quicksort(left,i-1);
	quicksort(i+1,right);
	return ;
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n],k=0;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		if(a[i]%2!=0){
			b[k++]=a[i];
		}
	}
	quicksort(0,k-1);
	for(int i=0;i<k;i++){
		if(i==k-1)
			printf("%d",b[i]);
		else
			printf("%d,",b[i]);
	}
	return 0;
}
