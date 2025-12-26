#include<stdio.h>

#define ERR_INVALID -1

 int Factorial(unsigned int iNo)
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

    unsigned int iValue = 0;
    printf("Enter The Number\n");
    scanf("%u",&iValue); // u mule - valle number ghenrch nhiii u apn used kelaa kran unsigned mulle

    int iRet = 0;

    iRet = Factorial(iValue);

    if(iRet == ERR_INVALID)
    {
        printf("Envalid Input");
    }
    else
    {
    printf("factorial is %u",iRet);
    }
    return 0;
}