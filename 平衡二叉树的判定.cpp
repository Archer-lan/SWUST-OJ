#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;

struct btree {
    char data;
    int d;
    btree *lc;
    btree *rc;
};

int fl=0;

struct btree *Creat(char *s);

int hbt(btree *b);

bool find(btree *b);

int main() {
    char s[1000];
    while(cin>>s) {
        btree *P=Creat(s);
        fl=0;
        hbt(P);
        if(find(P))cout<<"yes!";
        else cout<<"no!";
    }
    return 0;
}

btree *Creat(char *s){
    if(s[fl]=='#')return NULL;
    btree *p=NULL;
    p=(btree *)malloc(sizeof(btree));
    fl++;
    p->lc=Creat(s);
    fl++;
    p->rc=Creat(s);
    return p;
}

int hbt(btree *b){
    if(b==NULL)return 0;
    int hl,hr;
    hl=hbt(b->lc);
    hr=hbt(b->rc);
    b->d=hl>hr ? hl+1:hr+1;
    return b->d;
}

bool find(btree *b){
    if(b==NULL)return true;
    if(b->lc==NULL){
        if(b->rc!=NULL){
            if(b->rc->d>1)return false;
            return true;
        }
        return true;
    }
    if(b->rc==NULL){
        if(b->lc!=NULL){
            if(b->lc->d>1)return false;
            return true;
        }
        return true;
    }
    if(((b->lc->d)-(b->rc->d)>1)||((b->lc->d)-(b->rc->d)<-1))return false;
    else if(find(b->lc)&&find(b->lc)){
        return true;
    }
    else{
        return false;
    }
}
