#include<stdio.h>
#include<string.h>
int a[120];
void quicksort(int left,int right){
	int i,j,temp,t;
	if(left>right) return ;
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
	int b[1000],t;
	memset(b,0,sizeof(b));
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	for(int i=0;i<n;i++){
		b[a[i]]++;
	}
	for(int i=0;i<1000;i++){
		if(b[i]>1){
			for(int j=0;j<n;j++){
				if(a[j]==i){
					for(int k=j;k<n-1;k++){
						a[k]=a[k+1];
					}
					n-=1;
					b[i]--;
				}
				if(b[i]==1)
					break;
			}
		}
	}
	quicksort(0,n-1);
	printf("%d\n",n);
	for(int i=0;i<n;i++) printf("%d ",a[i]);
	return 0;
}
