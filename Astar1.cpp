
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

float Pabs(int x){
    if(x < 0){
        return (float)(-x);
    }
    else{
        return (float)(x);
    }
}

float Pdistant(int x1,int y1,int x2,int y2){
    return sqrt((Pabs(x1-x2)*Pabs(x1-x2))+(Pabs(y1-y2)*Pabs(y1-y2)));
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
        if((my_list->next->node.x == x)&&(my_list->next->node.y == y)){
            return my_list->next;
        }
        my_list = my_list->next;
    }
    return NULL;
}

int judge_node_exist(Op_list my_list,int x,int y){
    while(my_list->next != NULL){
        if((my_list->next->node.x == x)&&(my_list->next->node == y)){
        	return 0;
		}
		my_list = my_list->next;
    }
    return 1;
}

Op_list Pdelete(Op_list my_list,int tmpX,int tmpY){
	while(my_list->next!=NULL){
		if((my_list->next->node.x == x)&&(my_list->next->node.y == y)){
			Op_list tmp = my_list->next;
			if(my_list->next->next!=NULL){
				my_list->next = my_list->next->next;
				tmp->next = NULL;
			}
			else{
				my_list->next = NULL;
				tmp_list->next = NULL;
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
        printf("is (%d, %d).   F = %f\n", x, y, f);

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



