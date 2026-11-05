#include<stdio.h>

int main()
{
	int rollno;
	char grade;
	float marks;
	printf("Enter Roll Number:");
	scanf("%d",&rollno);
	printf("Enter marks:");
	scanf("%f",&marks);
	printf("Enter Grade:");
	scanf("%c",&grade);
	
	printf("\n-----Students Details-----\n");
	printf("roll number:%d\n",rollno);
	printf("marks:%.2f\n",marks);
	printf("Grade:%c\n",grade);
	return 0;
}