#include"main.h"

int main()
{
    int degree1;
    int degree2;
    printf("enter your first degree:");

    fflush(stdin);
    scanf("%d",&degree1);

    switch(degree1)
    {
    case 0 ... 54:
        printf("faild");
        break;
    case 55 ... 64:
        printf("passed");
        break;
    case 65 ... 74:
        printf("good");
        break;
    case 75 ... 84:
        printf("very good");
        break;
    case 85 ... 100:
        printf("excllent");
        break;
    default:

        break;


    }


    scanf("%d",&degree2);
    printf("enter your second degree:\n");
    switch(degree2)
    {
    case 0 ... 54:
        printf("faild");
        break;
    case 55 ... 64:
        printf("passed");
        break;
    case 65 ... 74:
        printf("good");
        break;
    case 75 ... 84:
        printf("very good and keep going ");
        break;
    case 85 ... 100:
        printf("excllent 
            thanks");
        break;
    default:

        break;
        return 0;
    }

