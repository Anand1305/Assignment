#include<stdio.h>

int EvenFactorial(int iNo)
{
	int iMult1 = 1;
	int iMult2 = 1;
	for(int iCnt = iNo; iCnt >= 1;iCnt--)
	{
		if(iCnt%2==0)
		{
			iMult1 = iMult1 * iCnt;
		}
		
		if(iCnt%2!=0)
		{
			iMult2 = iMult2 * iCnt;
		}
	}
	return iMult1 - iMult2;
}

int main()
{
	int iValue = 0,iRet = 0;
	
	printf("Enter Number : ");
	scanf("%d",&iValue);
	
	iRet = EvenFactorial(iValue);
	
	printf("Even Factorial of number is %d",iRet);
	
	return 0;
}