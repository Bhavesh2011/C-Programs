#include<stdio.h>

#define ERR_INVALID -1

unsigned long Factorial(unsigned int iNo)
{
    int iCnt = 0;
    unsigned long iFact = 1;

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

    unsigned int iValue = 0;
    printf("Enter The Number\n");
    scanf("%lu",&iValue); // lu - lomg unsigned
    unsigned long iRet = 0;

    iRet = Factorial(iValue);

    if(iRet == ERR_INVALID)
    {
        printf("Envalid Input");
    }
    else
    {
    printf("factorial is %lu",iRet);
    }
    return 0;
}