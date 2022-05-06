
#include"game.h"

void initboard(char board[ROW][COL], int row, int col) {

	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++) { 
		
		for (j = 0; j < col; j++) {
			board[i][j] = ' ';

		}

	}


}

void displayboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			printf(" %c ", board[i][j]);
			if (j < col-1)
			printf("|");
		}
		printf("\n");
		if (i < row - 1) {
			for (j = 0; j < col; j++) {
				printf("---");
				if (j < col - 1)
					printf("|");
			}//打印分隔行
			printf("\n");
		}
		


		}


}

void playermove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家走:>(输入数字+空格+数字）");
	
	while(1){
	printf("请输入坐标:>");
	scanf_s("%d%d", &x, &y);
	//判断xy合法性
	if (x >= 1 && x <= row && y >= 1 && y <= col) 
	{
		if (board[x - 1][y - 1] = ' ') { board[x - 1][y - 1] = '*'; break; }
		else { printf("该坐标被占用！\n"); }

	}
	else 
	{
		printf("坐标非法，请重新输入！\n");

	}
	}
}

void computermove(char board[ROW][COL], int row, int col)
{
	printf("电脑走：>\n\n");
	int x = 0;
	int y = 0;
	while (1) {
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ') {

			board[x][y] = 'o';
			break;
		}
			
	}
	

}

int isfull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			if (board[i][j] = ' ')
				return 0;//没满
		}

	}
	return 1;//满了
}

char iswin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++) {
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
			return board[i][0];//判断横三行

	}
	for (i = 0; i < col; i++) {
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
			return board[0][i];//判断竖三列

	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
		return board[0][0];
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[2][0] != ' ')
		return board[1][1];
	//对角线判断
	if (1 == isfull(board,ROW,COL))
		return 'q';
	return 'c';
}


