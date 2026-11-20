#include<stdio.h>

int main()
{
	int number[5];	
	int max;
	int i;
 
	printf("Enter 5 elements:\n");
	for(i=0;i<5;i++)
	{
		printf("Enter element %d:",i+1);
		scanf("%d",&number[i]);

	}
	max=number[0];
	for(i=1;i<5;i++)
	{
		if(number[i]>max)
		{
			max=number[i];
		}
	}
	printf("\nMaximum element=%d",max);
	return 0;
	
}
