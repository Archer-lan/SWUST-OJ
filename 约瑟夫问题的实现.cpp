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
	int i=1;
	s=(L)malloc(sizeof(struct Node));
	s->data=i;
	s->Next=NULL;
	p=s;
	for(int i=2;i<=n;i++){
		t=(L)malloc(sizeof(struct Node));
		t->data=i;
		s->Next=t;
		s=t;
	}
	s->Next=p;
	return p;
}

void Jose(int k,L p){
	int i;
	L s=p,t=p;
	while(t->Next!=t){
		for(i=0;i<k-1;i++){
			s=t;
			t=t->Next;
		}
		printf("%d ",t->data);
		s->Next=t->Next;
		free(t);
		t=s->Next; 
	}
	printf("%d",t->data);
	free(t);
}

int main(){
	int n,k;
	scanf("%d",&n);
	scanf("%d",&k);
	L p;
	p=NULL;
	p=Creat(n);
	Jose(k,p);
	return 0;
}
