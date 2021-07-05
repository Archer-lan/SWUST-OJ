#include<iostream>
#include<cstdlib>
#include<cstring> 
using namespace std;

typedef struct btree{
	char data;
	btree *l;
	btree *r;
}bt;

bt *Creat(char *s,char *s2,int n){
	if(n<=0) return NULL;int k;
	char *r=s;
	bt *p=(bt *)malloc(sizeof(bt));
	p->data=*(s2+n-1);
	for(r=s;r<s+n;r++){
		if(*r==*(s2+n-1))
			break;
	}
	k=r-s;
	p->l=Creat(s,s2,k);
	p->r=Creat(r+1,s2+k,n-k-1);
	return p;
}

void output(bt *b){
	if(b==NULL) return ;
	cout<<b->data;
	output(b->l);
	output(b->r);
}

int main(){
	char s[100],s2[100];
	cin>>s>>s2;
	bt *P=Creat(s,s2,strlen(s));
	output(P);
	return 0;
}
