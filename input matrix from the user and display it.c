//input matrix and display the same

#include<stdio.h>
int main()
{
	int mat[10][20];
	int i, j, row, col;   //row=m and col=n//
	printf("enter the number of rows and columns: ");
	scanf(" %d %d", &row, &col);
	
	printf("enter the elements in the matrix: ");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
	    	scanf("%d", &mat[i][j]);
		}
	}
	printf("the elements in the matrix are:\n");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("%d\t", mat[i][j]);
		}
		printf("\n");
	}
}
