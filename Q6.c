#include <stdio.h>
void main(){
	int a[10][10],rows,columns;

	printf("Enter the number of rows in matrix: ");
	scanf("%d",&rows);

	printf("Enter the number of columns in matrix: ");
	scanf("%d",&columns);

	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < columns; ++j)
		{
			printf("Enter the element(%d,%d): ",i,j);
			scanf("%d",&a[i][j]);
		}
	}

	printf("Matrix will be\n");
	printf("=======================================\n\n\n");

	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < columns; ++j){  

			printf(" %d ",a[i][j]);

		}printf("\n");
	}

	printf("Matrix's transpose will be\n");
	printf("=======================================\n\n\n");

	for (int i = 0; i < columns; ++i)
	{
		for (int j = 0; j < rows; ++j){  

			printf(" %d ",a[j][i]);

		}printf("\n");
	}
}