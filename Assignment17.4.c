
#include<stdio.h>
#include<stdlib.h>
void Maximum(int Arr[],int iSize)
{
	int iDigit = 0,iCount = 0,iCnt = 0;
	for(iCnt = 0; iCnt < iSize ; iCnt++)
	{
		if(Arr[iCnt] >= 100 && Arr[iCnt] < 1000)
		{
			printf("%d\t",Arr[iCnt]);
		}
	}
	
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
	
	Maximum(ptr,iLength);
	
	
	
	free(ptr);
	
	return 0;
}