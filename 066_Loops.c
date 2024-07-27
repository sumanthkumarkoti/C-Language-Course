// Program to print numbers from n to 1
# include <stdio.h>
main()
{
    int c;

    printf("\n Enter Value of 'N' : ");
    scanf("%d",&c);

    do
    {
        printf(" %d ",c);
        c--;
    }while (c>=1);

    printf("\n");
    getch();
}
