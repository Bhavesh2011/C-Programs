/*
    Start
        Accept Percentage From User
            If percentage is less than 0 And greater then 100
                Display as invalid Input
            If percentage is greater than zero and less than 35
                Display as fail
            If percentage is Gretaer than 35 and less tan 50
               Display as pass class
            If percentage is Gretaer than 50 and less tan 60
                Display as pass class
            If percentage is Gretaer than 60 and less tan 60
                Display as First class
            If percentage is Gretaer than 70 and less tan 100
                Display as First class with Distinction
    Stop
*/

#include <stdio.h>

void DisplayClass(float fPerc)
{
    if ((fPerc < 0.0f) || (fPerc > 100.0f))
    {
        printf("Unable to proceed because it is Invalid\n");
        return;
    }

    if ((fPerc >= 0.0f) && (fPerc < 35.0f))
    {
        printf("The candidate is Fail\n");
        return;
    }
    else if ((fPerc >= 35.0f) && (fPerc < 50.0f))
    {
        printf("The candidate is Pass Class\n");
        return;
    }
    else if ((fPerc >= 50.0f) && (fPerc < 60.0f))
    {
        printf("The candidate is Second Class\n");
        return;
    }
    else if ((fPerc >= 60.0f) && (fPerc < 70.0f))
    {
        printf("The candidate is First Class\n");
        return;
    }
    else if ((fPerc >= 70.0f) && (fPerc <= 100.0f))
    {
        printf("The candidate is First Class with Distinction\n");
        return;
    }
}

int main()
{
    float fValue = 0.0f;

    printf("Enter Your Percentage: ");
    scanf("%f", &fValue);  // Corrected from %d to %f

    DisplayClass(fValue);

    return 0;
}
