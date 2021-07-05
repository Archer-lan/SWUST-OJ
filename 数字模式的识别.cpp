#include<stdio.h>
#include<string.h>
int a[2000001];
int main(){
	int n;
	scanf("%d",&n);
	int t,max=0,num;
	memset(a,0,sizeof(int));
	while(n--){
		scanf("%d",&t);
		a[t]++;
	}
	for(int i=0;i<2000001;i++){
		if(a[i]>max){
			max=a[i];
			num=i;
		}
	}
	printf("%d\n",num);
	return 0;
}
