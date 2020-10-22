#include <stdio.h>

#define ROW 3
#define COL 3

/* Function declarations */
void matrixInput(int mat[][COL]);
void matrixPrint(int mat[][COL]);
void matrixMultiply(int math[][COL], int mat2[][COL], int res[][COL]);

int main()
{
	int mat1[ROW][COL];
	int mat2[ROW][COL];
	int product[ROW][COL];

	/* Input elements in matrices
	*/
	printf("Enter elements in first matrix with size col = %d and row = %d \n", ROW, COL);
	matrixInput(mat1);

	printf("Enter elements in second matrix with size col = %d and row = %d \n", ROW, COL);
	matrixInput(mat2);


	/* Print matrix1 */
	printf("Matrix 1 is: \n");
	matrixPrint(mat1);
	
	/* Print matrix2 */
	printf("Matrix 2 is: \n");
	matrixPrint(mat2);

	// Call function to multiply both matrices
	matrixMultiply(mat1, mat2, product);

	/* Print matrix result */
	printf("Product of both matrix is: \n");
	matrixPrint(product);

}

/**
 * Function to input elements in matrix from user.
 *
 * @mat     Two-dimensional array to store user input.
 */
void matrixInput(int mat[][COL])
{
	int row, col;

	for (row = 0; row < ROW; row++)
	{
		for (col = 0; col < COL; col++)
		{
			scanf("%d", (*(mat + row) + col));
		}
	}
}

/**
 * Function to print elements in a two-dimensional array.
 *
 * @mat     Two-dimensional array to print.
 */
void matrixPrint(int mat[][COL])
{
	int row, col;

	for (row = 0; row < ROW; row++)
	{
		for (col = 0; col < COL; col++)
		{
			printf("%d ", *(*(mat + row) + col));
		}

		printf("\n");
	}
}

/**
 * Function to multiply two matrices.
 *
 * @mat1    First matrix
 * @mat2    Second matrix
 * @res     Resultant matrix to store product of both matrices.
 */
void matrixMultiply(int mat1[][COL], int mat2[][COL], int res[][COL])
{
	int row, col, i;
	int sum;

	for (row = 0; row < ROW; row++)
	{
		for (col = 0; col < COL; col++)
		{
			sum = 0;

			/*
			 * Find sum of product of each elements of
			 * rows of first matrix and columns of second
			 * matrix.
			 */
			for (i = 0; i < COL; i++)
			{
				sum += (*(*(mat1 + row) + i)) * (*(*(mat2 + i) + col));

				/*
			     * Store sum of product of row of first matrix
			     * and column of second matrix to resultant matrix.
			    */
				*(*(res + row) + col) = sum;
			}

		}
	}
}