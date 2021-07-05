#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;

struct Stack {
    int data;
    Stack *Next;
};

void Push(Stack *&p,int data);

int Get_top(Stack *&p);

void Pop(Stack *&p);

bool Judge(char c);

int main() {
    Stack *Num=NULL;
    char c,s[32];
    cin>>c;
    while(c!='#') {
        if(Judge(c)) {
            int a=Get_top(Num);
            Pop(Num);
            int b=Get_top(Num);
            Pop(Num);
            int ans;
            switch(c) {
            case '+':
                ans=a+b;
                break;
            case '-':
                ans=b-a;
                break;
            case '*':
                ans=a*b;
                break;
            case '/':
                ans=b/a;
                break;
            default :
                break;
            }
            Push(Num,ans);
        }
        else {
            Push(Num,c-'0');
        }
        cin>>c;
    }
cout<<Get_top(Num);
return 0;
}

void Push(Stack *&p,int data) {
    Stack *t=(Stack *)malloc(sizeof(Stack));
    t->data=data;
    t->Next=p;
    p=t;
    return ;
}

int Get_top(Stack *&p) {
    if(p==NULL)exit(0);
    int data=p->data;
    return data;
}

void Pop(Stack *&p) {
    if(p==NULL)return ;
    Stack *t=p;
    p=p->Next;
    free(t);
}

bool Judge(char c) {
    if(c=='+'||c=='-'||c=='*'||c=='/')return true;
    return false;
}
