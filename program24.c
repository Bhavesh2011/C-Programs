#include<stdio.h>

int Summation(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 0 ; iCnt <= iNo ; iCnt++)
    {
        iSum = iSum + iCnt;
    }
    return iSum;
}
int main()
{

    int iValue = 0;
    printf("Enter The Number\n");
    scanf("%d",&iValue);

    int iRet = 0;

    iRet = Summation(iValue);

    printf("Summation is %d",iRet);

    return 0;
}