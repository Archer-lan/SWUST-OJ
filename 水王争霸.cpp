#include<stdio.h>
#include<string.h>
struct shui{
	char name[21];
	char score[10001];
};
shui s[1001];
shui t;
void cmp(int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(strlen(s[j].score)<strlen(s[j+1].score)){
				t=s[j+1];
				s[j+1]=s[j];
				s[j]=t;
			}
			else if(strlen(s[j].score)==strlen(s[j+1].score)){
					if(strcmp(s[j].score,s[j+1].score)<0){
						t=s[j];
						s[j]=s[j+1];
						s[j+1]=t;
					}
					else if(strcmp(s[j].score,s[j+1].score)==0){
						if(strcmp(s[j].name,s[j+1].name)>0){
							t=s[j];
							s[j]=s[j+1];
							s[j+1]=t;
						}
					}
			}
		}
	}
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%s%s",&s[i].name,&s[i].score);
	cmp(n);
	for(int i=0;i<n;i++){
		printf("%s\n",s[i].name);}
	return 0;
}
