#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
struct Queue{
	int Data[1000];
	int front;
	int rear;
	int flag;
	int num;
};
typedef struct Queue *Q;

void Push(Q q,int data){
	q->rear=(q->rear+1)%q->flag;
	q->Data[q->rear]=data;
	q->num++;
	return ;
}

void Pop(Q q){
	q->front=(q->front+1)%q->flag;
	q->num--;
	return ;
}

int Front(Q q){
	return q->Data[(q->front+1)%q->flag];
}

int Empty(Q q){
	if(q->num==0) return 1;
	else return 0;
}

int Full(Q q){
	if(q->num>=q->flag-1) return 1;
	else return 0;
}

int main(){
	int n,k,t;
	char s[4];
	cin>>n>>k;
	Q q=(Q)malloc(sizeof(Queue));
	q->flag=n;
	q->front=0;
	q->rear=0;
	q->num=0;
	for(int i=0;i<k;i++){
		cin>>s;
		if(strcmp(s,"out")==0){
			Pop(q);
			continue;
		}
		cin>>t;
		if(!Full(q))
			Push(q,t);
	}
	while(!Empty(q)){
		cout<<Front(q)<<" ";
		Pop(q);
	}
	return 0;
} 
