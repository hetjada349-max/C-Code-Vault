#include<stdio.h>
#define pi 3.14159
int main()
{
	float r,c;
		
	printf("Enter radius of circle:");
	scanf("%f",&r);
	
	c=2*pi*r;
	
	printf("circumference of circle is=%.3f",c);
	return 0;
}