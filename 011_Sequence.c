// Program to display how many bytes of memory each variable occupies

# include <stdio.h>

main()
{
    int rn=0;
    char gen,name[100];
    float height;

    printf("\n");
    printf(" Enter Roll no. : ");
    scanf("%d",&rn);
    fflush(stdin);

    printf("\n");
    printf(" Enter Gender(M/F). : ");
    scanf("%c",&gen);
    fflush(stdin);

    printf("\n");
    printf(" Enter Name : ");
    scanf("%s",&name);
    fflush(stdin);

    printf("\n");
    printf(" Enter Height : ");
    scanf("%f",&height);

    printf("\n");
    printf(" Roll no. occupies %d bytes of space",sizeof(rn));
    printf("\n");
    printf(" Gender occupies %d bytes of space",sizeof(gen));
    printf("\n");
    printf(" Name occupies %d bytes of space",sizeof(name));
    printf("\n");
    printf(" Height occupies %d bytes of space",sizeof(height));

    printf("\n");
    getch();
}
