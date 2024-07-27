// Program to check whether if is vowel or consonants

# include <stdio.h>

main()

{
    char ch;

    printf("\n Enter Character : ");
    scanf("%c",&ch);

    ch=tolower(ch);

    if ( (ch>=97 && ch<=122) || (ch>=65 && ch<=90) )
        if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
         printf("\n '%c' is a Vowel.",ch);
        else
         printf("\n '%c' is a Consonant.",ch);
    else
        printf("\a\n\t\t\t\t\t\t \"INVALID INPUT\" ");

    printf("\n");
    getch();
}
