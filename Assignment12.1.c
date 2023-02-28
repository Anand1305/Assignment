// Write A program Which Accept number from user and dispaly its digits in reverse order

#include<stdio.h>

void DisplayDigit(int iNo)
{
	int iDigit = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		printf("%d\n",iDigit);
		iNo = iNo / 10;
	}	
}

int main()
{
	int iValue = 0;
	
	printf("Enter Number : ");
	scanf("%d",&iValue);
	
	DisplayDigit(iValue);

	return 0;
}