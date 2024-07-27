// Program to check whether if the person is eligible for bonus or not (without using logic operators)

# include <stdio.h>

main()

{
    int age=0;
    char ms,gen;

    printf("\n Enter Martial Status ( [M]arried/[U]nmarried ) : ");
    scanf("%c",&ms);
    ms=toupper(ms);

    if (ms=='M')
        {
          printf("\n Enter Gender ( [M]ale/[F]emale ) : ");
          fflush(stdin);
          scanf("%c",&gen);
          gen=toupper(gen);

             if (gen=='M')
                {
                  printf("\n Enter Age : ");
                  scanf("%d",&age);
                      if (age>30 )
                        printf("\n\t\t\t\t\t\t \"ELIGIBLE\" ");
                      else
                        printf("\n\t\t\t\t\t\t \"NOT ELIGIBLE\" ");
                }
                else if(gen=='F')
                {
                    printf("\n Enter Age : ");
                    scanf("%d",&age);
                        if (age>25 )
                          printf("\n\t\t\t\t\t\t \"ELIGIBLE\" ");
                        else
                          printf("\n\t\t\t\t\t\t \"NOT ELIGIBLE\" ");
                }
              else
                printf("\a\n\t\t\t\t\t\t \"INVALID GENDER\" ");
       }
    else
        if (ms=='U')
          printf("\n\t\t\t\t\t\t \"NOT ELIGIBLE\" ");
    else
        printf("\a\n\t\t\t\t\t\t \"INVLAID INPUT\" ");


    printf("\n");
    getch();
}
