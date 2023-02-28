#include<stdio.h>

void TableReverse(int iNo)
{
	//int iCnt = 1;
	for(int iCnt = iNo*10;iCnt >= iNo;iCnt = iCnt - iNo)
	{
		printf("%d  ",iCnt);
	}
}

int main()
{
	int iValue = 0;
	
	printf("Enter Number : ");
	scanf("%d",&iValue);
	
	TableReverse(iValue);
	
	return 0;
}