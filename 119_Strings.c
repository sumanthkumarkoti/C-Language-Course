// Program to read 10 names and display the longest name
# include <stdio.h>
# include <string.h>
main()
{
    int i,len,l,max=0;
    char name[10][100];

    for(i=0;i<10;i++)
    {
        printf("\n Enter Name : ");
        scanf("%s",&name[i]);
    }

    for (i=0;i<10;i++)
    {
        len=strlen(name[i]);
        if (len>max)
        {
            max=len;
            l=i;
        }
    }

    printf("\n Longest Name is %s,length is %d.",name[l],max);

    printf("\n");
}
