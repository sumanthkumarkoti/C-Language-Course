// Program to check whether if inputted number is prime or not
# include <stdio.h>
# include <math.h>
main()
{
    int f,no1,no2,i;
    char isprime='y';

    f=1;
    no1=no2=i=0;

    printf("\n Enter a number : ");
    scanf("%d",&no1);
    printf("\n Enter another number : ");
    scanf("%d",&no2);

    if (no1>no2)
    {
        printf("\a\n\t\t\t\t\t\t \"INVALID RANGE\" ");
        return;
    }

    while (no1<=no2)
    {
        while (f<=no1)
        {
            if (no1%f==0 && f<=no1)
            {
                i++;
            }
            f++;
        }
        if (i==2)
            printf(" %d",no1);
        no1++;
        f=1;
        i=0;
    }

    printf("\n");
    getch();
}
