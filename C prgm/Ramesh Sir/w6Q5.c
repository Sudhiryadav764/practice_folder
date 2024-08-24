// Write a program to explain the four – dimensional array.
#include <stdio.h>

int main(void)
{
	// variable declaration used for indexes
	int i, j, k, l, size;

	// Array declaration
	int a[2][2][2][2];

	// size of array
	size = 2;

	// elements input
	a[0][0][0][0] = 5;
	a[0][0][0][1] = 3;
	a[0][0][1][0] = 5;
	a[0][0][1][1] = 3;
	a[0][1][0][0] = 6;
	a[0][1][0][1] = 7;
	a[0][1][1][0] = 6;
	a[0][1][1][1] = 7;
	a[1][0][0][0] = 8;
	a[1][0][0][1] = 9;
	a[1][0][1][0] = 8;
	a[1][0][1][1] = 9;
	a[1][1][0][0] = 9;
	a[1][1][0][1] = 7;
	a[1][1][1][0] = 9;
	a[1][1][1][1] = 7;

	// Printing the values
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			for (k = 0; k < size; k++) {
				for (l = 0; l < size; l++) {
					printf("Value of a[%d][%d][%d][%d] :- %d ",
								i, j, k, l, a[i][j][k][l]);
					printf("\n");
				}
			}
		}
	}

	return (0);
}