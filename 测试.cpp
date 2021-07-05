#include<stdio.h>
#include<stdlib.h>
typedef int Elementtype;
typedef struct Node *Ptr;
struct Node{
	Elementtype data;
	Ptr Next;
};
typedef Ptr L;

L Creat(int n){
	L p;L s;L t;
	p=(L)malloc(sizeof(struct Node));
	s=(L)malloc(sizeof(struct Node));
	s->Next=NULL;
	scanf("%d",&s->data);
	p=s;
	for(int i=0;i<n-1;i++){
		t=(L)malloc(sizeof(struct Node));
		scanf("%d",&t->data);
		s->Next=t;
		s=t;
	}
	s->Next=NULL;
	return p;
}

int Delete(L p,int m,int n){
	L t;
	t=(L)malloc(sizeof(struct Node));
	t=p;
	if(m<=n+1&&m>=2){
		for(int i=1;i<m-2;i++){
			t=t->Next;
		}
		t->Next=t->Next->Next;
		return 1;
	}
	else 
		return -1;
}

void Display(L p){
	while(p){
		L t=p;
		printf("%d ",p->data);
		p=p->Next;
		free(t);
	}
	return ;
}

int main(){
	int n,m,f;
	scanf("%d",&n);
	L p;
	p=NULL;
	p=Creat(n);
	scanf("%d",&m);
	f=Delete(p,m,n);
	if(f==1)
		Display(p);
	else
		printf("error!");
	return 0;
} 
