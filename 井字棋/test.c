#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include"game.h"
void emnu()
{
	printf("************************\n");
	printf("******  1.play  ********\n");
	printf("******  0.exit  ********\n");
	printf("************************\n");
}

void game()
{
	char board[row][col];
	InitBoard(board, row, col);//初始化棋盘
	Dispboard(board,row,col);//打印棋盘
	char ret = 0;//接受游戏状态
	while (1)
	{
		PlayMove(board, row, col);//玩家行动
		Dispboard(board, row, col);
		ret=Win(board, row, col);//判断胜利
		if (ret != 'c')
			break;
		ComMove(board, row, col);//电脑行动
		Dispboard(board, row, col);
	    ret=Win(board, row, col);
		if (ret != 'c')
			break;

	}
	if (ret='*')
	{
		printf("玩家赢了\n");
	}
	else if(ret='#')
	{
		printf("电脑赢了\n");
	}
	else
	{
		printf("平局\n");
	}
	Dispboard(board, row, col);
	
}

	int main()
{
		int input = 0;
		srand((unsigned int) time(NULL));
		do {
			emnu();
			printf("请选择");
			scanf("%d", &input);
			switch (input)
			{
			case 1:
				game();
				break;
			case 0:
				break;
			default:
				printf("选择错误");
				break;
			}
		} while (input);
	return 0;
}
