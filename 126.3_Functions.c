// Program to count words in inputted strings
# include <stdio.h>
# include <string.h>
# include "myfunctions.h"
main ()
{
    int len,w=1;
    char str[100];

    printf("\n Enter String : ");
    scanf("%[^\n]",&str);

    w=wcount(str);

    printf("\n Number of words in inputted string are %d.",w);

    printf("\n");
}
