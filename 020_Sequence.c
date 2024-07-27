//Program to read the total travelling distance in Kilo meters and display into meters

# include <stdio.h>

int main()

{
    float a,b;

    a=0;

    printf("\n");
    printf(" Enter Travelling Distance in Kilo Meters:");
    scanf("%f",&a);

    b = a * 1000;

    printf("\n");
    printf(" Travelling Distance in Meters :%.2f",b);
    printf("\n");

    getch();
}

