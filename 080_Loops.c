// Program to check whether if given number is armstrong number or not
# include <stdio.h>
main()
{
    int no,r,sum,temp;

    temp=r=sum=0;

    printf("\n Enter a Number : ");
    scanf("%d",&no);

    temp=no;

    while (no>0)
    {
        r=no%10;
        sum=sum+(r*r*r);
        no=no/10;
    }

    no=temp;

    if (no==sum)
        printf("\n %d is an Armstrong Number.",no);
    else
        printf("\n %d is not an Armstrong Number",no);

    printf("\n");
    getch();
}
