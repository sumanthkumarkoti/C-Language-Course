    // Program to check whether if inputted string is palindrome or not
    # include <stdio.h>
    # include <string.h>
    main ()
    {
        int i,len=0;
        char str[100],palindrome='y',temp;

        printf("\n Enter Sting : ");
        scanf("%s",&str);

        temp=str;
        len=strlen(str);
        len--;

        if (tolower(str[0])==tolower(str[len]))
        {
            len--;
            for (i=1;i<(len/2);i++)
            {
                if (tolower(str[i])==tolower(str[len]))
                  palindrome='y';
                else
                    palindrome='n';
            }
        }
        else
            {
                printf("\n %s is not a Palindrome.\n",str);
                return;
            }
        if (palindrome=='y')
            printf("\n %s is a Palindrome.",str);

        printf("\n");
    }
