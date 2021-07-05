#include<stdio.h>
#include<stdlib.h>
typedef char ElementType;
typedef struct TreeNode *BinTree;
struct TreeNode{
	ElementType Data;
	BinTree Left;
	BinTree Right;
};
int i=0,j=0;
BinTree Creat(char *a){
	BinTree l;
	if(a[i]=='#') l=NULL;
	else{i++;
		l=(BinTree)malloc(sizeof(struct TreeNode));
		l->Data=a[i];
		l->Left=Creat(a);
		i++;
		l->Right=Creat(a);
	}
	return l;
}

void Findson(BinTree &l){
	if(l){
		if(l->Left==NULL&&l->Right==NULL)
			j++;
		Findson(l->Left);
		Findson(l->Right);
	}
}

int main(){
	char a[100];
	while(~scanf("%s",a)){
		BinTree T;
		i=0,j=0;
		T=Creat(a);
		Findson(T);
		printf("%d",j);
	}
	return 0;
} 
