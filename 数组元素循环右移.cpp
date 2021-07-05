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
	s->Next=p;
	return ;
}
void Display(L *&p,int m,int n){
	for(int i=0;i<n-m;i++){
		p=p->Next;
	}
	for(int j=0;j<n;j++){
		L *t=p;
		if(j!=n-1)	printf("%d ",p->data);
		else printf("%d",p->data);
		p=p->Next;
		free(t);
	}
}
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	m=m%n;
	L *p=NULL;
	Creat(p,n);
	Display(p,m,n);
	return 0;
} 
