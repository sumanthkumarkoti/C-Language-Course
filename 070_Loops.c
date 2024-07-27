// Program to print the sum of first and last numbers of inputted number
# include <stdio.h>
main()
{
    int no,ld,fd,sum,temp;

    no=ld=fd=sum=temp=0;

    printf("\n Enter a Number : ");

    scanf("%d",&no);

    temp=no;
    ld=no%10;
    no=no/10;

    while (no>=10)
    {
        fd=no%10;
        no=no/10;
    }

    fd=no;
    sum=fd+ld;
    no=temp;

    printf("\n The Sum of First and Last Digits of %d is %d.",no,sum);

    printf("\n");
    getch();
}
