#define  _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu()
{
	printf("*****************\n");
	printf("**** 1.play  ****\n");
	printf("**** 0.text  ****\n");
	printf("*****************\n");
}

void game() 
{
	char mine[ROWS][COLS] = {0};//布置雷的信息
	char show[ROWS][COLS] = {0};//存放排查的信息
	InitBoat(mine,ROWS,COLS,'0');
	InitBoat(show,ROWS,COLS,'*');
	DisPlayBoard(show,ROW,COL);//打印棋盘
	

	SetMine(mine, ROW, COL);//布置雷
	//DisPlayBoard(mine, ROW, COL);//打印棋盘

	FindMine(mine,show, ROW, COL);//排查雷

}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		
		menu();
		printf("请选择：\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出\n");
			break;
		default:
			printf("请重新选择\n");
			break;
		}

	} while (input);
	return 0;

}
