#include<stdio.h>
void ChkCapital(char ch)
{
	if(ch == 'A' || ch == 'a')
	{
		printf("Your exam at  7 AM");
	}
	else if(ch == 'B' || ch == 'b')
	{
		printf("Your exam at  8:30 AM");
	}
	else if(ch == 'C' || ch == 'c')
	{
		printf("Your exam at 9.20  AM");
	}
	else if(ch == 'D' || ch == 'd')
	{
		printf("Your exam at  10.30 AM");
	}
	else
	{
		printf("Invalid Input");
	}
	
}

int main()
{
	char cValue = '\0';
	
	
	printf("Enter the charchter");
	scanf("%c",&cValue);
	
	ChkCapital(cValue);
	
	
	return 0;
}