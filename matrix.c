#include <stdio.h>
int main() {
 int a[10][10], b[10][10], c[10][10];
 int r1, c1, r2, c2;
 int i, j, k;
 
 printf("Enter rows and columns of Matrix A: ");
 scanf("%d %d", &r1, &c1);
 printf("Enter elements of Matrix A:\n");
 for (i = 0; i < r1; i++)
 for (j = 0; j < c1; j++)
 scanf("%d", &a[i][j]);

 printf("Enter rows and columns of Matrix B: ");
 scanf("%d %d", &r2, &c2);
 printf("Enter elements of Matrix B:\n");
 for (i = 0; i < r2; i++)
 for (j = 0; j < c2; j++)
 scanf("%d", &b[i][j]);

 if (r1 == r2 && c1 == c2) {
 printf("\nAddition of Matrix A and B:\n");
 for (i = 0; i < r1; i++) {
 for (j = 0; j < c1; j++) {
 c[i][j] = a[i][j] + b[i][j];
 printf("%d ", c[i][j]);
 }
 printf("\n");
 }
 } else {
 printf("\nAddition not possible (size mismatch).\n");
 }

 if (r1 == r2 && c1 == c2) {
 printf("\nSubtraction of Matrix A and B:\n");
 for (i = 0; i < r1; i++) {
 for (j = 0; j < c1; j++) {
 c[i][j] = a[i][j] - b[i][j];
 printf("%d ", c[i][j]);
 }
 printf("\n");
 }
 } else {
 printf("\nSubtraction not possible (size mismatch).\n");
 }

 if (c1 == r2) {
 printf("\nMultiplication of Matrix A and B:\n");
 for (i = 0; i < r1; i++) {
 for (j = 0; j < c2; j++) {
 c[i][j] = 0;
 for (k = 00; k < c1; k++) {
 c[i][j] = c[i][j] + a[i][k] * b[k][j];
 }
 printf("%d ", c[i][j]);
 }
 printf("\n");
 }
 } else {
 printf("\nMultiplication not possible \n");
 }
 return 0;
}