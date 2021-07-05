#include<iostream>
#include<cstdlib>
using namespace std;

struct t{
	int data;
	t *l;
	t *r;
};

void Insert(t *&p,int k){
	if(p==NULL){
		p=(t *)malloc(sizeof(struct t));
		p->data=k;
		p->l=NULL;
		p->r=NULL;
		return; 
	}
	if(k>p->data) Insert(p->r,k);
	else Insert(p->l,k);
}

int find(t *p,int k){
	int n=0;
	while(p!=NULL){
		n++;
		if(p->data==k)
			return n;
		if(k<p->data) p=p->l;
		else p=p->r;
	}
	return -1;
}

int main(){
	int n,ans,k;
	cin>>n;
	t *T=NULL;
	for(int i=0;i<n;i++){
		cin>>k;
		Insert(T,k);
	}
	cin>>k;
	ans=find(T,k);
	cout<<ans;
	return 0;
}
