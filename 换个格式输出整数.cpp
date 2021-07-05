#include<stdio.h>
#include<string.h>
int main(){
	char n[4];
	scanf("%s",&n);
	 for(int i=strlen(n);i>0;i--){
        for(int j=1;j<=(n[strlen(n)-i]-'0');j++){
            if(i==3)
                printf("B");
            if(i==2)
                printf("S");
            if(i==1)
                printf("%d",j);
        }
    }
	return 0;
} 
