#include<stdio.h>

int main()
{
	int num=10;
	printf("lnitial value=%d\n",num);
	
	num+=5;
	printf("After +=5:%d\n",num);
	
	num-=3;
	printf("After -=3:%d\n",num);
	
	printf("Pre increment(++num)=%d\n",++num);
	
	printf("Post Decrement(num--)=%d\n",num--);
	
	printf("Final Value=%d\n",num);
	
	return 0;
}