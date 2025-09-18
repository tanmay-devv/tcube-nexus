#include <stdio.h>
#include <string.h>


/* 0 --> blank
   1 --> O
   2 --> X */ 

void drawBoard() {
	printf("   |    |   \n   |    |   \n");
}

// WORK ON THE ALGORITHM FOR THE TURN. THIS IS TEMPORARY.

void turn(int array[3][3], int counter) {
	int row, col;
//        int counter = 0;
	scanf("%d %d", &row, &col);

	

	if (row >= 0 && row < 3 && col >=0 && col < 3) {
// for X		
		if ( counter % 2 == 0 && counter ==! 0) {
			printf("X's turn");
			int array[row][col];
			memset(array, 1, row*col*sizeof(int));
			array[row][col] = 2;
			counter += 1;
			printf("%d\n",counter);	
		} else if (counter == 0) {
			// special case for 0
			printf("O's turn");
			int array[row][col];
			memset(array, 1, row*col*sizeof(int));
			array[row][col] = 1;
			counter += 1;	
			printf("%d\n",counter);	
		} else {
			// for O
			printf("O's turn");
			int array[row][col];
			memset(array, 1, row*col*sizeof(int));
			array[row][col] = 1;
			counter += 1;	
			printf("%d\n",counter);	
		}
		int array[row][col];
		memset( array, 1, row*col*sizeof(int));
		array[row][col] = 1;
		counter += 1;

		printf("%d",array[row][col]);

		printf("successfully set! \n");
	} else {
		printf("please enter valid row and col\n");
	}
	turn(array,counter);		

}

int main() {
	
//	int board[3][3] = {{0,0,0},
//		        {0,0,0},
//			{0,0,0}};

	int board[3][3];
	int counter;	
	turn(board,counter);

	return 0;
}

