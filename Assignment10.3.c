#include<stdio.h>

int KMtoMeter(int iNo)
{
	int iAns = 1;
	
	iAns = iNo * 1000;
	return iAns;
}

int main()
{
	int iValue = 0,iRet= 0;
	
	printf("Enter Distance : ");
	scanf("%d",&iValue);
	
	iRet = KMtoMeter(iValue);
	
	printf("The KM Value is %d",iRet);
	
	return 0;
}