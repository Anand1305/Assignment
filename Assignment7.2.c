#include<stdio.h>

void Display(int iNo)
{
	for(int iCnt = 1; iCnt <= iNo; iCnt++)
	{
		printf("%d  ",iCnt);
	}
}

int main()
{
	int iValue = 0;
	printf("Enter Number");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}