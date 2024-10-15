#include<stdio.h>

void main()
{
	int a,b,c;
	
	printf("enter the value of a and b");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b)
	{
		printf("a is gr.");
	}
	else if(b>c)
	{
		printf("b is gr.");
	}
	else
	{
		printf("c is gr.");
	}
}
