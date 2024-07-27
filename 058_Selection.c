// Program for arithematic operations

# include <stdio.h>

main ()

{
    int a,b,c,opt;

    a=b=c=opt=0;

    printf("\n Enter a number : ");
    scanf("%d",&a);
    printf("\n Enter another number : ");
    scanf("%d",&b);

    printf("\n 1. Addition  +");
    printf("\n 2. Subtraction  -");
    printf("\n 3. Multiplication  *");
    printf("\n 4. Division  /");
    printf("\n 5. Exit  ");

    printf("\n Enter your option : ");
    scanf("%d",&opt);

    switch (opt)
    {
        case 1: c = a + b; break;
        case 2: c = a - b; break;
        case 3: c = a * b; break;
        case 4: c = a / b; break;
        case 5: break;
        default : printf("\n \"INVALID INPUT\" ");
    }

    printf("\n Result is : %d ",c);
    printf("\n");
    getch();
}
