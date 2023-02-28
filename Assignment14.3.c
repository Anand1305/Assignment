// Accept N numbers from user and display all such elements which are divisible by 5 and Even
#include<stdio.h>
#include<stdlib.h>
void Display(int Arr[],int iLength)
{
	
	for(int iCnt = 0; iCnt < iLength ; iCnt++)
	{
		if((Arr[iCnt] %5 == 0) && (Arr[iCnt] % 2 == 0))
		{
			printf("%d\n",Arr[iCnt]);
		}
		
	}
	
}

int main()
{
	int iSize = 0,iCnt = 0;
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
	
	Display(p,iSize);
	
	
	
	free(p);
	
	return 0;
	
}