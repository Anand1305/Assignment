#include<stdio.h>

int MulFact(int iNo)
{
	int iCnt = 0;
	int imult = 1;
	for(iCnt = 1; iCnt <= iNo/2 ; iCnt++)
	{
		if((iNo%iCnt) == 0)
		{
			imult = imult * iCnt;
		}
		
	
	}
	return imult;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	printf("Enter The Number : ");
	scanf("%d",&iValue);
	
	
	iRet= MulFact(iValue);
	printf(" %d ",iRet);
	
	return 0;
}