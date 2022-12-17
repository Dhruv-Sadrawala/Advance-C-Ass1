#include <stdio.h>
void main(){
	int a[10][10],b[10][10],rows,columns,i,j,count=1;

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

	printf("Matrix is \n");

	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < columns; ++j){  

			printf(" %d ",a[i][j]);

		}printf("\n");
	}

	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < columns; ++j)
		{
			if (j<i && a[i][j]==0)
			{
				count++;
			}
		}
	}

	if (count>1)
	{
		printf("The matrix is upper traingle matrix\n");
	}
	else
	    printf("The matrix is not upper traingle matrix\n");
}