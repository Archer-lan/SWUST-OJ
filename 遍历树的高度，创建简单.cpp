#include<stdio.h>
#include<stdlib.h>
typedef char ElementType;
typedef struct TreeNode *BinTree;
struct TreeNode{
	ElementType Data;
	BinTree left;
	BinTree right;
};

void creat(BinTree &l){
	char c;
	scanf("%c",&c);
	if(c=='#') 
		l=NULL;
	else{
		l=(BinTree)malloc(sizeof(struct TreeNode));
		l->Data=c;
		creat(l->left);
		creat(l->right);
	}
}

int GetHeight(BinTree &b){
	int HL,HR;
	if(b){
		HL=GetHeight(b->left);
		HR=GetHeight(b->right);
		return HL>HR?HL+1:HR+1;
	}
	else return 0;
}

int main(){
	BinTree T;
	creat(T);
	printf("%d",GetHeight(T));
	return 0;
} 
