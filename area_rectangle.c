#include<stdio.h>

int main()
{
	float area,height,width;
	
	printf("Enter height of rectangle:");
	scanf("%f",&height);
	printf("Enter width of rectangle: ");
	scanf("%f",&width);
	
	area=height*width;
	printf("Area of rectangle=%.2f",area);
	
	return 0;
}