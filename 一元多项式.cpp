#include<iostream>
#include<cstdlib>
using namespace std;
typedef struct Node *N;
struct Node{
	int co;
	int po;
	N Next;
};
N Creat(){
	N s,t,p;
	char c;
	s=(N)malloc(sizeof(struct Node));
	cin>>s->co>>c>>s->po;
	p=s;
	while(1){
		t=(N)malloc(sizeof(struct Node));
		cin>>t->co>>c>>t->po;
		if(t->co==0&&t->po==0)
			break;
		s->Next=t;
		s=t;
	}
	s->Next=NULL;
	return p;
}

void sum(N ahead,N bhead)
{
	int flag=0,sum=0;
	N p1=ahead;
	N p2=bhead;
	while(p1!=NULL||p2!=NULL)
	{
		if(p1==NULL&&p2!=NULL)
		{
			if(p2->co>0)
			{
				cout<<"+"<<p2->co<<"x"<<"^"<<p2->po;
				sum++;
			}
			else if(p2->co<0)
			{
				cout<<p2->co<<"x"<<"^"<<p2->po;
				sum++;
			}
			p2=p2->Next;
		}
		else if(p1!=NULL&&p2==NULL)
		{
			if(p1->co>0)
			{
				cout<<"+"<<p1->co<<"x"<<"^"<<p1->po;
				sum++;
			}
			else if(p1->co<0)
			{
				cout<<p1->co<<"x"<<"^"<<p1->po;
				sum++;
			}
			p1=p1->Next;
		}
		else 
		{
			if(p1->po<p2->po)
			{
				if(p1->co>0)
				{
					sum++;
					if(flag==0)
					{
						cout<<p1->co<<"x"<<"^"<<p1->po;
						flag++;
					}
					else
						cout<<"+"<<p1->co<<"x"<<"^"<<p1->po;
				}
				else if(p1->co<0)
				{
					cout<<p1->co<<"x"<<"^"<<p1->po;
					sum++;
				}
				p1=p1->Next;
			}
			else if(p1->po==p2->po)
			{
				if(p1->co+p2->co>0)
				{
					sum++;
					if(flag==0)
					{
						cout<<p1->co+p2->co<<"x"<<"^"<<p1->po;
						flag++;
					}
					else
						cout<<"+"<<p1->co+p2->co<<"x"<<"^"<<p1->po;
				}
				else if(p1->co+p2->co<0)
				{
					cout<<p1->co+p2->co<<"x"<<"^"<<p1->po; 
					sum++;
				}
				p1=p1->Next;
				p2=p2->Next;
			}
			else if(p1->po>p2->po)
			{
				if(p2->co>0)
				{
					sum++;
					if(flag==0)
					{
						cout<<p2->co<<"x"<<"^"<<p2->po;
						flag++;
					}
					else
					cout<<"+"<<p2->co<<"x"<<"^"<<p2->po;
				}
				else if(p2->co<0)
				{
					cout<<p2->co<<"x"<<"^"<<p2->po;
					sum++;
				}
				p2=p2->Next;
			}
		} 
	}
	if(sum==0) cout<<0;
}

int main(){
	N A=NULL,B=NULL;
	A=Creat();
	B=Creat();
	sum(A,B);
	return 0;
}
