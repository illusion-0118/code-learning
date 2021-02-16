#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

//������������Ϸ


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

//��Ϸ�������㷨ʵ��
void game()
{
	//�������� - ���������Ϣ
	char board[ROW][COL] = { 0 };
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);
	//����
	int ret = 0;
	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ
		ret = IsWin(board, ROW, COL);
	
	    //��������״̬�����Ӯ��'*'��������Ӯ��'#'����ƽ�֣�'Q'������Ϸ������'C'����
		if (ret != 'C')
		{
			break;
		}
		//��������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));//��ʱ������������
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("\n��ʼ��Ϸ\n\n");
			game();
			break;
		case 0:
			printf("\n�˳���Ϸ\n");
			break;
		default:
			printf("\nѡ�����������ѡ�񣡣�\n");
			break;
		}
	} while (input);
	
}
int main()
{
	test();
	return 0;
}