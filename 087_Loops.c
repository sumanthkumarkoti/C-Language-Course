//Program to find lcm of two numbers
# include <stdio.h>
main()
{
    int f,lcm,no1,no2,m1,m2;

    lcm=no1=no2=0;
    m1=m2=f=1;

    printf("\n Enter Number 1 : ");
    scanf("%d",&no1);
    printf("\n Enter Number 2 : ");
    scanf("%d",&no2);

    for (f=1;f<=no1;f++)
    {
        if (no1%f==0)
            while (no1>=1 && f!=no1 && no2>=1 && f!=no2)
        {
            m1=m1*f;
            m2=m2*f;
            if (m1 )
        }
    }
    for (f=1;f<=no2;f++)
    {
        if (no2%f==0)
            while ()
        {
            ;
            break;
        }
    }
    if (no1==1)
        for (f=1;f<=no2;f++)
        {
            if (no2%f==0)
                while (no2>=1)
                {
                    m2=m2*f;
                    break;
                }
        }

    lcm=m1*m2;
    printf("\n The LCM of %d and %d is %d.",no1,no2,lcm);

    printf("\n");
    getch();
}
