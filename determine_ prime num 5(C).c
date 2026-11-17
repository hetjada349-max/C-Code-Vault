#include<stdio.h>
int main()
{
	int num,i,isprime=1;
	printf("Enter a positive number:");
	scanf("%d",&num);
	if(num<2)
	{
		isprime=0;
	}
	else
	{
		for(i=2;i<num;i++)
		{
			if(num%i==0)
			{
				isprime=0;
				break;
			}
		}
	}
	if(isprime)
	{
		printf("%d is a Prime Number",num);
	}
	else
	{
		printf("%d is not a Prime Number",num);
	}
	return 0;
}