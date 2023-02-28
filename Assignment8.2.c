// Digit to String Name 

#include<stdio.h>

void Display(int iNo)
{
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	if(iNo > 9)
	{
		printf("Invalid Number");
	}
	else if(iNo == 0)
	{
		printf("Zero");
	}
	else if(iNo == 1)
	{
		printf("One");
	}
	else if(iNo == 2)
	{
		printf("Two");
	}
	else if(iNo == 3)
	{
		printf("Three");
	}
	else if(iNo == 4)
	{
		printf("four");
	}
	else if(iNo == 5)
	{
		printf("Five");
	}
	else if(iNo == 6)
	{
		printf("Six");
	}
	else if(iNo == 7)
	{
		printf("Seven");
	}
	else if(iNo == 8)
	{
		printf("Eight");
	}
	else
	{
		printf("Nine");
	}
}

int main()
{
	int iValue = 0;
	
	printf("Enter Number : ");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}