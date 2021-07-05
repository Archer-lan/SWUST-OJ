#include<stdio.h>
#include<stdlib.h>
typedef struct Link{
	int data;
	Link *Next;
};
struct Link L;
void Creat(L *&p,int n){
	L *s=NULL;L *t=NULL;
	s=(L *)malloc(sizeof(L));
	scanf("%d",&s->data);
	p=s;
	for(int i=1;i<n;i++){
		t=(L *)malloc(sizeof(L));
		scanf("%d",&t->data);
		s->Next=t;
		s=t;
	}
	s->Next=NULL;
	return ;
}
void Delete(L *&p,int n,int sta){
	if(sta>n+1||sta<2){
		printf("error!");
		p=NULL;
		return ;
	}
	else{
		L *s=p;
		if(sta==2){
			p=p->Next;
			free(s);
		}
		else{
			int i=sta-2;
			L *t=p;
			while(--i){
				t=t->Next;
			}
			s=t->Next;
			t->Next=t->Next->Next;
			free(s);
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
	return ;
} 
int main(){
	int n;
	scanf("%d",&n); 
	L *p=NULL;
	Creat(p,n);
	int sta;
	scanf("%d",&sta);
	Delete(p,n,sta);
	Display(p);
	return 0;
}
