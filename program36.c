
#include<stdio.h>

int FactorNonFactor(int iNo)
{
    int iCnt = 0;

    if(iNo < 0) // These is Updater 
    {
        iNo = -iNo;
    }
    for(iCnt = 1 ; iCnt < iNo ; iCnt++)
    {
        if((iNo % iCnt) == 0)  
        {
            printf("%d is Factor\n ",iCnt);
        }
        else
        {
            printf("%d Are not Factor \n",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;
    printf("Enter The Number\n");
    scanf("%d",&iValue); 

    FactorNonFactor(iValue);

    return 0;
}