#include<stdio.h>
void sort(int a[],int n){
	int t;
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
}
float c(int n,int a[]){
	float s=0;
	for(int i=0;i<n;i++)
		for(int j=0;j<=i;j++)
			s+=a[j];
	return s;
}
int main(){
	int n;
	scanf("%d",&n);
	int a[10000];float res;
	for(int i = 0;i<n;i++)
		scanf("%d",&a[i]);
	sort(a,n);
	res=c(n,a)/n;
	printf("%.2f\n",res);
	return 0;
} 
