#include<stdio.h>
int sort(int a[],int n){
	int t;
	for(int i=1;i<=n-1;i++){
		for(int j=1;j<=n-i;j++){
			if(a[j]<a[j+1]){
				t=a[j+1];
				a[j+1]=a[j];
				a[j]=t;
			}
		}
	}
}
int reserch(int n,int s,int b[]){
	int num=0; 
	for(int i=1;i<=n;i++){
		if(s==b[i]){
			num=i;
			break;
		}
		else if(i==n&&num==0){
			printf("no this score!\n");
			return 1;}
	}
	printf("%d\n",num);
}
int main(){
	int n,s;
	int grade[n+1];
	while(~scanf("%d",&n)){
		for(int i=1;i<=n;i++)
			scanf("%d ",&grade[i]);
		scanf("%d",&s);
		sort(grade,n);
		for(int i=1;;i++){
			printf("%d",grade[i]);
			if(i%10==0)
				printf("\n");
			if(i==n)
				break;
			if(i%10!=0)
				printf(" ");
		}
		printf("\n");
		reserch(n,s,grade);
	}
	return 0;
} 
