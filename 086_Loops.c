//Program to find hcf of two numbers
# include <stdio.h>
main()
{
    int f,hcf,no1,no2;

    hcf=no1=no2=0;
    f=1;

    printf("\n Enter Number 1 : ");
    scanf("%d",&no1);
    printf("\n Enter Number 2 : ");
    scanf("%d",&no2);

    if (no1<no2)
    {
        while (f<=no1)
        {
            if(no1%f==0 && no2%f==0)
                {
                    hcf=f;
                    f++;
                }
            else
                f++;
        }
    }
    else
    {
        while (f<=no2)
        {
            f=1;
            if(no1%f==0 && no2%f==0)
                {
                    hcf=f;
                    f++;
                }
            else
                f++;
        }
    }

    printf("\n The HCF of %d and %d is %d.",no1,no2,hcf);

    printf("\n");
    getch();
}
