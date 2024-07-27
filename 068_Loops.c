// Program to read 10 numbers and display the sum of even numbers and odd numbers
# include <stdio.h>
main()
{
    int a,c,sum1,sum2;

    sum1=sum2=0;

    for(c=1;c<=10;c++)
    {
        printf("\n Enter Number %d : ",c);
        scanf("%d",&a);
        if(a%2==0)
          sum1=sum1+a;
        else
          sum2=sum2+a;
    }

    printf("\n Sum of Even Numbers is %d.",sum1);
    printf("\n Sum of Odd Numbers is %d.",sum2);


    printf("\n");
    getch();
}
