#include<iostream>
#include<cstdlib>
using namespace std;
struct TreeNode{
	char Data;
	TreeNode *L;
	TreeNode *R;
};
typedef struct TreeNode *Tree;
int i=0,j=0;
int sum[200],dex=0;

Tree Creat(char *a){
	Tree L;
	if(a[i]=='#') L=NULL;
	else{
		L=(Tree)malloc(sizeof(TreeNode));
		i++;
		L->Data=a[i];
		L->L=Creat(a);
		i++;
		L->R=Creat(a);
	}
	return L;
}

void Findson(Tree L){
	if(L){
		if(L->L==NULL&&L->R==NULL)
			j++;
		Findson(L->L);
		Findson(L->R);
	}
}

void Broad(Tree L,int i){
	if(L==NULL) return ;
	else{
		sum[i]++;
		if(dex<sum[i]) dex=sum[i];
		Broad(L->L,i+1);
		Broad(L->R,i+1);
	}
}

void Search(Tree L){
	if(L==NULL) return ;
	if((L->L==NULL&&L->R!=NULL)||(L->L!=NULL&&L->R==NULL))
		j++;
	Search(L->L);
	Search(L->R);
	return ;
}

int main(){
	char a[100]; 
	while(cin>>a){
		Tree T;
		i=0,j=0;
		T=Creat(a);
		Search(T); 
		cout<<j;
	}
	return 0;
}
