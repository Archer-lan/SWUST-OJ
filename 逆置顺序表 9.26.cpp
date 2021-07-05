#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	char data;
	struct node *next;
}*List;

void ListInsert(List p,int n){
	List s=NULL,t=NULL;
	int i=1;
	s=(List)malloc(sizeof(struct node));
	scanf("%c",&s->data);
	p=s;
	while(i<=n-1){
		t=(List)malloc(sizeof(struct node));
		scanf("%c",&t->data);
		s->next=t;
		s=t;
		i++;
	}
	s->next=NULL;
	return ;
}

void Display(List p,int n){
	while(p){
		List t=p;
		printf("%c ",p->data);
		free(t);
		p=p->next; 
	}
	return ;
}
int main(){
	int n;
	List p;
	scanf("%d",&n);
	ListInsert(p,n);
	Display(p,n);
	return 0;
} 
