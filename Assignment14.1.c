// Accept N numbers from user and return differnce between summation of even elements and summation of odd elements

#include<stdio.h>
#include<stdlib.h>
int Difference(int Arr[],int iLength)
{
	int iCnt = 0;
	int iEvenSum = 0;
	int iOddSum = 0;
	
	for(iCnt = 0; iCnt < iLength ; iCnt++)
	{
		if(Arr[iCnt] %2 == 0)
		{
			iEvenSum = iEvenSum + Arr[iCnt];
		}
		else
		{
			iOddSum = iOddSum + Arr[iCnt];
		}
	}
	return iEvenSum - iOddSum;
}

int main()
{
	int iSize = 0,iRet = 0,iCnt = 0;
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
	
	iRet = Difference(p,iSize);
	
	printf("Results is %d",iRet);
	
	free(p);
	
	return 0;
	
}