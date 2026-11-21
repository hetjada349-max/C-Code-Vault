#include <stdio.h>

int main() {
    int matrix[3][3];
    int sum = 0;
    int i, j;
    
    printf("Enter elements of 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Enter element[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    
 
    for (i = 0; i < 3; i++) {
        sum = sum + matrix[i][i];
    }
    
    printf("\nSum of diagonal elements = %d\n", sum);
    return 0;
}
