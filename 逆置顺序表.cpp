#include<stdio.h>
#include<stdlib.h>
typedef struct Link{
	int data;
	Link *Next;
}Li;

void Input(int n,Li *&L){
	Li *s=NULL,*t=NULL;
	s=(Li *)malloc(sizeof(Li));
	scanf("%d",&s->data);
	L=s;
	for(int i=1;i<n;i++){
		t=(Li *)malloc(sizeof(Li));
		scanf("%d",&t->data);
		s->Next=t;
		s=t;
	}
	s->Next=NULL;
	return ;
}

void Output(Li *&L){
	Li *t=L;
	while(L){
		printf("%d ",L->data);
		L=L->Next;
	}
	free(t);
	return ;
}
int main(){
	int n;
	scanf("%d",&n);
	Li *L=NULL;
	Input(n,L);
	Output(L);
	return 0;
}
