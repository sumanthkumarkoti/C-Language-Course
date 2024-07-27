// Program to print result for the input based and power
# include <stdio.h>
# include <math.h>
main()
{
    int b,p,result;

    b=p=result=0;

    printf("\n Enter Base Number : ");
    scanf("%d",&b);
    printf("\n Enter Power Number : ");
    scanf("%d",&p);

    result=pow(b,p);

    printf("\n Result is %d.",result);

    printf("\n");
    getch();
}
