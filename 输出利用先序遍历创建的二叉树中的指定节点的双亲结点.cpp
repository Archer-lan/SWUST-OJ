#include<iostream>
#include<cstdlib>
using namespace std;

struct btree{
	char data;
	btree *p;
	btree *lc;
	btree *rc;
};

int flag = 0;
char c;
struct btree *Creat(char *s){
	if(s[flag]=='#') return NULL;
	btree *p=NULL;
	p=(btree *)malloc(sizeof(struct btree));
	p->data=s[flag];
	p->lc=NULL;
	p->rc=NULL;
	flag++;
	if(s[flag]!='#'){
		p->lc=Creat(s);
		if(p->lc!=NULL)
			p->lc->p=p;
	}
	flag++;
	if(s[flag]!='#'){
		p->rc=Creat(s);
		if(p->rc!=NULL)
			p->rc->p=p;
	}
	return p;
}

void find(btree *p){
	if(p==NULL) return;
	if(p->data==c){
		if(p->p==NULL)
			cout<<"#";
		else
			cout<<p->p->data;
		return;
	}
	find(p->lc);
	find(p->rc);
}

int main(){
	char s[1000];
	while(cin>>s){
		btree *P=NULL;
		P=Creat(s);
		flag=0;
		cin>>c;
		find(P);
	}
	return 0;
} 
