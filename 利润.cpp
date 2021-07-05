#include<stdio.h>
#include<queue>
#include<string.h>
#include<iostream>
using namespace std;
bool maze[10][10],visit[10][10];
int st[10][10];
int a[5]={1,0,-1,0},b[5]={0,1,0,-1};
struct point{
	int step,x,y;
};
//返回找路径并输出路径。 
void print(int x,int y){
	if(x==0&&y==0)return ;
	for(int i=0;i<5;i++){
		if(st[x+a[i]][y+b[i]]==st[x][y]-1){//判断是否和上一步吻合。	
			print(x+a[i],y+b[i]);
			printf("(%d, %d)\n",x+a[i]-1,y+b[i]-1);
		}
	}
}
//进行宽度搜索。 
void bfs(){
	memset(visit,0,sizeof(visit));//初始化visit =0； 
	memset(st,0,sizeof(st));//初始化st= 0； 
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			st[i][j]=999;//定义输入列阵大小。 
		}
	}
	queue<point>q;
	point s;
	s.step=1;//步数 
	s.x=s.y=1;
	q.push(s);//入队 
	visit[1][1]=1;
	st[1][1]=1;
	while(!q.empty()){//列阵非空时 
		point temp=q.front();//访问队首 
		q.pop();//出队 
		if(temp.x==5&&temp.y==5){//判断是否到达终点。
			print(5,5);
			return ; 
		}
		for(int i=0;i<5;i++){
			point t=temp;//入队 记录是否走过 
			t.x+=a[i];
			t.y+=b[i];//四周搜索 
			t.step=t.step+1;//步数加一 
			if(visit[t.x][t.y]==0&&maze[t.x][t.y]==0){//判断是否是障碍物或者已走过 
				q.push(t);//出队 
				visit[t.x][t.y]=1;//将走过的转为障碍物 
				st[t.x][t.y]=t.step;
			}
		}
	}
}
int main(){
	memset(maze,1,sizeof(maze));//将整个列阵化为墙，防止溢出 
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			scanf("%d",&maze[i][j]);
		}
	}
	bfs();
	cout<<"(4, 4)"<<endl;
	return 0;
}
