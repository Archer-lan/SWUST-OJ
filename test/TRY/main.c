#include<stdio.h>
#include<stdlib.h>
typedef int Elementtype;
typedef struct LNode{
	Elementtype data;
	struct node *Next;
}*List,L;

void Creat(List p,int n){
	L *s=NULL;L *t=NULL;
	s=(L *)malloc(sizeof(struct LNode));
	scanf("%d",&s->data);
	p=s;
	for(int i=0;i<n-1;i++){
		t=(L *)malloc(sizeof(struct LNode));
		scanf("%d",&t->data);
		s->Next=t;
		s=t;
	}
	s->Next=NULL;
	return ;
}

int Delete(List p,int m,int n){
	List t=NULL;
	t=(List)malloc(sizeof(struct LNode));
	t=p;
	if(m<=n&&m>0){
		for(int i=0;i<m-2;i++){
			t=t->Next;
		}
		L *s=t->Next;
		t->Next=s->Next;
		free(s);
		return 1;
	}
	else
		return -1;
}

void Display(List p){
	while(p){
		List t=p;
		printf("%d ",p->data);
		free(t);
	}
	return ;
}

int main(){
	int n,m;
	List p;
	p=NULL;
	scanf("%d",&n);
	Creat(p,n);
	scanf("%d",&m);
	Delete(p,m,n);
	Display(p);
	return 0;
}
