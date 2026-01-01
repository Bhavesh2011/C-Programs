#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 2; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
           
            break;
        }
    }
    return(iCnt > (iNo / 2)); // Not recommendable
    
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
        printf("%d is Prime",iValue);
    }
    else
    {
        printf("Not Prime");
    }

    return 0;
}