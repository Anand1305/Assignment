// Accept N numbers from user check whether that numbers contains 11 in it or not
#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Chck(int Arr[],int iLength)
{
	int iCnt = 0;
	for(iCnt = 0 ; iCnt < iLength ; iCnt++)
	{
		if(Arr[iCnt] == 11)
		{
			break;
		}
	}
	if(iCnt == iLength)
	{
		return FALSE;
	}
	else
	{
		return TRUE;
	}
}
int main()
{
	int iSize = 0,iCnt = 0;
	BOOL bRet = FALSE;
	int *p = NULL;
	
	printf("Enter number of elements : \n");
	scanf("%d",&iSize);
	
	p = (int *)malloc(iSize * sizeof(int));
	
	if(p == NULL)
	{
		printf("Unable to allocate memorey\n");
		return -1;
	}
	
	for(iCnt = 0;iCnt < iSize ; iCnt++)
	{
		printf("Enter element : ");
		scanf("%d",&p[iCnt]);
	}
	
	bRet = Chck(p,iSize);
	if(bRet == TRUE)
	{
		printf("Yes There is 11 in the array \n");
	}
	else
	{
		printf("No\n");
	}
	
	
	free(p);
	
	return 0;
	
}