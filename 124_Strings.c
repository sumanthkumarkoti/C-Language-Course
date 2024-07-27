// Program to read two strings and check whether if they are anagrams
# include <stdio.h>
# include <string.h>
main()
{
    int i,j,len1,len2;
    char s1[100],s2[100],anagram;

    printf("\n Enter String 1 : ");
    scanf("%s",&s1);
    printf("\n Enter String 2 : ");
    scanf("%s",&s2);

    len1=strlen(s1);
    len2=strlen(s2);

    if (len1==len2)
    {
        anagram='y';
        for (i=0;i<len1;i++)
        {
            for (j=0;j<len2;j++)
            {
                if (tolower(s1[i])==tolower(s2[j]))
                {
                    anagram='y';
                    break ;
                }
                else
                {
                    anagram='n';
                }
            }
            if (anagram=='n')
                break ;
        }
    }
    else
        printf("\n %s and %s are not anagrams.",s1,s2);

    if (anagram=='y')
        printf("\n %s and %s are anagrams.",s1,s2);
    else
        printf("\n %s and %s are not anagrams.",s1,s2);
    printf("\n");
}
