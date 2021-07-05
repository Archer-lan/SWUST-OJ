#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	scanf(gets(a));
	int l,c=0,n=0,s=0,o=0;
	l=strlen(a);
	for(int i=0;i<l;i++){
		if(a[i]>=96&&a[i]<=122){
			c++;
		}
		else if(a[i]=='9'||a[i]=='8'||a[i]=='7'||a[i]=='6'||a[i]=='5'||a[i]=='4'||a[i]=='3'||a[i]=='2'||a[i]=='1'||a[i]=='0')
			n++;
		else if(a[i]==' ')
			s++;
		else
			o++;
	}
	printf("%d %d %d %d\n",c,n,s,o);
	return 0;
} 
