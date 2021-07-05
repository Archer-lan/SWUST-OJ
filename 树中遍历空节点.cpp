#include<iostream>
#include<cstdlib>
using namespace std;
typedef struct Tree *BT;
struct Tree{
	char data;
	BT Left;
	BT Right;
};
int i=0,j=0;
BT Creat(char c[]){
	if(c[i]=='#') return NULL;
	BT p=NULL;
	p=(BT)malloc(sizeof(struct Tree));
	i++;
	if(c[i]!='#'){
		p->Left=Creat(c);
	}
	i++;
	if(c[i]!='#')
		p->Right=Creat(c);
	return p;
}

void search(BT b){
	if(b==NULL){
		j++;
		return;
	}
	search(b->Left);
	search(b->Right);
	return ;
}

int main(){
	char c[100];
	while(cin>>c){
		BT P=NULL;
		P=Creat(c);
		i=0;
		search(P);
		cout<<j;
		j=0;
	}
	return 0;
}
