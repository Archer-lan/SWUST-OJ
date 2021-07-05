#include<iostream>
#include<cstring>
#define MaxSize 50
using namespace std;
typedef int ElemType;
typedef struct {
	ElemType data[MaxSize];
	int front,rear;
}SqQueue;
//—≠ª∑∂”¡– 
void InitQueue(SqQueue &Q){
	Q.rear=Q.front=0;
}

bool isEmpty(SqQueue &Q){
	if(Q.rear=Q.front) return false;
	else return true;
}

bool EnQueue(SqQueue &Q,ElemType x){
	if((Q.rear+1)%Maxsize==Q.front) return false;
	Q.data[Q.rear]=x;
	Q.rear=(Q.rear+1)%Maxsize;
}

bool DeQueue(SqQueue &Q,ELemType &x){
	if(Q.rear==Q.front) return false;
	x=Q.data[Q.front];
	Q.front=(Q.front+1)%Maxsize;
	return true;
}


int main(){
	return 0;
}
