#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	int b[26];
	int n,i=0,p,max=0;
	scanf("%d",&n);
	scanf("%s",a);
	for(i=0;i<26;i++)
		b[i]=0;
	for(i=0;i<n;i++)
		b[a[i]-'a']++;
	for(i=0;i<26;i++){
		if(max<b[i]){
			max=b[i];
			p=i;
			}
	}
	printf("%c\n",p+'a');
	return 0;
}
