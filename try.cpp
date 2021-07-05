#include<iostream>
#include<cstdlib>
using namespace std;

struct btree {
    char data;
    btree *p;
    btree *lc;
    btree *rc;
};

int fl=0;

char c;
struct btree *Creat(char *s);

void hbt(btree *b);

int main() {
    char s[1000];
    while(cin>>s) {
        btree *P=Creat(s);
        P->p=NULL;
        fl=0;
        cin>>c;
        hbt(P);
    }
    return 0;
}

btree *Creat(char *s){
    if(s[fl]=='#')return NULL;
    btree *p=NULL;
    p=(btree *)malloc(sizeof(btree));
    p->data=s[fl];
    p->lc=NULL;
    p->rc=NULL; 
    fl++;
    if(s[fl]!='#'){
        p->lc=Creat(s);
        if(p->lc!=NULL)
        p->lc->p=p;
    }
    fl++;
    if(s[fl]!='#'){
        p->rc=Creat(s);
        if(p->lc!=NULL)
        p->lc->p=p;
    }
    return p;
}

void hbt(btree *b){
    if(b==NULL)return ;
    if(b->data==c){
    	int num=0;
    	if(b->p!=NULL){
    		num++;
		}
		if(b->lc!=NULL){
			num++;
		}
		if(b->rc!=NULL){
			num++;
		}
		cout<<num;
    	return ;
	}
    hbt(b->lc);
    hbt(b->rc);
}
