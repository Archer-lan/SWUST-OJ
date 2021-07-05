#include<stdio.h>
#include<string.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		char c[103];int l,a=0,s=0,d=0;
		scanf("%s",c);
		l=strlen(c);
		for(int j=0;j<l;j++){
			if(c[j]=='A'||c[j]=='P'){
				if(c[j]=='P'){
					j++;
					if(c[j]=='A'){
						while(d<2){
							d++;
							j++;
							if(c[j]=='A') continue;
							if(c[j]=='T') {
								printf("YES\n"); 
								a=1;
							}
							else {
								s=1;
								printf("NO\n");
							}
							break;
						}
					}
					else{
						printf("NO\n");
						break;
					}
				}
			}
			else if(a==0&&s==0) {
				printf("NO\n");
				break;
			}
		}
	}
	return 0;
}
