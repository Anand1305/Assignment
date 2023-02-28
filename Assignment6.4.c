#include<stdio.h>
int Multipy(int iNo1,int iNo2,int iNo3)
{
	int iAns = 1;
	if((iNo1 || iNo2 || iNo3) == 0)
	{
		printf("%d",0);
	}
	
	iAns = iNo1 * iNo2 * iNo3;
	return iAns;
}

int main()
{
	int iValue1 = 0,iValue2 = 0,iValue3 = 0,iRet = 0;
	printf("Please Enter the Three Numbers : ");
	
	scanf("%d %d %d",&iValue1,&iValue2,&iValue3);
	
	iRet = Multipy(iValue1,iValue2,iValue3);
	
	printf("Multiplication is : %d",iRet);
	
	return 0;
}