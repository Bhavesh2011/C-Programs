/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  file name : program2.c
//  Descriptiom : Used to calculate percentage  
//  Author : Bhavesh Narayan Gaikwad
//  Date : 28/04/2025
//  
/////////////////////////////////////////////////////////////////////////////////////////////////////////////


// Dynamic Code 

#include<stdio.h>

int main()
{
    int Total = 0;
    int Obtained = 0;
    float Percentage = 0.0f;
    
    printf("Enter your total marks \n");
    scanf("%d",&Total);                        // d for decimal

    printf("Enter Your obtained marks \n");
    scanf("%d",&Obtained);                     //scanf f is format %d is format specifier 

    Percentage = ((float)Obtained / (float)Total) * 100;

    printf("Percentage is :%.2f%% \n",Percentage);


    return 0;
}