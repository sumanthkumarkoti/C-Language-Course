// Program to check whether if given number is strong number or not
# include <stdio.h>
main()
{
    long f,no,temp;
    int sum,a;

    a=no=sum=0;

    printf("\n Enter a Non-Negative Number : ");
    scanf("%d",&no);

    temp=no;

    while(no>0)
    {
        f=1;
        a=no%10;
        while (a>=1)
            {
                f=f*a;
                a--;
            }
        sum=sum+f;
        no=no/10;
    }

    no=temp;

    if (sum==no)
       printf("\n %d is a Strong Number.",no);
    else
       printf("\n %d is not a Strong Number.",no);

    printf("\n");
    getch();
}
