#include<iostream>
#include<cstdlib>
using namespace std;
typedef struct Tree *Bt;
struct Tree{
	char c;
	Bt Left;
	Bt Right;
};
int i=0;
Bt Creat(char c[]){
	if(c[i]=='#') return NULL;
	Bt p=NULL;
	p=(Bt)malloc(sizeof(struct Tree));
	i++;
	if(c[i]!='#')
		p->Left=Creat(c);
	i++;
	if(c[i]!='#')
		p->Right=Creat(c);
	return p;
}

int search(Bt p,int j){
	if(p==NULL)
		return 0;
	if((p->Left!=NULL&&p->Right!=NULL))
		j++;
	search(p->Left,j);
	search(p->Right,j);
	return j;
}
int main(){
	char c[100];
	while(cin>>c){
		Bt P=Creat(c);
		i=0;int k=0;
		k=search(P,0);
		cout<<k;
	}
	return 0;
}
