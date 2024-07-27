// Program o read the Tempareture in Fahrenheit and convert into Centigrade

# include <stdio.h>

main()

{
    float f,c;

    f=c=0;

    printf("\n");
    printf(" Enter the Temperature in Fahrenheit :");
    scanf("%f",&f);

    c = (f - 32) * 5/9;

    printf("\n");
    printf(" Temperature in Centigrade : %.2f",c);
    printf("\n");

    getch();

}
