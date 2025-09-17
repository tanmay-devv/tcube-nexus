#include <stdio.h>
#include <string.h>


/* 0 --> blank
   1 --> O
   2 --> X */ 

void drawBoard() {
	printf("   |    |   \n   |    |   \n");
}

void turn(int board[3][3]) {
	board [3][2] = 4;
	printf("%d", board[3][2]);	

}

int main() {
	
	int board[3][3] = {{0,0,0},
		        {0,0,0},
			{0,0,0}};
// drawBoard();

	turn(board[][]);
	return 0;
}

