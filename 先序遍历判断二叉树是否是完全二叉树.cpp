#include<iostream>
#include<cstdlib>
using namespace std;

struct btree {
    char data;
    btree *lc;
    btree *rc;
};

int fl=0;

struct btree *Creat(char *s);

bool hbt(btree *b);

int main() {
    char s[1000];
    while(cin>>s) {
        btree *P=Creat(s);
        fl=0;
        hbt(P) ? cout<<"Y":cout<<"N";
    }
    return 0;
}

btree *Creat(char *s){
    if(s[fl]=='#')return NULL;
    btree *p=NULL;
    p=(btree *)malloc(sizeof(btree));
    fl++;
    if(s[fl]!='#'){
        p->lc=Creat(s);
    }
    fl++;
    if(s[fl]!='#'){
        p->rc=Creat(s);
    }
    return p;
}

bool hbt(btree *b){
	if(b==NULL){
		return true;
	}
	else if(b->lc!=NULL&&b->rc==NULL){
		return false;
	}
	else if(b->lc==NULL&&b->rc!=NULL){
		return false;
	}
	else return (hbt(b->lc)&&hbt(b->rc));
}
