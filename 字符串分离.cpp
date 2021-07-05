#include <stdio.h>
#include <string.h>
int main(){
	char a[201];
	while(~scanf("%s",a)){
		int i=0,j=0,k=0,l,m,y,t;
		char b[100],c[100],d[100];
		l=strlen(a);
		for(int z=0;z<l;z++){
			if(a[z]>=97&&a[z]<=122){
				b[i]=a[z];
				i++;
			}
			else if(a[z]>=65&&a[z]<=90){
				b[i]=a[z];
				i++;
			}
			else if(a[z]=='0'||a[z]=='1'||a[z]=='2'||a[z]=='3'||a[z]=='4'||a[z]=='5'||a[z]=='6'||a[z]=='7'||a[z]=='8'||a[z]=='9'){
				c[j]=a[z];
				j++;
			}
			else{
				d[k]=a[z];
				k++;
			}
		}
	m=strlen(b);y=strlen(c);t=strlen(d);
	for(int z=0;z<m-1;z++)
		printf("%c",b[z]);
	printf("\n");
	for(int z=0;z<y-1;z++)
		printf("%c",c[z]);
	printf("\n");
	for(int z=0;z<t-1;z++)
		printf("%c",d[z]);
	printf("\n");
	}
	return 0;
}

