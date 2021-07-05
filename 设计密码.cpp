#include<stdio.h>
#include<string.h>
int main(){
	int m;
	scanf("%d",&m);
	for(int i=0;i<m;i++){
		char a[50];
		int l,count=0;
		scanf("%s",a);
		l=strlen(a);
		if(l>=8&&l<=16){
			for(int i=0;i<l;i++){
				if(a[i]>='A'&&a[i]<='Z'){
					count++;
					break;
				}
			}
			for(int i=0;i<l;i++){
				if(a[i]>='a'&&a[i]<='z'){
					count++;
					break;
				}
			} 
			for(int i=0;i<l;i++){
				if(a[i]>='0'&&a[i]<='9'){
					count++;
					break;
				}
			} 
			for(int i=0;i<l;i++){
				if(a[i]=='~'||a[i]=='!'||a[i]=='@'||a[i]=='#'||a[i]=='$'||a[i]=='%'||a[i]=='^'){
					count++;
					break;
				}
			}
			if(count>=3)
				printf("YES\n");
			else
				printf("NO\n");
		}
		else
			printf("NO\n");
	}
	return 0;
} 
