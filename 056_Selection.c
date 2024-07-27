// Program to differentiate persons based on height

# include <stdio.h>

main()
{
    int a=0;
    float b=0;
    const float FEET=30.48;

    printf("\n Enter Height in cm : ");
    scanf("%d",&a);

    b = a / FEET;


    if (b>5.5)
        printf("\n Your Height is %.2f feet and you are classified as 'Tall'. ",b);
    else
        if (b<4.5)
        printf("\n Your Height is %.2f feet and you are classified as 'Dwarf'. ",b);
    else
        printf("\n Your height is %.2f feet and Your height is 'Average'. ",b);



    printf("\n");
    getch();
}
