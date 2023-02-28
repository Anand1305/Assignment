#include<stdio.h>

void RangeSum(int iStart , int iEnd)
{
	int iAddition = 0;
	for(int iCnt = iStart ; iCnt <= iEnd ; iCnt++)
	{
		iAddition = iAddition + iCnt;
	}
	printf("%d",iAddition);
}

int main()
{
	int iValue1 = 0,iValue2 = 0;
	
	printf("enter Starting Point : ");
	scanf("%d",&iValue1);
	
	printf("Enter Ending Point : ");
	scanf("%d",&iValue2);
	
	RangeSum(iValue1,iValue2);
	
	return 0;
}