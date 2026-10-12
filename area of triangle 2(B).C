#include<stdio.h>

int main()
{
	float base,hight,area;
	
	 printf("Enter the base of triangle:");
	 scanf("%f",&base);
	
	 printf("Enter the hight of triangle");
	 scanf("%f",&hight);
	 
	 area =(base*hight)/2;
	 printf("Area of triangle= %.2f",area);
	 
	 return 0;
}