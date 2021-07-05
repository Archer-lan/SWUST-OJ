#include<stdio.h>
#include<string.h>

#define maxsize 12
struct node{
	char s[10];
};
node n1[12];

int find(char s[]){
	int k = strlen(s)-2;
	int z =int(s[k])-97;
	if(strcmp(s,n1[z%12].s)==0) 
		return 1;
	else return 0;
}

int main(){
	strcpy(n1[8].s,"if");
	strcpy(n1[6].s,"else");
	strcpy(n1[2].s,"for");
	strcpy(n1[11].s,"while");
	strcpy(n1[3].s,"do");
	strcpy(n1[1].s,"int");
	strcpy(n1[0].s,"read");
	strcpy(n1[7].s,"write");
	char a[10];
	scanf("%s",&a);
	printf("%s\n",a);
	printf("%d",find(a));
}
