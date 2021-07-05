#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
typedef char ElementType;
typedef struct TreeNode *BinTree;
struct TreeNode{
	ElementType Data;
	BinTree left;
	BinTree right;
};
int sum[200],dex=0;
void Creat(BinTree &l){
	char c;
	scanf("%c",&c);
	if(c=='#') l=NULL;
	else{
		l=(BinTree)malloc(sizeof(struct TreeNode));
		l->Data=c;
		Creat(l->left);
		Creat(l->right);
	}
}
void Deep(BinTree &l,int i){
	if(l==NULL) return ;
	else{
		sum[i]++;
		if(sum[i]>dex) dex=sum[i];
		Deep(l->left,i+1);
		Deep(l->right,i+1);
	}
}

int main(){
	memset(sum,0,sizeof(int));
	BinTree T;
	Creat(T);
	Deep(T,0);
	printf("%d",dex); 
	return 0;
}
