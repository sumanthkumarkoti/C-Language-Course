// Program to check positivity or negativity of a number
# include <stdio.h>
# include "myfunctions.h"
main ()
{
    float no;
    char check;

    printf("\n Enter Number : ");
    scanf("%f",&no);

    check=checkno(no);

    if (check=='p')
        printf("\n %.2f is a Positive Number.",no);
    else if (check=='n')
        printf("\n %.2f is a Negative Number.",no);
    else if (check=='z')
        printf("\n %.2f is Zero.",no);

    printf("\n");
}
