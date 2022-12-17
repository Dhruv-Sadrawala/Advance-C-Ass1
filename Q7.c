#include <stdio.h>
void main(){
	int a[5][5],rows,columns,count=0,i,j;

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
			if (a[i][j]%2==0)
			{
				printf("\nEven numbers from matrix are(%d,%d): %d\n",i,j,a[i][j]);
				count++;
			}
		}
	}
	printf("\n\nThe count of even numbers is: %d\n",count);

}