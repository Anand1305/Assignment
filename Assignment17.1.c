// Accept N numbers From user and find the largest number from that number
#include<stdio.h>
#include<stdlib.h>
int Maximum(int Arr[],int iSize)
{
	int iMax = Arr[0];int iSeconLargest = 0;
	int iCnt = 0;
	
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		if(Arr[iCnt] > iMax)
		{
			iSeconLargest = Arr[iCnt];
			//Max = Arr[iCnt];
		}
		else if(iSeconLargest >= iMax)
		{
			iSeconLargest = iMax;
		}
		
	}
	return iSeconLargest;
	//return iMax;
}
	

int main()
{
	int *ptr = NULL;
	int iLength = 0,i = 0,iRet = 0;
	
	printf("Enter The Number of Elements : \n");
	scanf("%d",&iLength);
	
	ptr = (int *)malloc(sizeof(int) * iLength);
	
	printf("Enter the Elements : \n");
	for(i = 0; i < iLength ; i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	iRet = Maximum(ptr,iLength);
	
	printf("The Maximum Number is : %d\n",iRet);
	
	free(ptr);
	
	return 0;
}