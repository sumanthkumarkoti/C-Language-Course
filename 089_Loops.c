// Program to print factors of given numbers
# include <stdio.h>
main()
{
    int f,no;

    f=1;
    no=0;

    printf("\n Enter a number : ");
    scanf("%d",&no);

    if (no>=0)
    {
        while(f<=no)
       {
           if (no%f==0)
           {
              printf(" %d ",f);
              f++;
           }
           else
              f++;
       }
    }
    else
        printf("\n\a\t\t\t\t\t\t \"INVALID INPUT\" ");

    printf(" are the factors of %d.",no);

    printf("\n");
    getch();
}
