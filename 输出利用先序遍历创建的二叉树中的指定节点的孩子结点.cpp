#include<iostream>
#include<cstdlib>
using namespace std;

struct btree{
	char data;
	btree *lc;
	btree *rc;
};

int flag=0;
char c;

struct btree *Creat(char *s){
	if(s[flag]=='#') return NULL;
	btree *p=NULL;
	p=(btree *)malloc(sizeof(struct btree));
	p->data=s[flag];
	flag++;
	if(s[flag]!='#')
		p->lc=Creat(s);
	flag++;
	if(s[flag]!='#')
		p->rc=Creat(s);
	return p;
}

void find(btree *p){
	if(p==NULL) return;
	if(p->data==c){
		cout<<"L:";
		if(p->lc!=NULL) cout<<p->lc->data;
		else cout<<"#";
		cout<<",R:"; 
		if(p->rc!=NULL) cout<<p->rc->data;
		else cout<<"#";
		return ;
	}
	find(p->lc);
	find(p->rc);
}

int main(){
	char s[1000];
	while(cin>>s){
		btree *P=Creat(s);
		flag=0;
		cin>>c;
		find(P);
	}
	return 0;
} 
