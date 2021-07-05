#include<stdio.h>
#include<string.h>
int main(){
	int n;
	scanf("%d",&n);
	char c[101][20],t[20];
	for(int i=0;i<n;i++)
		scanf("%s",&c[i]); 
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(strcmp(c[i],c[j])>0){
				strcpy(t,c[i]);
				strcpy(c[i],c[j]);
				strcpy(c[j],t);
			} 
		}
	}
	for(int i=0;i<n;i++)
		printf("%s\n",c[i]);
	return 0;
}
