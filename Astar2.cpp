#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MaxX 10
#define MaxY 10
#define startX 0
#define startY 0
#define endX 6
#define endY 6
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct Open_list Open_list,* Op_list;
typedef struct Node{
    Op_list pFather;
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


float Pabs(int x){
    if(x < 0){
        return (float)(-x);
    }
    else{
        return (float)(x);
    }
}

float Pdistant(int x1,int y1,int x2,int y2){
    return (Pabs(x1-x2)+Pabs(y1-y2));
}

void Padd(Op_list my_list,Op_list add_node){
    Op_list tmp = my_list;
    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    tmp->next = add_node;
    add_node->next = NULL;
}

Op_list list_browse(Op_list my_list,int tmpX,int tmpY){
    while(my_list->next != NULL){
        if((my_list->next->node.x == tmpX)&&(my_list->next->node.y == tmpY)){
            return my_list->next;
        }
        my_list = my_list->next;
    }
    return NULL;
}

int judge_node_exist(Op_list my_list,int x,int y){
    while(my_list->next != NULL){
        if((my_list->next->node.x == x)&&(my_list->next->node.y == y)){
        	return 0;
		}
		my_list = my_list->next;
    }
    return 1;
}

Op_list Pdelete(Op_list my_list,int tmpX,int tmpY){
	while(my_list->next!=NULL){
		if((my_list->next->node.x == tmpX)&&(my_list->next->node.y == tmpY)){
			Op_list tmp = my_list->next;
			if(my_list->next->next!=NULL){
				my_list->next = my_list->next->next;
				tmp->next = NULL;
			}
			else{
				my_list->next = NULL;
				tmp->next = NULL;
			}
			return tmp;
		}
		my_list = my_list->next;
	}
	return NULL;
}

Op_list find_min_f(Op_list my_list){
	int tmpf = my_list->next->node.F;
	Op_list tmp = my_list->next;
	while(my_list->next!=NULL){
		if(tmpf>my_list->next->node.F){
			tmpf=my_list->next->node.F;
			tmp=my_list->next;
		}
		my_list = my_list->next;
	}
	return tmp;
}

void PrintList(Op_list my_list)
{
    while(my_list->next != NULL)
    {
        int x = my_list->next->node.x;
        int y = my_list->next->node.y;

        float f = my_list->next->node.F;
        //printf("is (%d, %d).   F = %f\n", x, y, f);

        my_list = my_list->next;
    }
}

void PrintFather(Op_list my_list)
{
	while(my_list->node.pFather != NULL)
	{
		printf("is(%d, %d)\n", my_list->node.pFather->node.x, my_list->node.pFather->node.y);

		my_list = my_list->node.pFather;
	}

	printf("track end\n");
}

int main(int argc, char *argv[]) {
	int map[MaxX][MaxY];
	memset(map,0,sizeof(map));
	map[startX][startY]=2;
	map[endX][endY]=3;
	
	
	Op_list Op = (Op_list)malloc(sizeof(Op_list));
	Op->next=NULL;
	Op_list pC = (Op_list)malloc(sizeof(Op_list));
	pC->next=NULL;
	
	Op_list start = (Op_list)malloc(sizeof(Op_list));
	start->next=NULL;
	Op_list end = (Op_list)malloc(sizeof(Op_list));
	end->next=NULL;
	
	start->node.pFather=NULL;
	start->node.x = startX;
	start->node.y = startY;
	start->node.G = 0;
	start->node.H = (Pabs(endX - startX)+Pabs(endY - startY));
	start->node.F = start->node.G + start->node.H;
	
	end->node.pFather = NULL;
	end->node.x = endX;
	end->node.y = endY;
	
	Padd(Op,start);
	
	int x[4]={-1,0,1,0};
	int y[4]={0,-1,0,1};
	int i,j,cir=1;
	while(cir){
		//PrintList(Op);
		Op_list Current = find_min_f(Op);
		Op_list p = Pdelete(Op,Current->node.x,Current->node.y);
		Padd(pC,p);
		//printf("core is (%d, %d)\n", p->node.x, p->node.y);
		
		//printf("now ,the open list is as follow\n");
		//PrintList(Op);
		
		for(i=0;i<4;i++){
			if((p->node.x + x[i]<0)||(p->node.x + x[i] > MaxX-1)||(p->node.y + y[i]<0)||(p->node.y + y[i] > MaxY-1))
				continue;
			if(judge_node_exist(Op,p->node.x+x[i],p->node.y+y[i])){
				if(1 == map[p->node.x + x[i]][p->node.y + y[i]]){
					continue;
				}
				else if(!(judge_node_exist(pC,p->node.x + x[i],p->node.y + y[i]))){
					continue;
				}
				else if(((p->node.x + x[i]) == endX)&&((p->node.y + y[i])== endY)){
					//printf("yes");
					end->node.pFather = p;
					cir = 0;
					break;
				}
				else{
					Op_list tmp=(Op_list)malloc(sizeof(Op_list));
					tmp->next=NULL;
					tmp->node.pFather=p;
					tmp->node.x = p->node.x + x[i];
					tmp->node.y = p->node.y + y[i];
					tmp->node.G = Pdistant(tmp->node.x,tmp->node.y,startX,startY);
					tmp->node.H = (abs(endX-tmp->node.x)+abs(endY-tmp->node.y));
					tmp->node.F = tmp->node.G + tmp->node.H;
					Padd(Op,tmp);
					//PrintList(Op);
				}
			}
			else{
				Op_list tmp = list_browse(Op,p->node.x + x[i],p->node.y + y[i]);
				float currentG = p->node.G + Pdistant(tmp->node.x,tmp->node.y,p->node.x,p->node.y);
				float pastG = tmp->node.G;
				if(currentG < pastG){
					tmp->node.pFather=p;
					tmp->node.G = currentG;
					tmp->node.F = tmp->node.G + tmp->node.H;
				}
			}
		}
		if(cir == 0)
			break;
	}
	for(int k=0;k<MaxX;k++){
		for(int z=0;z<MaxY;z++)
			printf("%d ",map[k][z]);
		printf("\n");
	}
	PrintFather(end);
	return 0;
}
