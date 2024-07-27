// Program to print the factorial of a positive number
# include <stdio.h>
main()
{
    long f,no,temp;

    f=no=1;

    printf("\n Enter a Non-Negative Number : ");
    scanf("%ld",&no);

    temp=no;

    while(no>=1)
    {
        f=f*no;
        no--;
    }

    no=temp;

    if (no=0)
        printf("\n Factorial of %d is 1.",no);
    else
       if (no>0)
         printf("\n Factorial of %d is %d.",no,f);
    else
       if (no<0)
         printf("\n\a\t\t\t\t\t\t \"INVALID INPUT\" ");

    printf("\n");
    getch();
}
