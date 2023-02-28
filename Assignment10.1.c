#include<stdio.h>

double CircleArea(float fRadius)
{
	
	double Area = 1;
	Area = 3.14 * fRadius * fRadius;
	
	return Area;
}

int main()
{
	float fValue = 0.0;
	double dRet = 0.0;
	
	printf("Enter Radius : ");
	scanf("%f",&fValue);
	
	dRet = CircleArea(fValue);
	
	printf("The Area of Circle is %.4lf",dRet);
	
	return 0;
}