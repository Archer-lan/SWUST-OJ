#include<stdio.h>
#include<string.h> 
int main(){
	int n;
	scanf("%d",&n);
	int a[1001];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int count[1001],t;
	memset(count,0,sizeof(int));
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i]==a[j])
				count[i]++;
		}
	}
	t=count[0];
	for(int i=0;i<n;i++){
		if(t<count[i])
			t=count[i];
	}
	printf("%d\n",t);
	return 0;
} 
