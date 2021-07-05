#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int cmp(const void *a,const void *b){
	return (strcmp((char *)a,(char *)b));
}
int main(){
	int n;
	scanf("%d",&n);
	int lena,lenb;
	for(int i=0;i<n;i++){
		char a[20],b[20],t;
		scanf("%s %s",&a,&b);
		lena=strlen(a);
		lenb=strlen(b);
		qsort(a,lena,sizeof(char),cmp);
		qsort(b,lenb,sizeof(char),cmp);
		if(strcmp(a,b)==0)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
} 
