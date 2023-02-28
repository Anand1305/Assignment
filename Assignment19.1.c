#include<stdio.h>

void Patter(int iRow , int iCol)
{
	int iCnt = 1;
	for(iCnt = 1; iCnt <= iRow; iCnt++)
	{
		for(int iCnt2 = 1; iCnt2 <= iCol ; iCnt2 ++)
		{
			printf("*\t");
		}
		printf("\n");
	}
}

int main()
{
	int iValue1 = 0,iValue2 = 0;
	
	printf("Enter The Number of rows and columns ");
	scanf("%d %d",&iValue1,&iValue2);
	
	Patter(iValue1,iValue2);
	
	return 0;
}