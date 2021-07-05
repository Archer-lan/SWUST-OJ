#include<stdio.h>
#include"snake.h"
//蛇的移动
void move_snake();
//画出蛇
void draw_snake();
//产生食物
void creatfood();
//判断蛇是否吃到食物
void eatfood();
//判断蛇是否死掉
void SnakeState();



int main()
{
    //设置窗口大小
    system("mode con cols=110 lines=31");
    //设置标题
    SetConsoleTitleA("贪吃蛇");
    
    //播放bgm
    playmusic();

    //初始化蛇
begin:
    snake.CH = VK_RIGHT;//初始化方向
    snake.len = 5; //初始化长度
    snake.SPEED = 100;//初始化蛇的移动速度
    snake.coord[1].x = SCREEN_WIDETH / 2;//初始化蛇头的坐标
    snake.coord[1].y = SCREEN_HEIGHT / 2;
    snake.coord[2].x = SCREEN_WIDETH / 2-2;//初始化蛇头的坐标
    snake.coord[2].y = SCREEN_HEIGHT / 2;
    snake.coord[3].x = SCREEN_WIDETH / 2-4;//初始化蛇头的坐标
    snake.coord[3].y = SCREEN_HEIGHT / 2;

    //初始化食物状态
    food.flag = 1;//1表示吃到食物   0表示没有吃到食物

                  //初始化食物状态
    snake.flag = 1;//1活  0死


    
    init_sence();//初始化游戏界面
    while (1)
    {
        colormap();
        gotoxy(0, 0);
        printf("■");
        HuiFu();
        setcolor();

        draw_snake();//画蛇
        Sleep(snake.SPEED);//蛇的移动速度
        move_snake();//移动蛇
        if(food.flag)
        creatfood();//产生食物
        eatfood();//判断是否吃到食物
        SnakeState();//判断蛇是否死亡
        if (!snake.flag)break;
    }
    system("cls");
    gotoxy(SCREEN_WIDETH/2, SCREEN_HEIGHT/2-4);
    printf("  GAME  OVER!!!");
    gotoxy(SCREEN_WIDETH / 2-6, SCREEN_HEIGHT / 2+2);
    printf("你的得分是：\t\t\t%d  ",snake.len-1);
    gotoxy(SCREEN_WIDETH / 2-6, SCREEN_HEIGHT / 2+4);
    printf("我不服再来：\t\t\tCTRL ");
    gotoxy(SCREEN_WIDETH / 2-6, SCREEN_HEIGHT / 2+6);
    printf("算了垃圾游戏毁我青春:\t\tESC");

    while (1)
    {
        if (GetAsyncKeyState(VK_CONTROL))
        {
            system("cls");
            goto begin;
        }
        else if (GetAsyncKeyState(VK_ESCAPE))
            return 0;
    }
}

//蛇的移动
void move_snake()
{
    //判断是否有按键操作
    if (GetAsyncKeyState(up))
    {
        if(snake.CH!=down)snake.CH = up;
    }
    else if (GetAsyncKeyState(down))
    {
        if (snake.CH != up)snake.CH = down;
    }
    else if (GetAsyncKeyState(right))
    {
        if (snake.CH != left)snake.CH = right;
    }
    else if (GetAsyncKeyState(left))
    {
        if (snake.CH != right)snake.CH = left;
    }
    else if (GetAsyncKeyState(VK_F1))
    {
        if(snake.SPEED>=50)snake.SPEED -= 10;
    }
    else if (GetAsyncKeyState(VK_F2))
    {
        if (snake.SPEED <= 100)snake.SPEED += 10;
    }
    //游戏难度设置
    if (snake.len >= 30 && snake.SPEED >= 10)snake.SPEED -= 2;
    //根据检测到的方向改变蛇头的位置
    switch (snake.CH)
    {
    case right:snake.coord[1].x += 2; break;
    case left:snake.coord[1].x -= 2; break;
    case up:snake.coord[1].y -= 1; break;
    case down:snake.coord[1].y += 1; break;
    }
    
    
}

//画出蛇
void draw_snake()
{
    //画出蛇头
    gotoxy(snake.coord[1].x, snake.coord[1].y);
    printf("□");

    //画出蛇身，直接一个for循环实现
    for (int i = 2; i < snake.len; i++)
    {
        gotoxy(snake.coord[i].x, snake.coord[i].y);
        printf("□");
    }
    //擦掉尾巴
    HuiFu();
    gotoxy(snake.coord[snake.len].x, snake.coord[snake.len].y);
    printf("  ");

    //遍历每一节蛇
    for (int i = snake.len; i >1; i--)
    {
        snake.coord[i].x = snake.coord[i - 1].x;
        snake.coord[i].y = snake.coord[i - 1].y;
    }
    
    gotoxy(0, 0);
    printf("■");
    gotoxy(85, 25);
    printf("得分:%d  ", snake.len-1);
    gotoxy(85, 22);
    printf("速度:%dms/步  ", snake.SPEED);
    
}

//产生食物
void creatfood()
{
    //随机种子生成
    srand((unsigned)time(NULL));
    if(food.flag)
    while (1)
    {
        food.x = rand() % 80;
        food.y = rand() % 30;
        if (food.x % 2 == 0 && food.x >= 2 && food.x <= 78 && food.y > 1 && food.y < 30)
        {
            int flag = 0;
            //判断产生的食物可不可能在蛇的身体上
            for (int i = 1; i <= snake.len; i++)
            {
                if (snake.coord[i].x == food.x&&snake.coord[i].y == food.y)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag)continue;
            //绘制食物
            else
            {
                colorfood();
                gotoxy(food.x, food.y);
                printf("⊙");
                HuiFu();
                food.flag = 0;
                break;
            }
        }
    }
    food.flag = 0;
}

//判断蛇是否吃到食物
void eatfood()
{
    //只需要判断蛇头是否与食物重合
        if (food.x == snake.coord[1].x&&food.y == snake.coord[1].y)
        {
            snake.len+=1;
            food.flag = 1;
        }
}

//判断蛇是否死掉
void SnakeState()
{
    if (snake.coord[1].x < 2 || snake.coord[1].x>78 || snake.coord[1].y < 1 || snake.coord[1].y>29)
        snake.flag = 0;

    for (int i = 2; i <= snake.len; i++)
    {
        if (snake.coord[1].x == snake.coord[i].x&&snake.coord[1].y == snake.coord[i].y)
            snake.flag = 0;
    }
    
}
