#include<stdio.h>
void sort(int n,int a[]);
int search(int b,int n,int a[]);
int main(){
	int n;
	while(~scanf("%d",&n)){
		int m,res,a1[n];
		for(int i=0;i<n;i++)
			scanf("%d ",&a1[i]);
		scanf("%d",&m);
		sort(n,a1);
		res=search(m,n,a1);
		for(int i=0;i<n;i++){
			printf("%d",a1[i]);
			if(i%10==9)
				printf("\n");
			else
				printf(" "); 
		}
		printf("\n");
		printf("%d\n",res);
	}
	return 0;
}
int search(int b,int n,int a[]){
	int count=0;
	for(int i=0;i<n;i++){
		if(b==a[i])
			count++;
	}
	return count;
} 
void sort(int n,int a[]){
	int temp;
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j]<=a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	return ;
}
