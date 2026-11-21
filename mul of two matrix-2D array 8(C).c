#include<stdio.h>
int main()
{
	int matrix1[2][2];
	int matrix2[2][2];
	int result[2][2];
	int i,j,k;
	
	printf("Enter elements of first 2x2 matrix:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter elements [%d][%d]:",i,j);
			scanf("%d",&matrix1[i][j]);
		}
	}
	printf("\nEnter elements of second 2x2 matrix:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter element[%d][%d]:",i,j);
			scanf("%d",&matrix2[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			result[i][j]=0;
			for(k=0;k<2;k++)
			{
				result[i][j]=result[i][j]+matrix1[i][k]*matrix2[k][j];
			}
		}
	}
	printf("\nMultiplication of matrices:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",result[i][j]);	
		}
		printf("\n");
	}
	return 0;
}