#include<stdio.h>

int Factor(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1 ; iCnt < iNo ; iCnt++)
    {
        if((iNo % iCnt) == 0)  
        {
            printf("%d is Factor\n ",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;
    printf("Enter The Number\n");
    scanf("%d",&iValue); 

    Factor(iValue);

    return 0;
}