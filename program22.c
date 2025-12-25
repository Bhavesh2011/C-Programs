// Retrun only one return during each function
#include<stdio.h>
#include<stdbool.h>

bool CheckDivisible(int iNo)
{

    bool bResult = false;

    if((iNo % 5) == 0)
    {
        bResult = true;
    }
    else
    {
        bResult =  false;
    }
    return bResult;
}

int main()
{
    int iValue = 0;
    printf("Enter The Number\n");
    scanf("%d",&iValue);

    bool bRet = false;
    bRet = CheckDivisible(iValue);

    if(bRet == true)
    {
        printf("Divisible by 5");

    }
    else
    {
         printf("Not divisble by 5");
    }

    return 0;
}

