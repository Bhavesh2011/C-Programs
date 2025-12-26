#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    bool bFlag = true;

    if(iNo < 0) // These is Updater 
    {
        iNo = -iNo;
    }
    for(iCnt = 2; iCnt <=(iNo / 2) ; iCnt++)
    {
        if((iNo % iCnt) == 0)  
        {
                bFlag = false;
                break;
        }
    }
   return bFlag;
}

int main()
{
    int iValue = 0;
    bool iRet = false;
    printf("Enter The Number\n");
    scanf("%d",&iValue); 

    iRet = CheckPrime(iValue);

    if(iRet == true)
    {
        printf("%d is prime",iValue);
    }
    else
    {
        printf("Not prime");
    }

    return 0;
}