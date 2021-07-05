#include<stdio.h>
#include<stdlib.h>
typedef char Elementtype;
typedef struct cNode *Ptr;
struct cNode{
	Elementtype data[2];
	Ptr Next;
};
typedef Ptr L;

L Creat(int n){
	L s;L t;L p;
	s=(L)malloc(sizeof(struct cNode));
	p=(L)malloc(sizeof(struct cNode));
	s->Next=NULL;
	scanf("%s",&s->data);
	p=s;
	for(int i=0;i<n-1;i++){
		t=(L)malloc(sizeof(struct cNode));
		scanf("%s",&t->data);
		s->Next=t;
		s=t;
	}
	s->Next=NULL;
	return p;
}
L Insert(L p1,L p2){
	L t=p1;
	while(p1->Next!=NULL){
		p1=p1->Next;
	}
	p1->Next=p2;
	return t;
}
void Display(L p){
	while(p){
		L t=p;
		printf("%s ",p->data);
		p=p->Next;
		free(t);
	}
	return ;
}

int main(){
	int n;
	L p1,p2;
	p1=NULL;p2=NULL;
	scanf("%d",&n);
	p1=Creat(n);
	scanf("%d",&n);
	p2=Creat(n);
	p1=Insert(p1,p2);
	Display(p1);
	return 0;
}
