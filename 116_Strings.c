// Program to read name and copy all vowels in one string and all consonants in another string
# include <stdio.h>
# include <string.h>
main()
{
    int i,vindex=0,cindex=0;
    char name[100],v[100]={0},c[100]={0};

    printf("\n Enter Name : ");
    scanf("%[^\n]",&name);

    for (i=0;name[i]!='\0';i++)
    {
        if ( (name[i]=='A') || (name[i]=='a') || (name[i]=='E') || (name[i]=='e') || (name[i]=='I') || (name[i]=='i') || (name[i]=='O') || (name[i]=='o') || (name[i]=='U') || (name[i]=='u') )
                v[vindex++]=name[i];
        else if ( (name[i]>='A' && name[i]<='Z') || (name[i]>='a' && name[i]<='z') )
                c[cindex++]=name[i];
    }

    printf("\n Vowels : %s",v);
    printf("\n Consonants : %s",c);

    printf("\n");
}
