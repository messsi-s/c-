#define  _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void InitBoard(char board[row][col], int ROW, int COL)
{
	int i = 0;
	int j = 0;
	for ( i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++) 
		{
			board[i][j] = ' ';
		}
	}
}
void Dispboard(char board[row][col], int ROW, int COL)
{
	int i = 0;
	
	for (i = 0; i < ROW; i++)
	{
		int j = 0;
		for (j = 0; j < COL; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < COL - 1)
				printf("|");
		}
		printf("\n");
		if (i < ROW - 1)
		{
			int j = 0;
			for (j= 0; j < COL; j++)
			{
				printf("---");
			    if(j<COL-1)
				   printf("|");
			}
			printf("\n");
		}
	}
}

char PlayMove(char board[row][col], int ROW, int COL)
{
	int x = 0;
	int y = 0;
	printf("玩家行动\n");
	while(1)
	{
		printf("请输入坐标\n");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= ROW && y >= 1 && y <=COL)
		{ 
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("请重新输入");
			}
		}
		else
		{
			printf("坐标非法");
		}
	}
	
}

int IsFull(char board[row][col], int ROW, int COL)
{
	int i = 0;
	int y = 0;
	for (i = 0; i < ROW; i++)
	{
		for (y = 0; y < COL; y++)
		{
			if (board[i][y]==' ')
			{
				return 0;
				break;
			}
			
		
		}
	}
	return 1;
}

char ComMove(char board[row][col], int ROW, int COL)
{
	printf("电脑走\n");
	
	while (1)
	{
		int x = rand() % ROW;
		int y = rand() % COL;
			if (board[x][y] == ' ')
			{
				board[x][y] = '#';	
				break;
			}
	}
}

char Win(char board[row][col], int ROW, int COL)
{
	int i = 0;
	for (i=0; i < ROW; i++)
	{
		if (board[i][0] == board[i][1] && board[i][2] == board[i][0] && board[i][0] != ' ')
		{
			return board[i][0];
		}			

	}
	for (i = 0; i < COL; i++)
	{
		if (board[0][i] == board[1][i] && board[2][i] == board[1][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
	}
	if (board[0][0]==board[1][1]&& board[1][1]==board[2][2]&& board[1][1]!=' ')
	{	
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	int ret=IsFull(board, ROW,COL);
	if (ret==1)
	{
		return'q';
	}
	return'c';
}
