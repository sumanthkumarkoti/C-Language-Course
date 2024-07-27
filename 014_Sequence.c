// Program to read Rupees and convert into Paise

# include <stdio.h>

main()

{
    float a,b;

    a=b=0;

    printf("\n");
    printf(" Enter value in Rupees : ");
    scanf("%f",&a);

    b = a * 100;

    printf("\n");
    printf(" Value in Paise is %f",b);
    printf("\n");

    getch();
}
