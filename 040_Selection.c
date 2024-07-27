// Program to read character and check whether if it is capital/smaller letter or special character

# include <stdio.h>

main()

{
    char ch;

    printf("\n");
    printf(" Enter Character : ");
    scanf("%c",&ch);

    if (ch>=65 && ch<=90)
        printf("\n %c is  Capital Letter.",ch);
     else
        if (ch>=97 && ch<=122)
         printf("\n %c is Lower-case Letter.",ch);
         else
            if (ch>=48 && ch<=57)
             printf("\n %c is a Digit.",ch);
             else
                printf("\n %c is a Special Character.",ch);

    printf("\n");
    getch();
}
