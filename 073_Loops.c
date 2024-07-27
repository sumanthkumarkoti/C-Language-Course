// Program to check whether if inputted number is perfect or not
# include <stdio.h>
main()
{
    int f,no,sum,temp;

    f=1;
    no=sum=temp=0;

    printf("\n Enter a number : ");
    scanf("%d",&no);

    temp=no;

    do
    {
        if (no%f==0)
        {
            printf(" %d ",f);
            sum=sum+f;
            f++;
        }
        else
            f++;
    }while (f<no);

    printf("\n Sum is %d",sum);

    no=temp;

    if (sum==no)
        printf("\n %d is a Perfect Number.",no);
    else
        printf("\n %d is not a Perfect Number.",no);
    printf("\n");
    getch();
}
