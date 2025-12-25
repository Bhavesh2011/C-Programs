// Not reccomended

#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{

   return((iNo % 2) == 0);
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
        printf("The %d is Even Number " , iValue);

    }
    else
    {
         printf("The %d is odd Number " , iValue);
    }

    return 0;
}

