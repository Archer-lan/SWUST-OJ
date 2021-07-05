#include<iostream>
#include<cstdlib>
using namespace std;
struct TreeNode{
	char data;
	TreeNode *Left;
	TreeNode *Right;
};
typedef struct TreeNode *Tree;

void Creat(Tree &p){
	char a;
	cin>>a;
	if(a=='#') p=NULL;
	else{
		p=(Tree)malloc(sizeof(struct TreeNode));
		p->data=a;
		Creat(p->Left);
		Creat(p->Right);
	}
}

int search(Tree p){
	int a=0;
	while(p){
		a++;
		p=p->Right;
	}
	return a;
}

int main(){
	Tree p;
	Creat(p);
	cout<<search(p);
	return 0;
}
