#include<stdio.h>

int main()
{
    int iNo = 751;
    int iDigit = 0;

    iDigit = iNo % 10;
    printf("%d\n",iDigit);
    iNo = iNo / 10;
    printf("Udpadted iNo : %d",iNo);

    iDigit = iNo % 10;
    printf("%d\n",iDigit);
    iNo = iNo / 10;
    printf("Udpadted iNo : %d",iNo);


    iDigit = iNo % 10;
    printf("%d\n",iDigit);
    iNo = iNo / 10;
    printf("Udpadted iNo : %d",iNo);


    return 0;
}