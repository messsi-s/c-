#pragma once
#include <stdio.h>
#include <string.h>
#include<time.h>
#include<stdlib.h>
#define row 3
#define col 3

void InitBoard(char board[row][col], int ROW, int COL);
void Dispboard(char board[row][col], int ROW, int COL);
char PlayMove(char board[row][col], int ROW, int COL);
char ComMove(char board[row][col], int ROW, int COL);
char Win (char board[row][col], int ROW, int COL);
