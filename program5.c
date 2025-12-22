/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  file name :   program2.c
//  Descriptiom : Used to calculate percentage  
//  Author :      Bhavesh Narayan Gaikwad
//  Date :        28/04/2025
//  
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

float CalculatePercentage(int iTotalMarks , int iObtainedMarks) //Pascal case
{
    float fPercentageValue = 0.0f;
    fPercentageValue = ((float)iObtainedMarks / (float)iTotalMarks) *100;

    return fPercentageValue; // there is no user interaction in the user defined function means ithe direct printf tkku nko 

}


int main()
{
    int iTotal = 0;
    int iObtained = 0;
    float fPercentage = 0.0f;
    
    printf("Enter your total marks \n");
    scanf("%d",&iTotal);                        // d for decimal

    printf("Enter Your obtained marks \n");
    scanf("%d",&iObtained);                     //scanf f is format %d is format specifier 

    // fPercentage = ((float)iObtained / (float)iTotal) * 100;

    fPercentage = CalculatePercentage(iTotal , iObtained);

    printf("Percentage is :%.2f%% \n",fPercentage);


    return 0;
}