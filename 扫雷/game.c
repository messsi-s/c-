#define  _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void InitBoat(char board[ROWS][COLS], int rows, int cols,char x)
{

	int i = 0;
	int j = 0;
	for (i=0;i<rows;i++)
	{
		for (j=0;j<cols;j++)
		{
				board[i][j] = x;
	
		}
	}	
}

void DisPlayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("---------扫雷游戏---------\n");
	for (i = 0; i <= col; i++)
	{
		printf(" %d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf(" %d ", i);
		for (j = 1; j <= col; j++)
		{
			printf(" %c ", board[i][j]);
		}
		printf("\n");	
	}
	printf("---------扫雷游戏---------\n");
}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY;
	while (count)
	{
		int x = rand()%row+1;
		int y = rand()%col+1;
		if (board[x][y] != '1')
		{
			board[x][y] = '1';
			count--;
		}

	}
}

int get_mine(char mine[ROWS][COLS],int x,int y)
{
		
	return mine[x - 1][y - 1]
		+ mine[x][y - 1]
		+ mine[x][y + 1]
		+ mine[x + 1][y - 1]
		+ mine[x - 1][y]
		+ mine[x + 1][y]
		+ mine[x - 1][y + 1]
		+ mine[x + 1][y + 1] - 8 * '0';
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	
	int x = 0;
	int y = 0;
	int win = 0;
	
	while (win<row*col-EASY)
	{
		printf("请输入要排查的雷的坐标：");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= row)
		{
			if (mine[x][y]=='1')
			{
				printf("很遗憾你被炸死了\n");
				DisPlayBoard(mine, row, col);
				break;
			}
			else
			{
				int count = get_mine(mine, x, y);	
				show[x][y] = count + '0';
				DisPlayBoard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("坐标不合法，请重新输入");
		}

	}
	if (win = row * col - EASY)
	{
		DisPlayBoard(mine, row, col);
	}
	
}
