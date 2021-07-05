#include<iostream>
#include<cstdlib>
#include<cstdio>
using namespace std; 
struct stack{
	char data;
	stack *next;
};
void push(stack *&p,char c);
void pop(stack *&p);
char top(stack *p);
bool empty(stack *);
bool ux(char a,char b);
int main(){
	char c;
	stack *p=NULL;
	c=getchar();
	while(c!='\n'){
		if(c!='+'&&c!='-'&&c!='*'&&c!='/'&&c!='('&&c!=')'){
			cout<<c;
			c=getchar();
			continue;
		}
		if(c==')'){
			while(top(p)!='('){
				cout<<top(p);
				pop(p);
			}
			pop(p);
			c=getchar();
			continue;
		}
		if(ux(top(p),c)){
			if(top(p)!='\0')
			cout<<top(p);
			pop(p);
			push(p,c);
			c=getchar();
			continue;
		}
		push(p,c);
		c=getchar();
	}
	while(top(p)!='\0'){
		cout<<top(p);
		pop(p);
	}
	return 0;
}
void push(stack *&p,char c){
	stack *t=(stack *)malloc(sizeof(stack));
	t->data=c;
	t->next=p;
	p=t;
}
void pop(stack *&p){
	if(empty(p))return ;
	stack *t=p;
	p=p->next;
	free(t);
} 
char top(stack *p){
	if(empty(p))return '\0';
	return p->data;
}
bool empty(stack *p){
	return p==NULL;
}
bool ux(char a,char b){
	if(a=='\0')return false;
	if(a=='(')return false;
	if(b=='(')return false;
	if((a=='+'||a=='-')&&(b=='*'||b=='/'))return false;
	return true;
}
