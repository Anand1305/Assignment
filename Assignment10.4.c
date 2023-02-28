#include <stdio.h>

double FhtoCs(double dTemp)
{
	double dCel ;
	dCel = ((dTemp - 32) * (5/9));
	
	return dCel;
}

int main()
{
	double dValue = 0.0;
	double dRet = 0.0;
	
	printf("Enter Temperature Fahrenheit : ");
	scanf("%d",&dValue);
	
	dRet = FhtoCs(dValue);
	
	printf("The Celius Value is %.4lf",dRet);
	
	return 0;
}