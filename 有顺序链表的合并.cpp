#include<stdio.h>
#include<stdlib.h>
typedef struct Link{
	int data;
	Link *Next;
}L;
void Creat(L *&p){
	L *s=NULL;L *t=NULL;
	s=(L *)malloc(sizeof(L));
	scanf("%d",&s->data);
	p=s;
	while(1){
		t=(L *)malloc(sizeof(L));
		scanf("%d",&t->data);
		if(t->data==-1)
			break;
		s->Next=t;
		s=t;
	}
	s->Next=NULL;
	return ;
}
void ComInsert(L *&p,L *&q){
	int i=1;
	L *t=NULL;L *s=NULL;L *m=NULL;
	m=(L *)malloc(sizeof(L));
	t=(L *)malloc(sizeof(L));
	s=(L *)malloc(sizeof(L));
	t=q;
	s=p;
	while(p!=NULL&&t!=NULL){
		if(i==1&&s->data>q->data){
			q->Next=s;
			s=q;
		}
		if(s->data<t->data&&s->Next->data>t->data){
				m=t;
				m->Next=s->Next;
				s->Next=m;
				printf("%d ",s->data);
		}
		if(s->data<t->data&&s->Next->data<t->data){
			s=s->Next;
			i++;
			if(s->Next=NULL){
				s->Next=t;
				return ;
		}
		}
		else{
			t=t->Next;
			i++;
		}
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
	printf("\n");
	return ;
}
int main(){
	L *p1=NULL;L *p2=NULL;
	Creat(p1);
	Creat(p2);
	ComInsert(p1,p2);
	Display(p1);
	return 0;
}
