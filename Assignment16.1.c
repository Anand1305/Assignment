// Accept N numbers From User and accept one another numbers as NO,Check wheteher NO is prsent or not
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>



bool Check(int Arr[],int iLength,int iNo)
{
	int iCnt = 0; int iFrqe = 0;
	for(iCnt = 0 ; iCnt < iLength ; iCnt++)
	{
		if(Arr[iCnt] == iNo)
		{
			break;
		}
	}
	if(iCnt == iLength)
	{
		return false;
	}
	else
	{
		return true;
	}
}
int main()
{
	int iSize = 0,iCnt = 0,iValue = 0;
	bool bRet = 0;
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
	
	printf("Enter That Another Number : ");
	scanf("%d",&iValue);
	
	bRet = Check(p,iSize,iValue);
	if(bRet == true)
	{
		printf("Yes it is prsent");
	}
	else
	{
		printf("No");
	}
	
	
	free(p);
	
	return 0;
	
}