#include<stdio.h>
#include<string.h>
int main(){
	char a[100],c;
	int l1=0;
	for(int i=0;;i++){
		scanf("%c",&a[i]);
		if(a[i]=='@'){
			l1=i-2;
			break;
		}
	}
	for(int i=0;;i++){
		scanf("%c",&c);
		if(c=='#')
			break;
		if(a[l1]==c){
			l1--;
		}
	}
	if(l1==-1)
		printf("yes!");
	else
		printf("no!");
	return 0;
} 
