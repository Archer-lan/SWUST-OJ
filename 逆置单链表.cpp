#include<stdio.h>
#include<stdlib.h>
typedef char Elementtype;
typedef struct Node *Ptr;
struct Node{
	Elementtype data;
	Ptr Prior;
	Ptr Next;
};
typedef Ptr L;

L Creat(int n){
	L p,s,t;
	s=(L)malloc(sizeof(struct Node));
	p=(L)malloc(sizeof(struct Node));
	getchar();
	scanf("%c",&s->data);
	s->Next=NULL;s->Prior=NULL;
	p=s;
	for(int i=0;i<n;i++){
		t=(L)malloc(sizeof(struct Node));
		scanf("%c",&t->data);
		s->Next=t;
		t->Prior=s;
		s=t;
	}
	s->Next=p;
	p->Prior=s;
	return p;
}

void ReDisplay(L p){
	L t=p;
	p=p->Prior;
	t->Prior=NULL;
	while(p->Prior!=NULL){
		L s=p;
		p=p->Prior;
		printf("%c ",p->data);
		free(s);
	}
	return ;
}

int main(){
	int n;
	scanf("%d",&n);
	L p;
	p=NULL;
	p=Creat(n);
	ReDisplay(p);
	return 0;
} 
