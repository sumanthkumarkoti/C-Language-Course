// Program to read date of birth and display whether if born in leap year

# include <stdio.h>

main ()

{
    int a,b;

    a=b=0;

    printf("\n");
    printf(" Enter Your Year of Birth : ");
    scanf("%d",&a);

    b = a%4;

    if (b==0)
    {
        printf("\n");
        printf(" You were born in a Leap year.");
        printf("\n");
        printf(" %d is a Leap year.",a);
    }

    else
    {
        printf("\n");
        printf(" You were not born in a Leap year.");
        printf("\n");
        printf(" %d is a not Leap year.",a);
    }

    printf("\n");
    getch();
}
