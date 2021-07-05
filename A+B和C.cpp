#include<stdio.h>
#include<string.h>
int main(){
	char a[15],b[15],c[15];
	int n,x,y,z,t,l,l1,l2,l3;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%s%s%s",a,b,c);
		l1=strlen(a)-1;l2=strlen(b)-1;l3=strlen(c);
		l=l1>l2?l1:l2;
		for(int j=l;j>=0;j--){
			x=a[l1]-'0';
			y=b[l2]-'0';
			z=x+y;
			if(l1>l2){
				t=z-x;
				if(z>=10){
					a[l1-1]+=1;
					for(int k=l1-1;;k--){
						if(a[k]==10)
							a[k]+=1;
						else
							break;
					}
				}
				a[l1]+=t;
			}
			else{
				t=z-y;
				if(z>=10){
					b[l2-1]+=1;
					for(int k=l1-1;;k--){
						if(a[k]==10)
							a[k]+=1;
						else
							break;
					}
				}
				b[l2]+=t;
			}
			l1--;l2--;
		}
		printf("%s\n%s\n",a,b);
		if(l1>l2){
			if(strcmp(a,c)>0)
				printf("Case #%d: true\n",i);
			else
				printf("Case #%d: false\n",i);
		}
		else{
			if(strcmp(b,c)>0)
				printf("Case #%d: true\n",i);
			else
				printf("Case #%d: false\n",i);
		}
	}
	return 0;
} 
