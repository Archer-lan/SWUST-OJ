#include<stdio.h>
void input(int a[],int n){
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}
void sort(int a[],int n){
	int t;
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j]<a[j+1]){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}	
		}
	}
}
int found(int a[],int n,int d){
	for(int i=0;i<n;i++){
		if(d==a[i]){
			return i;
		}
	}
	return d;
}
int main(){
	int n;
	while(~scanf("%d",&n)){
		int a[n],d,res;
		input(a,n);
		scanf("%d",&d);
		sort(a,n);
		res=found(a,n,d);
		for(int i=0;i<n;i++){
			printf("%d",a[i]);
			if(i%10==9)
				printf("\n");
			else if(i==(n-1))
				printf("\n");
			else
				printf(" ");
		}
		if(res!=d)
			printf("%d\n",res+1);
		else
			printf("no this score!\n");
	}
	return 0;
} 
 
