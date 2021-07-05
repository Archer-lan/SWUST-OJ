#include<stdio.h>
#include<string.h>
struct population{
	char name[20];
	int last;
	int now;
	int com;
}; 
population zero[1000];
population t;
population pop[1000];
void c(int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(pop[j].com<pop[j+1].com){
				t=pop[j];
				pop[j]=pop[j+1];
				pop[j+1]=t;
			}
			else if(pop[j].com==pop[j+1].com){
				for(int i=0;;i++){
					int a=(int)pop[j].name[i];
					int b=(int)pop[j+1].name[i];
					if(a>b){
						t=pop[j];
						pop[j]=pop[j+1];
						pop[j+1]=t;
						break;
					}
					else if(a==b)
						continue;
					else 
						break;
				}
			}
		}
	}	
}
int main(){
	int n,k=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%s",&pop[i].name);
	for(int i=0;i<n;i++)
		scanf("%d",&pop[i].last);
	for(int i=0;i<n;i++)
		scanf("%d",&pop[i].now);
	for(int i=0;i<n;i++)
		pop[i].com=pop[i].now-pop[i].last;
	c(n);
	for(int i=0;i<n;i++)
		if(pop[i].com==0)
			zero[k++]=pop[i];
	for(int i=0;i<n;i++)
		if(pop[i].com)
			printf("%d %s\n",pop[i].com,pop[i].name);
	for(int i=0;i<k;i++)
		printf("0 %s\n",zero[i].name);
	return 0;
}
