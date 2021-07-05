#include<iostream>
#include<cstdlib>
using namespace std;
struct t{
	int data;
	t *lc;
	t *rc;
};
void insert(t *&p,int k);
int find(t *p,int k);
int main(){
	int n;
	cin>>n;
	int k;
	t *h=NULL;
	for(int i=0;i<n;i++){
		cin>>k;
		insert(h,k); 
	}
	cin>>k;
	cout<<find(h,k);
}
void insert(t *&p,int k){
	if(p==NULL){
		p=(t*)malloc(sizeof(t));
		p->data=k;
		p->lc=p->rc=NULL;
		return ;
	}
	if(k<p->data){
		insert(p->lc,k);
	}
	else insert(p->rc,k);
}
int find(t *p,int k){
	int n=0;
	while(p!=NULL){
		n++;
		if(k==p->data){
			return n;
		}
		if(k<p->data){
			p=p->lc;
		}
		else p=p->rc;
	}
	return -1;
}
