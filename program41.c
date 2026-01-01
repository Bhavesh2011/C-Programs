#include<stdio.h>
#include<stdbool.h>

bool Chechperfect(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1;iCnt <= iNo ; iCnt++)
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

    printf("Enter The Number");
    scanf("%d",&iValue);

    iRet = Chechperfect(iValue);

     if(iRet == true)
     {
        printf("%d is perfect Number\n",iValue);
     }
     else
     {
          printf("%d is not perfect Number\n",iValue);  
     }

    return 0;
}