// Accept N numbers from user and accept one another numbers as NO, return index of first occurance of that NO
#include<stdio.h>
#include<stdlib.h>



int FirstOccurance(int Arr[],int iLength,int iNo)
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
		return -1;
	}
	else
	{
		return iCnt;
	}
}
int main()
{
	int iSize = 0,iCnt = 0,iValue = 0;
	int iRet = 0;
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
	
	iRet = FirstOccurance(p,iSize,iValue);
	
	printf("The Occurance Index is %d \n",iRet);
	
	
	free(p);
	
	return 0;
	
}