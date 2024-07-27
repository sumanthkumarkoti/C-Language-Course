// Program to check given input is divisible by 3 and 5

# include <stdio.h>

main()

{
    int a=0;

    printf("\n Enter Number : ");
    scanf("%d",&a);

    if (a%3==0 && a%5==0)
        printf("\n Given Number is divisible by both 3 and 5.");
    else
        printf("\n Given Number is not divisible by both 3 and 5.");

    printf("\n");
    getch();
}
