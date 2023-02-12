#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

#define ROW 9
#define COL 9
#define EASY 10
#define ROWS ROW+2
#define COLS	COL+2
void InitBoat(char board[ROWS][COLS], int rows, int cols,char x);//初始化棋盘
void DisPlayBoard(char board[ROWS][COLS], int row, int col);
void SetMine(char board[ROWS][COLS], int row, int col);
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col);
