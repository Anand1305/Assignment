#include<stdio.h>
void Display(int iNo)
{
	if(iNo < 0)
	{
		iNo =-iNo;
	}
	
	for(int iCnt = 0;iCnt <= iNo; iCnt++)
	{
		printf("*  ");
	}
	for(int iCnt = 0;iCnt <= iNo; iCnt++)
	{
		printf("#  ");
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