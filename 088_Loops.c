// Program to print ASCII chart
# include <stdio.h>
main()
{
    int c;

    for (c=1;c<=256;c++)
        printf(" [ %d - %c ]",c,c);

    printf("\n");
    getch();
}
