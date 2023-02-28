#include<stdio.h>

void RangeDisplayEven (int iStart , int iEnd)
{
	for(int iCnt = iStart; iCnt <= iEnd ; iCnt++)
	{
		if(iCnt % 2 == 0)
		printf("%d  ",iCnt);
	}
}

int main()
{
	int iValue1 = 0,iValue2 = 0;
	
	printf("enter Starting Point : ");
	scanf("%d",&iValue1);
	
	printf("Enter Ending Point : ");
	scanf("%d",&iValue2);
	
	RangeDisplayEven(iValue1,iValue2);
	
	return 0;
}