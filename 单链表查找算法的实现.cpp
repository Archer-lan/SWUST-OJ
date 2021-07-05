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
	L p,s,t;
	s=(L)malloc(sizeof(struct Node)); 
	scanf("%d",&s->data);
	s->Next=NULL;
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

L search(L p,int m){
	while(p){
		if(p->data==m)
			return 1;
		p=p->Next;
	}
	return ERROR;
}

int main(){
	int n,m,f;
	scanf("%d",&n);
	L p;
	p=NULL;
	p=Creat(n);
	scanf("%d",&m);
	f=search(p,m);
	if(f==1)
		printf("ok");
	else
		printf("error");
	return 0;
}
