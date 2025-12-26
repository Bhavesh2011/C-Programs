#include<stdio.h>

int SumFactor(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    if(iNo < 0) // These is Updater 
    {
        iNo = -iNo;
    }
    for(iCnt = 1 ; iCnt <=(iNo / 2) ; iCnt++)
    {
        if((iNo % iCnt) == 0)  
        {
                iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter The Number\n");
    scanf("%d",&iValue); 

    iRet = SumFactor(iValue);

    printf("The Addition is : %d",iRet);

    return 0;
}