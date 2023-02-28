#include<stdio.h>

double ReactArea(float fWidth,float fHeight)
{
	double Area = 1;
	Area = fWidth * fHeight;
	
	return Area;
}

int main()
{
	float fValue1 = 0.0,fValue2 = 0.0;
	double dRet = 0.0;
	
	printf("Enter Width : \n");
	scanf("%f",&fValue1);
	
	printf("Enter Height : \n");
	scanf("%f",&fValue2);
	
	dRet = ReactArea(fValue1,fValue2);
	
	printf("The Reactangle Area is %.3lf",dRet);
	
	return 0;
}