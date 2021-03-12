#define _CRT_SECURE_NO_WARNINGS 1
//测试
#include "game.h"

void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	InitBord(board,ROW,COL);
	DisPlayBoard(board,ROW,COL);
	//下棋
	while (1)
	{
		PlayerMove(board, ROW, COL);
		system("cls");
		DisPlayBoard(board, ROW, COL);
		//system("cls");
		ret = IsWin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
		ComputerMove(board, ROW, COL);
		system("cls");
		DisPlayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
	}
	if (ret == '*')
	{
		
		printf("******************\n");
		printf("***** 玩家赢 *****\n");
		printf("******************\n");
	}
	else if (ret == '#')
	{
		
		printf("******************\n");
		printf("***** 电脑赢 *****\n");
		printf("******************\n");
	}
	else
	{
		
		printf("******************\n");
		printf("****** 平局 ******\n");
		printf("******************\n");
	}
}
void menu()
{
	printf("******************\n");
	printf("***** 1、play*****\n");
	printf("***** 0、exit*****\n");
	printf("******************\n");
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			system("cls");
			game();
			printf("*** 三子棋游戏 ***\n");
			break;
		case 0:
			system("cls");
			printf("退出游戏\n");
			break;
		default:
			system("cls");
			printf("选择错误，请重新选择！\n");
			break;
		}
	} while (input);
}

int main(void)
{
	test();
	return 0;
}