#include<stdio.h>
#include<stdlib.h>
typedef char Elementtype;
typedef struct node{
	Elementtype data;
	struct node *next;
}*List;

void ListInsert(List &p,int n){
	List s=NULL,t=NULL;
	int i=1;
	s=(List)malloc(sizeof(struct node));
	scanf("%c",&s->data);
	p=s;
	while(i<=n){
		t=(List)malloc(sizeof(struct node));
		scanf("%c",&t->data);
		if(t==NULL) break;
		s->next=t;
		s=t;
		i++;
	}
	s->next=p;
	return ;
}

void Display(List p,int n){
	List t=p,k=p;
	for(int i=0;i<n;i++){
	while(t->next!=k){
		t=t->next;
	}
	printf("%c ",t->data);
	k=t;
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
