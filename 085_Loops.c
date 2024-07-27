// Program to print 10 random numbers and find the biggest number
# include <stdio.h>
# include <stdlib.h>
# include <time.h>
main()
{
    int i,r,big=0;

    srand(time(0));
    for (i=1;i<=10;i++)
    {
        r=rand();
        printf("\n%d. %d",i,r);
        if (r>big)
            big=r;
    }

    printf("\n Biggest Number is %d",big);

    printf("\n");
    getch();
}
