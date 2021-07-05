#include<stdio.h>
int main(){
	int n,l,res;
	scanf("%d",&n);
	char a[101];
	int count[n];
	scanf("%s",a);
	for(int i=0;i<n;i++){
		count[i]=0; 
		for(int j=i;j<n;j++){
			if(a[i]==a[j])
				count[i]++;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(count[i]<count[j]){
				res=j;
			} 
		}
	}
	printf("%c\n",a[res]);
	return 0;
}
