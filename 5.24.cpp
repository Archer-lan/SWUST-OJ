#include<stdio.h>
#include<stdlib.h>
typedef struct Link{
	int data;
	Link *Next;
}L;
void Creat(L *&p,int n){
	L *s=NULL;L *t=NULL;
	s=(L *)malloc(sizeof(L));
	scanf("%d",&s->data);
	p=s;
	for(int i=0;i<n-1;i++){
		t=(L *)malloc(sizeof(L));
		scanf("%d",&t->data);
		s->Next=t;
		s=t;
	}
	s->Next=NULL;
	return ;
}
void Insert(L *&p,int n,int sta,int data){
	L *t;
	t=(L *)malloc(sizeof(L));
	t->data=data;
	if(sta>n||sta<1){
		printf("error!");
		p=NULL;
		return ;
	}
	t->Next=NULL;
	if(sta==1){
		t->Next=p;
		p=t;
	}
	else{
		L *s=p;
		int i=sta-1;
		while(--i){
			s=s->Next;
		}
		t->Next=s->Next;
		s->Next=t;
	}
	return ;
}
void Display(L *&p){
	while(p){
		L *t=p;
		printf("%d ",p->data);
		p=p->Next;
		free(t);
	}
	return ;
}
int main(){
	int n;
	scanf("%d",&n);
	L *p=NULL;
	Creat(p,n);
	int sta,data;
	scanf("%d%d",&sta,&data);
	Insert(p,n,sta,data);
	Display(p);
	return 0;
}
