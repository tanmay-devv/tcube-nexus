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
	int row, col;
	scanf("%d %d", &row, &col);

	if (row >= 0 && row < 3 && col >=0 && col < 3) {
		int array[row][col];
		memset( array, 1, row*col*sizeof(int));
		printf("%d",array[row][col]);

		printf("successfully set! \n");
	} else {
		printf("please enter valid row and col\n");
	}
		

}

int main() {
	
//	int board[3][3] = {{0,0,0},
//		        {0,0,0},
//			{0,0,0}};

	int board[3][3];	
	turn(board);	

	return 0;
}

