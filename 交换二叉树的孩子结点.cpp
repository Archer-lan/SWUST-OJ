#include<iostream>
#include<cstdlib>
using namespace std;

typedef struct btree {
    char data;
    btree *lc;
    btree *rc;
}bt;

int fl=0;

bt *Creat(char *s);

void wbt(bt *b);

void fa(bt *b);

void fb(bt *b);

int main() {
    char s[100];
    while(cin>>s) {
        btree *P=Creat(s);
        fl=0;
        wbt(P);
        fa(P);
        cout<<endl;
        fb(P);
    }
    return 0;
}

bt *Creat(char *s){
    if(s[fl]=='#')return NULL;
    bt *p=NULL;
    p=(bt *)malloc(sizeof(bt));
    p->data=s[fl];
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

void wbt(bt *b){
    if(b==NULL)return ;
    else{
        bt *t=b->lc;
        b->lc=b->rc;
        b->rc=t;
        wbt(b->lc);
        wbt(b->rc);
    }
}

void fa(bt *b){
    if(b==NULL)return ;
    fa(b->lc);
    cout<<b->data;
    fa(b->rc);
}

void fb(bt *b){
    if(b==NULL)return ;
    cout<<b->data;
    fb(b->lc);
    fb(b->rc);
}
