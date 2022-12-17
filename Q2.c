#include <stdio.h>
void main(){
	int a[10][10][10],rows,columns,height;

	printf("Enter the number of rows in matrix: ");
	scanf("%d",&rows);

	printf("Enter the number of columns in matrix: ");
	scanf("%d",&columns);

	printf("Enter the number of height in matrix: ");
	scanf("%d",&height);

	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < columns; ++j)
		{
			for (int k = 0; k < height; ++k)
			{
				printf("Enter the element of array: ");
				scanf("%d",&a[i][j][k]);
			}
		}
	}

	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < columns; ++j)
		{
			for (int k = 0; k < height; ++k)
			{
				printf("Arrray[%d][%d][%d] : %d\n",i,j,k,a[i][j][k]);
			}
		}
	}
}