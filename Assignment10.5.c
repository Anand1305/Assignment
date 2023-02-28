#include<stdio.h>

double SquareMeter(int iValue)
{
	double dAns = 1.0;
	dAns = 0.0929 * iValue;
	return dAns;
}

int main()
{
	int iValue = 0;
	double dRet = 0.0;
	
	printf("Enter area in square feet");
	scanf("%d",&iValue);
	
	dRet = SquareMeter(iValue);
	
	printf("%lf",dRet);
	
	return 0;
}