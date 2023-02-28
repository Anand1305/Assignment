// Accept N numbers from user and return product of all odd elements

#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[],int iLength)
{
	int iCnt = 0; int iOddMult = 1;
	for(iCnt = 0 ; iCnt < iLength ; iCnt++)
	{
		if((Arr[iCnt]% 2) != 0)
		{
			iOddMult = iOddMult * Arr[iCnt];
		}
	}
	return iOddMult;
}
int main()
{
	int iSize = 0,iCnt = 0;
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
	
	iRet = Product(p,iSize);
	
	printf("The Occurance Index is %d \n",iRet);
	
	
	free(p);
	
	return 0;
	
}