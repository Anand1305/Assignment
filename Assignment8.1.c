#include<stdio.h>

void Number(int iNo)
{
	if(iNo < 50)
	{
		printf("small");
	}
	else if(iNo > 100)
	{
		printf("large");
	}
	else
	{
		printf("medium");
	}
	
	
}

int main()
{
	int iValue = 0;
	
	printf("Enter Number");
	scanf("%d",&iValue);
	
	Number(iValue);
	return 0;
}