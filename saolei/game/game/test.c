#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include "game.h"

void game()
{
	char mine[ROWS][COLS] = {0}; //�����׵�����
	char show[ROWS][COLS] = {0}; //����Ų��������Ϣ
	//��ʼ������
	InitBoard(mine,ROWS,COLS,'0');
	InitBoard(show,ROWS,COLS,'*');
	//������
	SetMine(mine,ROW,COL);
	PrintBoard(mine,ROW,COL);

	//��ӡ����
	PrintBoard(show,ROW,COL);
	//�Ų���
	FindMine(mine,show,ROW,COL);
}

void menu()
{
	printf("******************************\n");
	printf("******    1.��ʼ��Ϸ    ******\n");
	printf("******    0.�˳���Ϸ    ******\n");
	printf("******************************\n");

}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��\n");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}

	}while(input);

}

int main()
{
	test();
	return 0;
}