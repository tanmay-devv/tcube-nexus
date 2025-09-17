#include <stdio.h>
#include <string.h>


/* 0 --> blank
   1 --> O
   2 --> X */ 

void drawBoard() {
	printf("   |    |   \n   |    |   \n");
}

// WORK ON THE ALGORITHM FOR THE TURN. THIS IS TEMPORARY.

void turn(int array[3][3]) {
	char *dec = NULL;
	scanf("%c", &dec);
}

int main() {
	
//	int board[3][3] = {{0,0,0},
//		        {0,0,0},
//			{0,0,0}};

	int board[3][3];	
	turn(board);	

	return 0;
}

