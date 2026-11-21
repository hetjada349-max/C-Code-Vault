#include <stdio.h>

int main() {
    int matrix[2][2];
    int transpose[2][2];
    int i, j;

   
    printf("Enter elements of 2x2 matrix:\n");
    for(i = 0; i < 2; i++)
	 {
        for(j = 0; j < 2; j++) 
		{
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }


    for(i = 0; i < 2; i++)
	 {
        for(j = 0; j < 2; j++) 
		{
            transpose[j][i] = matrix[i][j];
        }
    }

  
    printf("\nOriginal Matrix:\n");
    for(i = 0; i < 2; i++) 
	{
        for(j = 0; j < 2; j++) 
		{
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

  
    printf("\nTranspose of the Matrix:\n");
    for(i = 0; i < 2; i++) 
	{
        for(j = 0; j < 2; j++) 
		{
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
