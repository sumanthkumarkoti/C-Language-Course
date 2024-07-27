// Program to calculate mean of 3 numbers
# include <stdio.h>
# include "myfunctions.h"
main ()
{
    float no1,no2,no3,mean;

    printf("\n Enter Number 1 : ");
    scanf("%f",&no1);
    printf("\n Enter Number 2 : ");
    scanf("%f",&no2);
    printf("\n Enter Number 3 : ");
    scanf("%f",&no3);

    mean=mean3(no1,no2,no3);

    printf("\n Mean of %.2f,%.2f,%.2f is %.2f",no1,no2,no3,mean);

    printf("\n");
}
