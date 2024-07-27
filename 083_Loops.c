// Program to read numbers until user enters 0 and display the sum of even numbers and odd numbers
# include <stdio.h>
main()
{
    int a,c,e,o,sum1,sum2;

    c=1;
    e=o=sum1=sum2=0;

    do
    {
        printf("\n Enter Number %d : ",c);
        scanf("%d",&a);
        c++;
        if (a==0)
            break;
        if(a%2==0)
        {
            e++;
            sum1=sum1+a;
        }
        else
        {
            o++;
            sum2=sum2+a;
        }
    }while(a!=0);

    printf("\n No of Even Numbers is %d.",e);
    printf("\n Sum of Even Numbers is %d.",sum1);
    printf("\n No of Odd Numbers is %d.",o);
    printf("\n Sum of Odd Numbers is %d.",sum2);


    printf("\n");
    getch();
}
