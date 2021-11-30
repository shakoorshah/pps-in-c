//transpose of a matrix

#include<stdio.h>
int main()
{
	int mat[10][20];
	int i, j, row, col;
	printf("enter no. of rows and columns: ");
	scanf("%d %d",&row, &col);
	
	printf("enter the elements of the matrix: ");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			scanf("%d", &mat[i][j]);
		}
	}
	printf("the elements in the matrix are:\n ");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("%d\t", mat[i][j]);
		}
		printf("\n");
	}
	
	
	int tr_mat[10][20];
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			tr_mat[j][i] = mat[i][j];
		}
	}
	printf("transpose is:\n ");
	for(i=0; i<col; i++)
	{
		for(j=0; j<row; j++)
		{
			printf("%d\t", tr_mat[i][j]);
		}
		printf("\n");
	}
}
