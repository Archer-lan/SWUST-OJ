#pragma once
#include<string.h>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>

typedef struct Open_list Open_list,* Open_list;
typedef strutc Node{
    Op_list OpFather;
    float G;
    float H;
    float F;
    int x;
    int y;
}Node,* pNode;

typedef struct Open_list{
    struct Open_list *next;
    struct Node node;
}Open_list,* Op_list;

float Pabs(int x);
float Pdistant(int x1,int y1,int x2,int y2);
void Padd(Op_list my_list,Op_list add_node);
Op_list list_browse(Op_list my_list,int tmpX,int tmpY);
int judge_node_exist(Op_list my_list,int x,int y);
Op_list Pdelete(Op_list my_list,int tmpX,int tmpY);
Op_list find_min_f(Op_list my_list);
void PrintList(Op_list my_list);
void PrintFather(Op_list my_list);
