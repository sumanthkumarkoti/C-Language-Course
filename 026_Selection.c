// Program to read the age of candidate & determine whether he/she is eligible to cast vote

# include <stdio.h>

int main()

{
    int a;

    a=0;

    printf("\n");
    printf(" Enter Your Age : ");
    scanf("%d",&a);
    printf("\n");

    if(a>=18)
    {
        printf("\t\t\t\t Congratulations! 'You Are Eligible' to cast your vote.");
        printf("\n");
    }

    else
    {
        printf("\t\t\t\t Oops! You are 'Too Young' to Vote.");
        printf("\n");
    }

    getch();
}
