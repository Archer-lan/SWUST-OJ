#include<stdio.h>
#include<string.h>
const int n=10;
char a[n],ans[n];
int l,re[n]={0};
void dfs(int x){
	if(x==l){
		ans[x]='\0';
		printf("%s\n",ans);
		return;
	}
	for(int i=0;i<l;i++){
		if(re[i]==0){
			ans[x]=a[i];
			re[i]=1;
			dfs(x+1);
			re[i]=0;
		}
	}
}
int main(){
	scanf("%s",a);
	l=strlen(a);
	dfs(0);
	return 0;
}

