#include<isotream>
#include<cstdlib>
using namespace std;
typedef struct Stack{
	char data[100];
	int top;
}SqStack;

void initl(SqStack *&l)
{
	l=(SqStack *)malloc (sizeof(SqStack));
	l->top=-1;
}

void Push(SqStack *&l,char x)
	l->a[++l->top]=x;
}

void Pop(SqStack *&l,char x)
{	
	while(Optr(l,x)==1&&l->top!=-1)
	{
		cout<<l->a[l->top]; 
		l->top--;
	}
}

void Print(SqStack *&l)
{
	while(l->top!=-1)
	{
		cout<<l->a[l->top]; 
		l->top--;//¶¥Õ»ÏÂÒÆ 
	}
}

void Destry(SqStack *&l)
{
	free(l);
}

int main(){
	
	return 0;
} 
