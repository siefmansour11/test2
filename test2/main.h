
#include<stdio.h>


void decimalToBinary(int n)
{

    int binaryNum[32];


    int i = 0;
    while (n > 0)
    {

        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }


    printf("binary code: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binaryNum[j]);

    printf("\n");
}

