#include<stdio.h>
int main()
{
	int rollno[5];
	int marks[5];
	int i;
	
	for(i=0;i<5;i++)
	{
		printf("Enter roll number of student %d:",i+1);
		scanf("%d",&rollno[i]);
		
		printf("Enter marks of student %d:",i+1);
		scanf("%d",&marks[i]);
	}
	printf("\n----student Details----\n");
	
	for(i=0;i<5;i++)
	{
		printf("Rollno:%d\tMarks:%d\n",rollno[i],marks[i]);
		
	}
	return 0;
}
