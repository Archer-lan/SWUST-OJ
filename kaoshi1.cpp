#include<iostream>
#include<cstdlib>
using namespace std;
struct Node{
	char data;
	Node *Next;
};
typedef struct Node *N;

void Creat(N &p){
	int n;cin>>n;
	N s,t;
	s=(N)malloc(sizeof(struct Node));
	cin>>s->data;
	getchar();
	s->Next=NULL;
	p=s;
	for(int i=1;i<n;i++){
		t=(N)malloc(sizeof(struct Node));
		cin>>t->data;
		getchar();
		s->Next=t;
		s=t;
	}
	s->Next=NULL;
}

void Print(N a,N b){
	while(a){
		cout<<a->data<<" ";
		a=a->Next;
	}
	while(b){
		cout<<b->data<<" ";
		b=b->Next;
	}
}

int main(){
	N A,B;
	Creat(A);
	Creat(B);
	Print(A,B);
	return 0;
}
