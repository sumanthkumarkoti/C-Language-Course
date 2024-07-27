// Program to print the given number that many times
# include <stdio.h>
main()
{
    int c=1,no;

    no=0;

    printf("\n Enter a number : ");
    scanf("%d",&no);


    while(c<=no)
    {
        printf("\n %d. %d",c,no);
        c++;
    }

    printf("\n");
    getch();
}
