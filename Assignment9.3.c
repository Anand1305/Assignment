#include<stdio.h>

int EvenFactorial(int iNo)
{
	int iMult = 1;
	for(int iCnt = iNo; iCnt >= 1;iCnt--)
	{
		if(iCnt%2==0)
		{
			iMult = iMult * iCnt;
		}
	}
	return iMult;
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