#include<stdio.h>
#include<stdlib.h>
typedef ElementType int;
typedef struct LNode *List;
struct LNode{
	ElementType Data;
	List Next;
};
struct LNode L;
List Ptrl;
//�����
int length(List Ptrl){
	List p=Ptrl;
	int j=0;
	while(p){
		p=p->Next;
		j++;
	}
	return j;
} 

//����Ų���
List FindKth(int k,List Ptrl){
	List p=Ptrl;
	int i=1;
	while(p!=NULL&&i<k){
		p=p->Next;
		i++;
	}
	if(i==k) return p;
	else return NULL;
} 

//��ֵ����
List Find(ElementType x,List Ptrl){
	List p=Ptrl;
	while(p!=NULL&&p->Data!=x)
		p=p->Next;
	return p;
} 

//����ֵ
List Insert(ElementType x,int i,List Ptrl){
	List p,s;
	if(i=1){
		s=(List)malloc(sizeof(struct LNode));
		s->Data=x;
		s->Next=Ptrl;
		return s;
	}
	p=FindKth(i-1,Ptrl);
	if(p==NULL){
		return NULL;
	}
	else{
		s=(List)malloc(sizeof(struct LNode));
		s->Data=x;
		s->Next=p->Next;
		p->Next=s;
		return Ptrl;
	}
} 

//ɾ��
List Dellete(int i,List Ptrl){
	List p,s;
	if(i==1){
		s=Ptrl;
		if(Ptrl!=NULL) Ptrl=Ptrl->Next;
		else return NULL;
		free(s);
		return Ptrl;
	}
	p=FindKth(i-1,Ptrl);
	if(p==NULL){
		printf("�ýڵ㲻���ڣ�",i-1);
		return NULL;
	}
	else if(p->Next==NULL){
		printf("�ýڵ㲻���ڣ�",i);
		return NULL;
	}
	else {
		s=p->Next;
		p->Next=s->Next;
		free(s);
		return Ptrl;
	}
}
int main(){
	
	return 0;
}













