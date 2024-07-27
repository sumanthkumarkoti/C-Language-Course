//Program to read 3 characters and display them in reverse order

# include <stdio.h>

main()
{
    char a,b,c,d;

    a=b=c=d=0;

    printf("\n");
    printf("  Enter 3 characters of your choice: ");
    scanf("%c %c %c",&a,&b,&c);
    printf("\n");

    d=a;
    a=c;
    c=d;

    printf("  Reverse Order is %c %c %c",a,b,c);
    printf("\n");


    getch();

}
