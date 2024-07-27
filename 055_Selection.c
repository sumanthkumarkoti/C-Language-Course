// Program to check given input is divisible by 3 and 5

# include <stdio.h>

main()

{
    int a=0;

    printf("\n Enter Number : ");
    scanf("%d",&a);

    a%2==0 ? printf("\n %d is Even.",a) : printf("\n %d is Odd.",a);

    printf("\n");
    getch();
}
