#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	char name[n][20];
	char t[20];
	for(int i=0;i<n;i++){
		scanf("%s",name[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(name[j][0]>name[j+1][0]){
				if(name[j][0]>name[j+1][0]){
						t=name[j];
						name[j]=name[j+1];
						name[j+1]=t;
				}
			}
			if(name[j][0]==name[j+1][0]){
				for(int k=1;k<20;k++){
					if(name[j][k]>name[j+1][k]){
						t=name[j];
						name[j]=name[j+1];
						name[j+1]=t;
						break;
					}
					if(name[j][k]<name[j+1][k])
						break;
				}
			}
		}
	}
	for(int i=0;i<n;i++){
		printf("%s\n",name[i]);
	}
	return 0;
} 
