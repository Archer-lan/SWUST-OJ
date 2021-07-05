#include<stdio.h>
void findmax(int a[],int n){
	int t= a[0];int m=a[0];
	for(int i=0;i<n;i++){
		if(a[i]>t){
			t=a[i];
		}
		if(a[i]<m)
			m=a[i];
	}
	printf("Max=%d Min=%d\n",t,m);
}

int main(){
	int n,max;
	int a[100];
	scanf("%d",&n);
	for(int i;i<n;i++)
		scanf("%d",&a[i]);
	findmax(a,n);
	return 0;
} 
