#include<stdio.h>

int main()
{
	int choice;
	float num1,num2;
	
	printf("=====Calculater Menu=====");
	printf("1.Addition\n");
	printf("2.Subtraction\n");
	printf("3.Multiplication\n");
	printf("4.division\n");
	
	printf("Enter your choice:");
	scanf("%d",&choice);
	
	printf("Enter two number:");
	scanf("%f %f",&num1,&num2);
	
		switch (choice)
		{
			case 1:
				printf("Addition=%.2f",num1+num2);
				break;
			case 2:
				printf("Subtraction=%.2f",num1-num2);
				break;
			case 3:
			 	printf("Multiplication=%.2f",num1*num2);
			 	break;
			case 4:
				if(num2!=0)
				{
					printf("Division=.2f",num1/num2);
				}
				else
				{
					printf("Division by zero not poslibile");
					break;
				}
				
		default:
			printf("Invalid choice");		
		}
		return 0;
}
