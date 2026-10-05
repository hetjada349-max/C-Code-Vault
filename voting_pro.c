#include<stdio.h>

int main()
{
	int age;
	
	printf("Enter your age:");
	scanf("%d",&age);
	
	if(age>=18)
	{
		printf("Person is Eligible");
	}
	else
	{
		printf("Person is not Eligible");
	}
return 0;	
}