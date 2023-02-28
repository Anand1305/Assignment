// Write a Program Which Accept Number from user and count frequency of 2 in it
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
	int iDigit = 0;
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		iNo = iNo / 10;
	}	
	if(iDigit == 2)
		{
			return TRUE;
		}
		else
		{
			return FALSE;
		}
}

int main()
{
	int iValue = 0;
	BOOL bRet = FALSE;
	
	printf("Enter Number : ");
	scanf("%d",&iValue);
	bRet = ChkZero(iValue);
	
	if(bRet == TRUE)
	{
		printf("It Contains Zero");
	}
	else
	{
		printf("There is no Zero");
	}
	
	return 0;
}