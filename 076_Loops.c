// Program to print the table of given number
# include <stdio.h>
main()
{
    int no,sv,ev;

    no=sv=ev=0;

    printf("\n Enter a number : ");
    scanf("%d",&no);
    printf("\n Enter Starting Value : ");
    scanf("%d",&sv);
    printf("\n Enter Ending Value : ");
    scanf("%d",&ev);

    if(no>0 && sv<ev && sv>0 && ev >0)
    {
        while(sv<=ev)
            {
                printf("\n %d * %d = %d",no,sv,no*sv);
                sv++;
            }
    }
    else
        printf("\a\n\t\t\t\t\t\t \"INVALID INPUT\" ");

    printf("\n");
    getch();
}
