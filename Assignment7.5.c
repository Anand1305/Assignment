// First 5 Multiple of Number
#include<stdio.h>

void MultipleDisplay(int iNo)
{
	
	for(int iCnt = 1;iCnt <= 5;iCnt++)
	{
		printf("%d  ",iCnt*iNo);
		
	}
	
}

int main()
{
	int iValue = 0;
	printf("Enter number : ");
	scanf("%d",&iValue);
	MultipleDisplay(iValue);
	return 0;
}