#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Check(int iNo)
{
	if((iNo%5)==0)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main()
{
	int iValue = 50;
	BOOL bRet = FALSE;
	
	bRet = Check(iValue);
	if(bRet == TRUE)
	{
		printf("The number is Divisbible by 5");
	}
	else
	{
		printf("The number is not Divisbible by 5");
	}
	
	return 0;
}