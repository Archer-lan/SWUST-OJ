#include<iostream>
#include<cstdlib>
using namespace std;

typedef struct node{
	int data;
	struct node *next;
}haxi; 

int main(){
	int m,n,k,count=-1;
	cin>>m>>n;
	haxi *q[100];
	for(int i=0;i<m;i++){
		haxi *l;
		l=(haxi *)malloc(sizeof(struct node));
		q[i]=l;
		l->next=NULL;
	}
	for(int i=0;i<n;i++){
		int num;
		cin>>num;
		haxi *r,*s;
		r=q[num%m];
		while(r->next!=NULL) r=r->next;
		if(r->next==NULL){
			s=(haxi *)malloc(sizeof(struct node));
			s->data=num;
			r->next=s;
			r=s;
			r->next=NULL;
		}
	}
	cin>>k;
	haxi *x=q[k%m];
	while(x){
		count++;
		if(x->data==k){
			cout<<k%m<<","<<count;
			return 0;
		}
		x=x->next;
	}
	cout<<"-1";
	return 0;
}
