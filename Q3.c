#include <stdio.h>
void main(){
	int a[10][10],b[10][10],rows,columns,row2,col2;

	printf("Enter the number of rows in first matrix: ");
	scanf("%d",&rows);

	printf("Enter the number of columns in first matrix: ");
	scanf("%d",&columns);

	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < columns; ++j)
		{
			printf("Enter the element in first array(%d)(%d) : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n\n");
	printf("First Matrix\n");
	printf("===================\n");

	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < columns; ++j)
		{
			printf(" %d ",a[i][j]);
		}printf("\n");
	}

	printf("\n\n");

	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < columns; ++j)
		{
			printf("Enter the element in second array(%d)(%d) : ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n\n");
	printf("Second Matrix\n");
	printf("===================\n");
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < columns; ++j)
		{
			printf(" %d ",b[i][j]);
		}printf("\n");
	}

	printf("\n\n");
	printf("Resultant Matrix\n");
	printf("===================\n");
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < columns; ++j)
		{
			printf(" %d ",a[i][j]+b[i][j]);
		}printf("\n");
	}
}