// Program to read a string and display it length many times
# include <stdio.h>
# include <string.h>
main()
{
    char str[100];
    int i,len=0;

    printf("\n Enter Your String : ");
    scanf("%s",str);

    len=strlen(str);

    for (i=0;i<len;i++)
        printf("\n %d.%s",i+1,str);

    printf("\n");
}
