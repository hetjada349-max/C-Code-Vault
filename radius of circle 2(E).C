#include<stdio.h>
#define pi 3.14159

int main()
{
	float radius,area;
	
	printf("Enter a radius of circle:");
	scanf("%f",&radius);
	
	area=pi*radius*radius;
	
	printf("Area of circle=%.2f",area);
	
	return 0;         
}