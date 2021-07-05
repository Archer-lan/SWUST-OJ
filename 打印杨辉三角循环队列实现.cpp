#include<iostream>
#include<cstdlib>
using namespace std; 
typedef struct l{
	int data;
	l *Next;
}L;

typedef struct q{
	L *front;
	L *rear;
}Queue;

void enQueue(Queue *&p){
	if(p->front==NULL){
		L *t=(L *)malloc(sizeof(L));
		p->front=t;
		p->rear=t;
		t->Next=t;
		return ;
	}
	L *t=(L *)malloc(sizeof(L));
	p->rear->Next=t;
	p->rear=t;
	t->Next=p->front;
}

int deQueue(Queue *&p){
	if(p->front==p->rear){
		int t=p->front->data;
		free(p->front);
		p->front=NULL;
		p->rear=NULL;
		return t;
	}
	int t=p->front->data;
	L *e=p->front;
	p->front=p->front->Next;
	free(e);
	p->rear->Next=p->front;
	return t;
}

void yanghui(int n){
	Queue *P=(Queue *)malloc(sizeof(Queue));
	P->front=NULL;
	P->rear=NULL;
	enQueue(P);
	P->rear->data=1;
	for(int i=1;i<n;i++){
		int k=0;
		enQueue(P);
		P->rear->data=1;
		for(int j=1;j<i;j++){
			k=deQueue(P);
			enQueue(P);
			P->rear->data=k+P->front->data;
			cout<<k<<' ';
		}
		enQueue(P);
		P->rear->data=1;
		cout<<deQueue(P)<<' ';
		cout<<endl;
	}
	for(int i=1;i<n;i++){
		cout<<deQueue(P)<<' ';
	}
	cout<<deQueue(P)<<' '<<endl;
	return ;
}

int main(){
	int n;
	cin>>n;
	yanghui(n);
	return 0;
}
