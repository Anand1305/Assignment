#include<stdio.h>

void Patter(int iRow , int iCol)
{
	int iCnt = 1;
	
	for(iCnt = 1; iCnt <= iRow; iCnt++)
	{
		int iCnt2 = 1 ,iCnt3 = 1;
		char ch = 'A';
		char ch2 = 'a';
		for(iCnt2 = 1; iCnt2 <= iCol ; iCnt2 ++)
		{
			if(iCnt % 2 == 0)
			{
				printf("%c\t",ch2);
				ch2++;
			}
			else
			{
				printf("%c\t",ch);
				ch++;
			}
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