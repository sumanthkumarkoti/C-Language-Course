// Program to calculate the cost of a cloth

# include <stdio.h>

main()

{
    float a,b;
    const int RATE=34;

    a=b=0;

    printf("\n");
    printf(" Enter the length of cloth in meters :");
    scanf("%f",&a);
    printf("\n");
    printf(" Rate per meter is Rs.34");

    b = RATE * a;

    printf("\n");
    printf("\n");
    printf(" Cost of Cloth is : Rs. %.2f",b);

    printf("\n");
    getch();
}
