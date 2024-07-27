//Program to read total Flying time in minutes and dislplay into hoursand minutes

# include <stdio.h>

int main()
{
    int a,b,c;

    a=b=c=0;

    printf("\n");
    printf(" Enter Flying time from Hyderabad to Singapore in minutes: ");
    scanf("%d",&a);


    b = a / 60;
    c = a % 60;

    printf("\n");
    printf(" Flying time from Hyderbad to Singapore is %d hrs and %d minutes",b,c);
    printf("\n");

    getch();
}
