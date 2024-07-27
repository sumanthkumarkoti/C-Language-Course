//Program to swap values of two variables A and B without using 3rd variable

# include <stdio.h>

main()

{
    int a,b;

    a=b=0;

    printf("\n");
    printf(" Enter the value of A: ");
    scanf("%d",&a);
    printf("\n");
    printf(" Enter the value of B: ");
    scanf("%d",&b);
    printf("\n");


    a = a + b;
    b = a - b;
    a = a - b;

    printf(" A is : %d",a);
    printf("\n");
    printf("\n");
    printf(" B is : %d",b);
    printf("\n");


    getch();

}
