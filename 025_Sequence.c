// Program to calculate the speed of a vehicle

# include <stdio.h>

main()

{
    float a,b,c;

    a=b=c=0;

    printf("\n");
    printf(" Enter Distance in meters: ");
    scanf("%f",&a);
    printf("\n");
    printf(" Enter Time in seconds: ");
    scanf("%f",&b);

    c = a / b;

    printf("\n");
    printf(" Speed is : %.2f m/s",c);

    printf("\n");
    getch();
}
