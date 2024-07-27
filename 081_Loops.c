// Program to find if given number is palindrome or not
# include <stdio.h>
main()
{
    int on,rn,no,rem;

    on=rn=no=rem=0;

    printf("\n Enter a Number : ");
    scanf("%d",&no);

    on=no;

    while (no!=0)
    {
        rem=no%10;
        rn=rn*10+rem;
        no=no/10;
    }

    no=on;

    if (on==rn)
        printf("\n %d is a Palindrome Number.",no);
    else
        printf("\n %d is not a Palindrome Number.",no);

    printf("\n");
    getch();
}
