#include<stdio.h>

void Display(int iNo)
{
    int icnt = 0;
    int isum = 0;
    for (icnt = 1; icnt <= iNo ; icnt++)
    {
      
       isum = isum + icnt;
    }

    return isum;
    
}

int main()
{
    int iValue = 0;
    printf("Enter The frequency\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}