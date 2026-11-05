#include<stdio.h>

int main()
{
	int num1=10,num2=3;
	
	float result1;
	
	result1=num1/num2;
	printf("Implicit Conversion=%.2f\n",result1);
	
	float result2;
	
	result2=(float)num1/num2;
	
	printf("Explicit Conversion=%.2f\n",result2);
	
	return 0;
}