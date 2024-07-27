// Program to display who is older than the other of two friends

# include <stdio.h>;

main()

{
    int a,b;
    char c[50];
    char d[50];

    a=b=0;

    printf("\n");
    printf(" Enter Name of Person 1 : ");
    scanf("%s",&c);
    printf("\n");
    printf(" Enter Age of Person 1 : ");
    scanf("%d",&a);
    printf("\n");
    printf(" Enter Name of Person 2 : ");
    scanf("%s",&d);
    printf("\n");
    printf(" Enter Age of Person 2 : ");
    scanf("%d",&b);

     if (a>b)
    {
        printf("\n");
        printf(" %s is older than %s",c,d);

    }

     else if (a<b)
    {
        printf("\n");
        printf(" %s is younger than %s",c,d);
    }

    else
    {
      printf("\n");
      printf(" %s and %s are Same Age",c,d);
    }

    printf("\n");
    getch();
}
