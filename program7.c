#include<stdio.h>


#define ERR_INVALID_OTPUT-1
int CalculatTicket(int iagevalue)
{
    if(iagevalue < 0)
    {
        return ERR_INVALID_OTPUT;
    }
    else if ((iagevalue > 0) && (iagevalue <= 5))
    {
        return 100;
    }
    else if ((iagevalue > 5) && (iagevalue <= 18))
    {
        return 700;

    }

    else if ((iagevalue > 18) && (iagevalue <= 50))
    {
        return 1000;
    }

    else if ((iagevalue > 50) )
    {
        return 700;
    }

}

int main()
{
    int iage = 0;
    int iTicketPrice = 0;
    printf("Enter The age of the person\n");
    scanf("%d",&iage);

    printf("%d",iage);

    int iTicketPrice = CalculatTicket(iage);

    printf(iTicketPrice); 

}