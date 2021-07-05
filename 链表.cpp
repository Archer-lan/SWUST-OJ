#include<stdio.h>
#include<stdlib.h>
typedef struct Link{
	int data;
	Link *Next;
}L;
typedef struct Link *List;
List Creat(int n){
	List p=NULL;
	List s=NULL;
	List t=NULL;
	s=(List)malloc(sizeof(L));
	scanf("%d",&s->data);
	p=s;
	for(int i=0;i<n-1;i++){
		t=(List)malloc(sizeof(L));
		scanf("%d",&t->data);
		s->Next=t;
		s=t;
	}
	s->Next=NULL;
	return p;
}
int Length(List L){
	List k=L;int n=0;
	while(k){
		n++;
		k=k->Next;
	}
	return n;
}
void Display(List p){
	List t=p;
	while(p){	
		printf("%d",p->data);
		p=p->Next;
	}
	free(t);
	return ;
}
int main(){
	int n;
	scanf("%d",&n);
	List p=NULL;
	p=Creat(n);
	Display(p);
	printf("\n%d\n",Length(p));
	return 0;
}
