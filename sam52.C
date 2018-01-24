
#include<stdio.h>
void main()
{
    int N;
    printf("ENTER ANY VALUE");
    scanf("\t%d",&N);
    if(1>=N<=10)
    {
        switch(N)
        {
        case 1:printf("\none");
        break;
        case 2:printf("\ntwo");
        break;
        case 3:printf("\nthree");
        break;
        case 4:printf("\nfour");
        break;
        case 5:printf("\nfive");
        break;
        case 6:printf("\nsix");
        break;
        case 7:printf("seven");
        break;
        case 8:printf("eight");
        break;
        case 9:printf("nine");
        break;
        case 10:printf("ten");
        break;
        }
    }
}


