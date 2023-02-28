#include<stdio.h>

void DisplayFactors(int iValue)
{
	register int iCnt = 0;
	for(iCnt = 0; iCnt < iValue ; iCnt++)
	{
		if((iValue % iCnt) == 0)
		{
			printf("%d \n",iCnt);
		}
	}
}

int main()
{
	int iNo = 0;
	printf("Enter the Number : ");
	scanf("%d",&iNo);
	
	DisplayFactors(iNo);
	return 0;
}	