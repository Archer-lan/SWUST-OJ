#include<stdio.h>
#include<stdlib.h>
typedef int Elementype;
typedef struct Node *Ptr;
struct Node{
	Elementype Data;
	Ptr Next;
};
typedef Ptr List;

List Creat(int n){
	List L=(List)malloc(sizeof(struct Node));
	L->Next=NULL;
	List r=L;
	for(int i=0;i<n;i++){
		List p=(List)malloc(sizeof(struct Node));
		scanf("%d",&p->Data);
		r->Next=p;
		r=p;
	}
	r->Next=NULL;
	return L;
}

int Search(int m,int n,List L){
	if(m>n||m<0)
		return 0;
	else{
		List r=L;
		for(int i=0;i<m;i++){
			r=r->Next; 
		}
		return 1;
	}
}
int main(){
	int n,m,res;
	scanf("%d",&n);
	List L;
	L=Creat(n);
	scanf("%d",&m);
	res=Search(m,n,L);
	if(res==1)
		printf("ok");
	else
		printf("error");
	return 0;
}
