// Program to check whether if inputted number is prime or not
# include <stdio.h>
# include <math.h>
main()
{
    int f,i,no,sum;
    char isprime='y';

    f=2;
    i=no=sum=0;

    printf("\n Enter a number : ");
    scanf("%d",&no);


    while(f<= sqrt(no))
    {
        i++;
        if (no%f==0)
        {
            isprime='n';
            break;
        }
        else
           f++;
    }

    printf("\n Number of Iterations : %d",i);
    if (isprime=='y')
        printf("\n %d is a Prime Number.",no);
    else
        printf("\n %d is not a Prime Number.",no);
    printf("\n");
    getch();
}
