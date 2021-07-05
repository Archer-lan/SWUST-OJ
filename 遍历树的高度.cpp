#include<stdio.h>
#include<stdlib.h>
typedef char ElementType;
typedef struct TreeNode *BinTree;
struct TreeNode{
	ElementType Data;
	BinTree left;
	BinTree right;
};
int n=0;
BinTree Creat(char *s){
	if(s[n]=='#') return NULL;
	BinTree p=NULL;
	p=(BinTree)malloc(sizeof(struct TreeNode));
	n++;
	if(s[n]!='#'){
		p->left=Creat(s);
	}
	n++;
	if(s[n]!='#'){
		p->right=Creat(s);
	}
	return p;
}
int GetHight(BinTree b){
	int HL,HR;
	if(b){
		HL=GetHight(b->left);
		HR=GetHight(b->right);
		return HL>HR?HL+1:HR+1;
	}
	else return NULL;
}

int main(){
	char s[100];
	while(~scanf("%s",s)){
		BinTree P=Creat(s);
		n=0;
		printf("%d",GetHight(P));
	}
	return 0;
}
