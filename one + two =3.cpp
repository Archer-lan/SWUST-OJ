#include<stdio.h>
#include<string.h>
int swp(char b[]){
	int n;
	if(strcmp(b,"zero")==0) n=0;
	else if(strcmp(b,"one")==0) n=1;
	else if(strcmp(b,"two")==0) n=2;
	else if(strcmp(b,"three")==0) n=3;	
	else if(strcmp(b,"four")==0) n=4;
	else if(strcmp(b,"five")==0) n=5;
	else if(strcmp(b,"six")==0) n=6;
	else if(strcmp(b,"seven")==0) n=7;
	else if(strcmp(b,"eight")==0) n=8;
	else if(strcmp(b,"nine")==0) n=9;
	return n;
}
int mian(){
	while(1){
		int sum1=0,sum2=0,end=0;
		char *b;
		char a[50];
		scanf(gets(a));
		for(int i=0;;i++){
			if(i==0)
				b=char *strtok(char *a," ");
			else{
				b = char *strtok(NULL," ");
			}
			if(b=="+") break;
			sum1*=10;
			sum1+=swp(b);
			if(sum1=0) end++;
		}
		for(int i=0;;i++){
			if(i==0)
				b=char *strtok(char *a," ");
			else{
				b=char *strtok(NULL," ");
			}
			if(b=="=") break;
			sum1*=10;
			sum2+=swp(b);
			if(sum2==0&&end==1) break;
		}
		printf("%d\n",sum1+sum2);
	}
	return 0;
}
