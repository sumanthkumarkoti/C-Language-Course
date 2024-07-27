// Program to calculate and display the absolute difference of 2 numbers

# include <stdio.h>

main()

{
    int a,b,c;

    a=b=c=0;

    printf("\n");
    printf(" Enter value of 'a' : ");
    scanf("%d",&a);
    printf("\n");
    printf(" Enter value of 'b' : ");
    scanf("%d",&b);

    c=a - b;

    if (c<0)
        c = c * (-1);

    printf("\n");
    printf(" The absolute difference of (%d - %d) : %d",a,b,c);

    printf("\n");
    getch();
}
