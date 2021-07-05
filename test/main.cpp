#include<stdio.h>
#include<stdlib.h>
typedef int Elementtype;
typedef struct Node *Ptr;
struct Node{
	Elementtype data;
	Ptr Prior;
	Ptr Next;
};
typedef Ptr L;

L CreatNode(int n){
	L p,s,t;
	p=(L)malloc(sizeof(struct Node));
	s=(L)malloc(sizeof(struct Node));
	scanf("%d",&s->data);
	s->Prior=NULL;s->Next=NULL;
	p=s;
	for(int i=0;i<n-1;i++){
		t=(L)malloc(sizeof(struct Node));
		scanf("%d",&t->data);
		s->Next=t;
		t->Prior=s;
		s=t;
	}
	s->Next=p;p->Prior=s;
	return p;
}

void Display(L p,int n){
	for(int i=0;i<n;i++){
		L t=p;
		printf("%d ",p->data);
		p=p->Next;
		free(t);
	}
}


int main(){
	int n;
	scanf("%d",&n);
	L P;
	P=NULL;
	P=CreatNode(n);
	Display(P,n);
	return 0;
}
