#define _CRT_SECURE_NO_WARNINGS 1
//����
#include "game.h"

void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	InitBord(board,ROW,COL);
	DisPlayBoard(board,ROW,COL);
	//����
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
		printf("***** ���Ӯ *****\n");
		printf("******************\n");
	}
	else if (ret == '#')
	{
		
		printf("******************\n");
		printf("***** ����Ӯ *****\n");
		printf("******************\n");
	}
	else
	{
		
		printf("******************\n");
		printf("****** ƽ�� ******\n");
		printf("******************\n");
	}
}
void menu()
{
	printf("******************\n");
	printf("***** 1��play*****\n");
	printf("***** 0��exit*****\n");
	printf("******************\n");
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			system("cls");
			game();
			printf("*** ��������Ϸ ***\n");
			break;
		case 0:
			system("cls");
			printf("�˳���Ϸ\n");
			break;
		default:
			system("cls");
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
}

int main(void)
{
	test();
	return 0;
}