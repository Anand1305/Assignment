#include <stdio.h>

void Pattern(int iNo)
{
	for(int iCnt = 5;iCnt >= 1 ; iCnt--)
	{
		printf("%d\t #\t",iCnt);
	}
	/*for(int iCnt = 0;iCnt < iNo ; iCnt++)
	{
		printf("#\t");
	}*/
}
int main()
{
	int iValue = 0;
	printf("Enter Number of elenmts");
	scanf("%d",&iValue);
	
	Pattern(iValue);
	
	return 0;
}
	
		