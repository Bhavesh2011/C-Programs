#include<stdio.h>

#define ERR_INVALID_AGE -1

int CalculateTicket(int iAge)
{
    int iPrice = 0;

    if(iAge < 0)
    {
        return ERR_INVALID_AGE;
    }

    if(iAge <= 5)
    {
        iPrice = 0;
    }
    else if(iAge <= 18)
    {
        iPrice = 700;
    }
    else if(iAge <= 50)
    {
        iPrice = 1000;
    }
    else // iAge > 50
    {
        iPrice = 700;
    }

    return iPrice;
}

int main()
{
    int iValue = 0;
    printf("Enter the age of the person:\n");
    scanf("%d", &iValue);

    int iTicketPrice = CalculateTicket(iValue);

    if(iTicketPrice == ERR_INVALID_AGE)
    {
        printf("Not acceptable\n");
    }
    else
    {
        printf("Ticket Price: %d\n", iTicketPrice);
    }

    return 0;
}
