#include<stdio.h>

void Patter(int iRow , int iCol)
{
	int iCnt = 1;
	int iCnt2 = 1;
	int iNo1 = 1;
	char char2 = 'a';
	for(iCnt = 1; iCnt <= iRow; iCnt++)
	{
		
		for(iCnt2 = 1; iCnt2 <= iCol ; iCnt2 ++)
		{
			if(iCnt % 2 != 0)
			{
				printf("%c\t",char2);
				char2++;
				
			
			}
			else
			{
				printf("%d\t",iNo1);
				iNo1++;
			
			}
				
		}
		printf("\n");
		iNo1 = 1;
		char2 = 'a';
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