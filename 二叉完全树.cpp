#include<stdio.h>
#include<stdlib.h>
#define MaxTree 10
#define ElementType char
#define Tree int
#define NULL -1
typedef struct TreeNode *Tree;
struct TreeNode{
	ElementType Data;
	Tree left;
	Tree right;
};
struct TreeNode T1[MaxTree];
struct TreeNode T2[MaxTree];

int main(){
	Tree R1,R2;
	R1= BuildTree(T1);
	R2=BuildTree(T2);
	if(Isomorphic(R1,R2))
		printf("Yes\n");
	else
		printf("No\n");
	
	return 0;
} 
