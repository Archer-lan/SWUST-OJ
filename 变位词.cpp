#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		char d[20],b[20];
		int dn[20],bn[20];
		int l1=0,l2=0,c=0;
		scanf("%s",&d);
		scanf("%s",&b);
		for(int i=0;;i++){
			if(d[i]=='\0')
				break;
			dn[i]=0;
			l1++;
			
		}
		for(int i=0;;i++){
			if(b[i]=='\0')
				break;
			dn[i]=0;
			l2++;
			
		}
		if(l1==l2){
			for(int i=0;i<l1;i++){
				for(int j=0;j<l2;j++){
					int x,y;
					printf("%c ",b[j]);
					x=(int)b[i];
					y=(int)d[j];
					if(x==y&&bn[j]!=1){
						bn[i]=1;
						c++;
						break;	
					}
				}
			}
			printf("%d\n",c);
			if(c==3)
				printf("Yes\n");
			else
				printf("No\n");
		}
		else
			printf("No\n");
	}
	return 0;
} 
