

#include"game.h"
void menu() 
{
	printf("******************************\n");
	printf("***** 1.play **** 0.EXIT *****\n");
	printf("******************************\n");

}
//��Ϸʵ��
void game() {
	char ret = 0;
	char board[ROW][COL] = { 0 };	//������������Ϣ
	initboard(board,ROW,COL);//��ʼ������
	displayboard(board,ROW,COL);//��ӡ����
	while(1)
	{
		playermove(board,ROW,COL);//�������
		displayboard(board, ROW, COL);//��ӡ����
		ret=iswin(board,ROW,COL);//�ж������Ӯ
		 if (ret != 'c')
		break;
		computermove(board, ROW, COL);//������
		displayboard(board, ROW, COL);//��ӡ����
		ret = iswin(board, ROW, COL);//�жϵ�����Ӯ
		if (ret != 'c')
			break;
       
	}
			
	if (ret == '*')
			printf("��ϲ���ʤ�ˣ�");
		else if (ret == 'o')
			printf("�㾹Ȼ��������ԣ���");
		else { printf("ƽ�֣�����һ�ѣ�"); }

};

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do {

		menu();
		printf("��ѡ�� :>");
		scanf_s("%d", &input);

		switch (input) {
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
	} while (input);

}


int main( )
{
	test( );
	return 0;
}