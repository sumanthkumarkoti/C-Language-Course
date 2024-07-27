// Program to calculate area of circle using functions
# include <stdio.h>
# define PI 3.14
main ()
{
    float area(float );
    float a,r=0;

    printf("\n Enter the Value of 'R' : ");
    scanf("%f",&r);

    a=area(r);

    printf("\n Area is %.2f",a);

    printf("\n");
}

float area(float r)
{
    float a;
    a=r*PI;
    return a;
}
