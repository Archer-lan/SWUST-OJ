#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;

typedef struct btree {
    char data;
    btree *lc;
    btree *rc;
}bt;

int fl=0;

bt *Creat(char *s,char *s2,int n);

void wbt(bt *b);

int main() {
    char s[100],s2[100];
    cin>>s>>s2;
    btree *P=Creat(s,s2,strlen(s));
    fl=0;
    wbt(P);
    return 0;
}

bt *Creat(char *s,char *s2,int n){
	if(n<=0)return NULL;int k;
	char *r=s;
    bt *p=(bt *)malloc(sizeof(bt));
    p->data=*(s2+n-1);
    for(r=s;r<s+n;r++){
    	if(*r==*(s2+n-1)){
    		break;
		}
	}
	k=r-s;
	p->lc=Creat(s,s2,k);
	p->rc=Creat(r+1,s2+k,n-k-1);
    return p;
}

void wbt(bt *b){
	if(b==NULL)return ;
	cout<<b->data;
	wbt(b->lc);
	wbt(b->rc);
}
