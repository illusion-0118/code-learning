#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

//测试三子棋游戏


void menu()
{
	printf("#####################################\n"); 
	printf("#####################################\n");
	printf("####### 1.play ###### 0.exit ########\n");
	printf("#####################################\n");
	printf("#####################################\n");
}
//     --------------\n
//    |    |    |    |\n
//    |----|----|----|\n
//    |    |    |    |\n
//    |----|----|----|\n
//    |    |    |    |\n
//     --------------\n
//

//游戏的整个算法实现
void game()
{
	//创建数组 - 存放棋子信息
	char board[ROW][COL] = { 0 };
	//初始化棋盘
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);
	//下棋
	int ret = 0;
	while (1)
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断玩家是否赢
		ret = IsWin(board, ROW, COL);
	
	    //返回四种状态：玩家赢（'*'），电脑赢（'#'），平局（'Q'），游戏继续（'C'）。
		if (ret != 'C')
		{
			break;
		}
		//电脑下棋
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断电脑是否赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));//用时间戳产生随机数
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("\n开始游戏\n\n");
			game();
			break;
		case 0:
			printf("\n退出游戏\n");
			break;
		default:
			printf("\n选择错误，请重新选择！！\n");
			break;
		}
	} while (input);
	
}
int main()
{
	test();
	return 0;
}