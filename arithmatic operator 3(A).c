#include<stdio.h>

int main()
{
	int a,b;
	
	printf("Enter first number:");
	scanf("%d",&a);
	
	printf("Enter second number:");
	scanf("%d",&b);
	
	printf("\naddtion=%d",a+b);
	printf("\nsubtraction=%d",a-b);
	printf("\nmultipication=%d",a*b);
	printf("\ndivision=%d",a/b);
	printf("\nmodual=%d",a%b);
	
	return 0;
}