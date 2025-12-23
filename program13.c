#include<stdio.h>

void Display(int iNo)
{
    int icnt = 0;
    for (icnt = 1; icnt <= 5 ; icnt++)

    {
        printf("%d\n",iNo);
    }
    
}

int main()
{
    int iValue = 0;
    printf("Enter The Input\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}