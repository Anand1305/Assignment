#include<stdio.h>

void Display(int iNo)
{
	int temp = 0;
	temp = -(iNo);
	
	for(int iCnt = temp; iCnt <= iNo ; iCnt++)
	{
		printf("%d  ",iCnt);
	}
}

int main()
{
	int iValue = 0;
	printf("Enter Number");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}