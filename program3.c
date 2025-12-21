/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  file name : program2.c
//  Descriptiom : Used to calculate percentage  
//  Author : Bhavesh Narayan Gaikwad
//  Date : 28/04/2025
//  
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Static Code 

#include<stdio.h>

int main()
{
    int Total = 400;
    int Obtained = 323;
    float Percentage = 0.0f;
    
    Percentage = ((float)Obtained / (float)Total) * 100;

    printf("Percentage is :%.2f%% \n",Percentage);


    return 0;
}
