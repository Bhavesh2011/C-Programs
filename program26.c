#include<stdio.h>

#define ERR_INVALID -1

int Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if(iNo < 0)
    {
        return ERR_INVALID;
    }

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}
int main()
{

    int iValue = 0;
    printf("Enter The Number\n");
    scanf("%d",&iValue);

    int iRet = 0;

    iRet = Factorial(iValue);

    if(iRet == ERR_INVALID)
    {
        printf("Envalid Input");
    }
    else
    {
    printf("factorial is %d",iRet);
    }
    return 0;
}