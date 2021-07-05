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
	T *a=b;
	if(a==NULL) return 0;
	int ans=0;
	while(a!=NULL){
		ans++;
		a=a->rc;
	}
	if(ans>search(b->lc)) return ans;
	return search(b->lc);
}

int main(){
	char s[100];
	while(cin>>s){
		T *P=Creat(s);
		fl=0;
		if(P->rc==NULL)
			cout<<search(P);
		else
			cout<<"ERROR";
	}
	return 0;
}
