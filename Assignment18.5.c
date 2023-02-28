#include <stdio.h>

void Pattern(int iNo)
{
	for(int iCnt = 2;iCnt <= iNo*2 ; iCnt = iCnt + 2  )
	{
		printf("%d\t",iCnt);
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
	
		