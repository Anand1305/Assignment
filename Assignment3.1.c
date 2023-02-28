#include<stdio.h>

int PrintEven(int iNo)
{
	if(iNo <= 0)
	{
		return -1;
	}
	
	int iCnt = 0;
	for(iCnt = 2;iCnt<=2*iNo;iCnt=iCnt+2)
	{
		printf("%d ",iCnt);
	}
}
int main()
{
	int iValue = 0;
	
	printf("Enter Number\n");
	
	scanf("%d",&iValue);
	
	PrintEven(iValue);
	
	return 0;
}