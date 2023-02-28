// Find Percentage

#include<stdio.h>

float Percentage(float fNo1,float fNo2)
{
	float fAns = 1.0;
	/*if((fNo1==0) || (fNo2==0))
	{
		printf("%f",0.0);
	}*/
	fAns = (fNo1 / fNo2) * 100 ;
	
	return fAns;
}

int main()
{
	float fValue1 =0.0,fValue2 = 0.0;
	float fRet = 0.0;
	
	printf("Please Enter Total Marks");
	scanf("%d",&fValue1);
	printf("Please Enter obtained Marks");
	scanf("%d",&fValue2);
	fRet = Percentage(fValue1,fValue2);
	printf("The Percentage Obtained are : %.1f\% ",fRet);
	return 0;
}