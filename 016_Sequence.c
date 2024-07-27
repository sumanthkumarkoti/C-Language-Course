// Program to read radius of a circle and calclate area

# include <stdio.h>

main()

{
    const float PI=3.14;
    float a,b;

    a=b=0;

    printf("\n");
    printf(" Enter the value of Radius of the Circle : ");
    scanf("%f",&a);
    printf("\n");

    b = PI * a * a;

    printf(" Area of Circle is %.2f",b);

    getch();

}
