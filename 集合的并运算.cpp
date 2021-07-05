#include<stdio.h>
int main(){
	int n1,n2,k,f;
	int a[100],b[100];
	scanf("%d",&n1);
	for(int i=0;i<n1;i++)
		scanf("%d",&a[i]);
	scanf("%d",&n2);
	for(int i=0;i<n2;i++)
		scanf("%d",&b[i]);
	k=n1;
	for(int i=0;i<n2;i++){
		f=0;
		for(int j=0;j<n1;j++){
			if(b[i]==a[j]){
				f=1;
				break;
			}
		}
		if(f==0){
			a[k]=b[i];
			k++;
		}
	} 
	for(int i=0;i<k;i++)
		printf("%d ",a[i]);
	return 0;
}
