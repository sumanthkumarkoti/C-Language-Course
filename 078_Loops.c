// Program to print fibonacci series from 1 to 100
# include <stdio.h>
main()
{
    int a,b,c;

    a=1;
    b=c=0;

    while (c<100)
    {
        c=a+b;
        printf(" %d",b);
        a=b;
        b=c;
    }

    printf("\n");
    getch();
}
