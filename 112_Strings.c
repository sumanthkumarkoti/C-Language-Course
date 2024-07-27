// Program to read a string and display smallest and biggest words
#include <stdio.h>
#include <string.h>
#define max 1000
main()
{
    void find_largest_and_smallest_words(char *str, char *largest, char *smallest);

    char str[max],largest[max],smallest[max];

    printf("\n Enter a string : ");
    scanf("%[^\n]",&str);

    find_largest_and_smallest_words(str,largest,smallest);

    printf("\n Largest word : %s",largest);
    printf("\n Smallest word : %s",smallest);

    printf("\n");
}
void find_largest_and_smallest_words(char *str, char *largest, char *smallest)
{
    char *word=strtok(str," ");
    if (word!=NULL)
    {
        strcpy(largest,word);
        strcpy(smallest,word);
    }

    while (word!=NULL)
    {
        if (strlen(word)>strlen(largest))
            strcpy(largest,word);
        if (strlen(word)<strlen(smallest))
            strcpy(smallest,word);
        word = strtok(NULL," ");
    }
}
