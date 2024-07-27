// Program to convert given input into date format

# include <stdio.h>
main()
{
    int a,b,c,d;

    a=b=c=d=0;

    printf("\n Enter three integers : ");
    scanf("%d %d %d",&a,&b,&c);

    d=a+1;

    printf("\n Date following %d : %d : %d is %d : %d : %d",a,b,c,d,b,c);

    printf("\n");
    getch();
}
