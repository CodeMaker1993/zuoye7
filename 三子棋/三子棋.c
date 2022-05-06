

#include"game.h"
void menu() 
{
	printf("******************************\n");
	printf("***** 1.play **** 0.EXIT *****\n");
	printf("******************************\n");

}
//游戏实现
void game() {
	char ret = 0;
	char board[ROW][COL] = { 0 };	//数组存放棋盘信息
	initboard(board,ROW,COL);//初始化棋盘
	displayboard(board,ROW,COL);//打印棋盘
	while(1)
	{
		playermove(board,ROW,COL);//玩家下棋
		displayboard(board, ROW, COL);//打印棋盘
		ret=iswin(board,ROW,COL);//判断玩家输赢
		 if (ret != 'c')
		break;
		computermove(board, ROW, COL);//电脑走
		displayboard(board, ROW, COL);//打印棋盘
		ret = iswin(board, ROW, COL);//判断电脑输赢
		if (ret != 'c')
			break;
       
	}
			
	if (ret == '*')
			printf("恭喜你获胜了！");
		else if (ret == 'o')
			printf("你竟然会输给电脑？！");
		else { printf("平局，再来一把？"); }

};

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do {

		menu();
		printf("请选择 :>");
		scanf_s("%d", &input);

		switch (input) {
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;


		}
	} while (input);

}


int main( )
{
	test( );
	return 0;
}