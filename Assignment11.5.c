#include<stdio.h>

void RangeDisplayReverse(int iStart , int iEnd)
{
	for(int iCnt = iEnd ; iCnt >= iStart ; iCnt--)
	{
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
	
	RangeDisplayReverse(iValue1,iValue2);
	
	return 0;
}