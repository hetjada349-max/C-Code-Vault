#include<stdio.h>

int main()
{
	float principal,rate,time,interest;
	
	printf("Enter principal amount:");
	scanf("%f",&principal);
	
	printf("Enter rate of interest:");
	scanf("%f",&rate);
	
	printf("Enter time(year):");
	scanf("%f",&time);
	
	interest=(principal*rate*time)/100;
	
	printf("simple interest= %.2f",interest);
	
	return 0;
}