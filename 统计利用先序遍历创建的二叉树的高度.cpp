#include<stdio.h>
#include<stdlib.h>
struct TreeNode{
	char Data;
	TreeNode *L;
	TreeNode *R;
}; 
typedef struct TreeNode *Tree;

int sum[200]={0},dex=0;
void Creat(Tree &L){
	char c;
	scanf("%c",&c);
	if(c=='#')	L=NULL;
	else{
		L=(Tree)malloc(sizeof(TreeNode));
		L->Data=c;
		Creat(L->L);
		Creat(L->R);
	}
}

int Height(Tree L){
	int HL,HR;
	if(L){
		HL=Height(L->L);
		HR=Height(L->R);
		return HL>HR?HL+1:HR+1;
	}
	else return 0;
}

void Broad(Tree L,int i){
	if(L==NULL) return ;
	else{
		sum[i]++;
		if(sum[i]>dex) dex=sum[i];
		Broad(L->L,i+1);
		Broad(L->R,i+1);
	}
}

int main(){
	Tree T;
	Creat(T);
	Broad(T,0);
	printf("%d",dex);
	return 0;
}
