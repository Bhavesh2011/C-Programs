// Retrun only one return during each function


#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{

    bool bResult = false;

    if(((iNo % 5) == 0) && ((iNo % 3) == 0))
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
    bRet = CheckEven(iValue);

    if(bRet == true)
    {
        printf("Number is divisble " , iValue);

    }
    else
    {
         printf("Number is mot divisble " , iValue);
    }

    return 0;
}

