#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef int ElementType;
typedef struct MinHeap * MinPriortyQueue; 
struct MinHeap{
	int capacity;//�����������
	int size; //���鳤��
	ElementType *elements; //����Ԫ�ش�ŵ����飬 
};
