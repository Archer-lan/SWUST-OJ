#include<iostream>
#include<cstdlib>
using namespace std;

typedef struct btree{
	char data;
	btree *lc;
	btree *rc;
}T;
int fl=0;

T *Creat(char *s){
	if(s[fl]=='#') return NULL;
	T *p=NULL;
	p=(T *)malloc(sizeof(struct btree));
	fl++;
	if(s[fl]!='#')
		p->lc=Creat(s);
	fl++;
	if(s[fl]!='#')
		p->rc=Creat(s);
	return p;
}

int search(T *b){
	int ans=0;
	while(b!=NULL){
		ans++;
		b=b->rc;
	}
	return ans;
}

int main(){
	char s[100];
	while(cin>>s){
		T *P=Creat(s);
		fl=0;
		cout<<search(P);
	}
	return 0;
}
