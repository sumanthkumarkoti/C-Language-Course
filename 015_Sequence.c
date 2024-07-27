// Program to evaluate (a+b)2

# include <stdio.h>

main()

{
    int a,b,c;

    a=b=c=0;

    printf("\n");
    printf(" Enter value of a: ");
    scanf("%d",&a);
    printf("\n");
    printf(" Enter value of b: ");
    scanf("%d",&b);

    c = (a*a) + (b*b) + 2*(a*b);

    printf("\n");
    printf(" The value of (%d + %d)^2 is %d",a,b,c);

    printf("\n");
    getch();
}
