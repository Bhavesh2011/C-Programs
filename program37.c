#include<stdio.h>

int EvenFactor(int iNo)
{
    int iCnt = 0;

    if(iNo < 0) // These is Updater 
    {
        iNo = -iNo;
    }
    for(iCnt = 1 ; iCnt <=(iNo / 2) ; iCnt++)
    {
        if((iNo % iCnt) == 0)  
        {
           
            if((iCnt % 2 ) == 0)
            {
                printf("%d\n",iCnt);
            }
        }
    }
}

int main()
{
    int iValue = 0;
    printf("Enter The Number\n");
    scanf("%d",&iValue); 

    EvenFactor(iValue);

    return 0;
}