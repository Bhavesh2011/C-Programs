#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int iNo)
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
    if(iSum == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool iRet = false;
    printf("Enter The Number\n");
    scanf("%d",&iValue); 

    iRet = CheckPerfect(iValue);

    if(iRet == true)
    {
        printf("%d is perfect",iValue);
    }
    else
    {
        printf("Not perfect");
    }

    return 0;
}