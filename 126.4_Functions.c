// Program to convert inputted string into proper case
# include <stdio.h>
# include <string.h>
# include "myfunctions.h"
main ()
{
    int i;
    char str[100];

    printf("\n Enter String : ");
    scanf("%[^\n]",&str);

    propercase(str);

    for (i=0;i<strlen(str);i++)
        printf("%c",str[i]);

    printf("\n");
}
