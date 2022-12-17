#include <stdio.h>
void main(){
	int a[5][5],rows,columns,i,j,sum=0;

	printf("Enter the number of rows: ");
	scanf("%d",&rows);

	printf("Enter the number of columns: ");
	scanf("%d",&columns);

	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < columns; ++j)
		{
			printf("Enter the element(%d,%d): ",i,j);
			scanf("%d",&a[i][j]);
		}
	}

	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < columns; ++j)
		{
			printf(" %d ",a[i][j]);
		}printf("\n");
	}

	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < columns; ++j)
		{
			if (i==j)
			{
				sum=sum+a[i][j];
			}
		}
	}
	printf("\nThe sum of diagonal is: %d\n",sum);
}