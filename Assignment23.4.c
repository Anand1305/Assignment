#include<stdio.h>
#include<stdbool.h>

bool ChkSmall(char ch)
{
	if((ch >= 'a') && (ch <= 'z'))
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	char cValue = '\0';
	bool bRet = false;
	
	printf("Enter the charchter");
	scanf("%c",&cValue);
	
	bRet = ChkSmall(cValue);
	
	if(bRet == true)
	{
		printf("It is small");
	}
	else
	{
		printf("It is not small");
	}
	
	return 0;
}