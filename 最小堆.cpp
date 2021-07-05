#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef int ElementType;
typedef struct MinHeap * MinPriortyQueue; 
struct MinHeap{
	int capacity;//数组最大容量
	int size; //数组长度
	ElementType *elements; //堆中元素存放的数组， 
};
