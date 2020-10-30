#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
 
#define KEY_UP    72
#define KEY_DOWN  80
#define KEY_LEFT  75
#define KEY_RIGHT 77
#define LINES     23 
#define COLS      70
 
int dir_y[] = {-1, 1, 0, 0};
int dir_x[] = {0, 0, -1, 1};
int vis[100][100];
int scord;
 
typedef struct body
{
	int y, x;
	struct body *pre, *sub;
} Body;
 
 
typedef struct
{
	Body *head, *tail;
	int DIRECTION;
	int HEAD_X;
	int HEAD_Y;
	int FOOD_X;
	int FOOD_Y;
	char food;
	char H;
} Snake;
 
int Get_Rand_Number(int k)
{	
	static int first_time = 0;
	if(!first_time){
		first_time = 1;
		srand((unsigned int)(time(NULL)));
	}
	return rand()%k + 1;
}
 
void move(int y, int x)//移动光标位置
{   
    COORD c;
    c.X=x;   
    c.Y=y; 
    SetConsoleCursorPosition (GetStdHandle(STD_OUTPUT_HANDLE), c); 
}
 
void Add(Snake *snake)
{
	Body *s;
	s = (Body *)malloc(sizeof(Body));
	s->y = snake->HEAD_Y;
	s->x = snake->HEAD_X;
	s->pre = NULL;
	s->sub = snake->head;
	snake->head->pre = s;
	snake->head = s;
}
 
void Free(Body *head)
{
	if(NULL == head) return;
	Free(head->sub);
	free(head);
}
 
void Initialization(Snake *snake, int y, int x)
{
	snake->DIRECTION = 0;
	int FOOD_Y = snake->FOOD_Y;
	int FOOD_X = snake->FOOD_X;
	snake->HEAD_Y = y;
	snake->HEAD_X = x;
 
	while(1)
	{
		FOOD_Y = Get_Rand_Number(LINES - 3);
		FOOD_X = Get_Rand_Number(COLS - 3);
		if(!vis[FOOD_Y][FOOD_X]){
			vis[FOOD_Y][FOOD_X] = 2;
			break;
		}
	}
	move(FOOD_Y, FOOD_X);
	printf("%c", snake->food);
 
 
	snake->head = (Body *)malloc(sizeof(Body));
	snake->head->y = y;
	snake->head->x = x;
	snake->head->pre = snake->head->sub = NULL;
	snake->tail = snake->head;
	move(y, x);
	printf("%c", snake->H);
}
 
void New_Food(Snake *snake)
{
	scord++;
	int FOOD_Y = snake->FOOD_Y;
	int FOOD_X = snake->FOOD_X;
	while(1){
		FOOD_Y = Get_Rand_Number(LINES - 2);
		FOOD_X = Get_Rand_Number(COLS - 2);
		if(!vis[FOOD_Y][FOOD_X]){
			vis[FOOD_Y][FOOD_X] = 2;
			break;
		}
	}
	move(FOOD_Y, FOOD_X);
	printf("%c", snake->food);
}
 
int Reverse_Direction(Snake *snake, int fy, int fx)
{
	int HEAD_Y = snake->HEAD_Y;
	int HEAD_X = snake->HEAD_X;
	Body *head = snake->head;
 
	HEAD_Y += dir_y[snake->DIRECTION];
	HEAD_X += dir_x[snake->DIRECTION];
 
	if(HEAD_Y == fy && HEAD_X == fx) return 1;
 
	if(head->sub && HEAD_Y == head->sub->y && HEAD_X == head->sub->x){
		if(HEAD_Y == head->y){
			if(HEAD_X > head->x) HEAD_X = head->x - 1;
			else HEAD_X = head->x + 1;
		}
		else{
			if(HEAD_Y > head->y) HEAD_Y = head->y - 1;
			else HEAD_Y = head->y + 1;
		}
	}
	return 0;
}
 
void Move(Snake *snake)
{
	int FOOD_Y = snake->FOOD_Y;
	int FOOD_X = snake->FOOD_X;
	int HEAD_Y = snake->HEAD_Y;
	int HEAD_X = snake->HEAD_X;
	Body *head = snake->head;
	Body *tail = snake->tail;
 
	move(HEAD_Y, HEAD_X);
	printf("%c", snake->H);
	vis[HEAD_Y][HEAD_X] = 1;
 
	if(head->sub){
		move(head->sub->y, head->sub->x);
		printf("#");
	}
		
	if(HEAD_Y == FOOD_Y && HEAD_X == FOOD_X){
		printf("%c", 7);
		New_Food(snake);
	}
	else{
		move(tail->y, tail->x);
		printf(" ");
		vis[tail->y][tail->x] = 0;
		if(tail->pre){
			Body *tmp = tail;
			tail = tail->pre;
			tail->sub = NULL;
			free(tmp);
		}
	
	}
}
 
void Box()
{
	move(0, 0);
	int x,y;
	for(y=0; y<LINES; y++){
		for(x=0; x<COLS; x++){
			if(0 == x || COLS - 1 == x || 0 == y || LINES - 1 == y){
				printf("#");
				vis[y][x] = 1;
			}
			else printf(" ");
		}
		printf("\n");
	}
}
 
int Judge_Kill(Snake *snake)
{
	if(1 == vis[snake->HEAD_Y][snake->HEAD_X]) return 1; 
	return 0;
}
 
int main()
{
	Box();
	Snake snake1, snake2;
	snake1.food = '*';
	snake2.food = '*';
	snake1.H = '*';
	snake2.H = '*';
 
	int init1_y = LINES / 2;
	int init1_x = COLS / 2 - 1;
	int init2_y = LINES / 2;
	int init2_x = COLS / 2 + 1;
	vis[init1_y][init1_x] = vis[init2_y][init2_x] = 1;
 
	//初始化两条蛇的位置和食物位置
	Initialization(&snake1, init1_y, init1_x);
	Initialization(&snake2, init2_y, init2_x);
 
	int key = 0;
	int pause = 0;
	key = getch();
	while(1)
	{
		if(kbhit() != 0)//检查当前是否有键盘输入，若有则返回一个非0值，否则返回0 
 		{   
			while(kbhit() != 0)//可能存在多个按键,要全部取完,以最后一个为主 
      			key = getch();
		}
		if(KEY_UP == key) snake1.DIRECTION = 0;
		else if(KEY_DOWN == key) snake1.DIRECTION = 1;
		else if(KEY_LEFT == key) snake1.DIRECTION = 2;
		else if(KEY_RIGHT == key) snake1.DIRECTION = 3;
		else if('w' == key) snake2.DIRECTION = 0;
		else if('s'== key) snake2.DIRECTION = 1;
		else if('a' == key) snake2.DIRECTION = 2;
		else if('d' == key) snake2.DIRECTION = 3;
		else if(' ' == key);
    }   
}
