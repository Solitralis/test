#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()
{
	printf("************************\n");
	printf("***** 1.开始游戏 ********\n");
	printf("***** 0.退出游戏 ********\n");
	printf("************************\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	FindMine(mine, show, ROW, COL);
}	

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL)); // 随机数种子
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}