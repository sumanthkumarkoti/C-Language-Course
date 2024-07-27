// Program to check whether if the person is eligible for bonus or not (without using logic operators)

# include <stdio.h>

main()

{
    int age=0;
    char ms,gen;

    printf("\n Enter Martial Status ( [M]arried/[U]nmarried ) : ");
    scanf("%c",&ms);

    if (ms=='M' || ms=='m')
      {
          printf("\n Enter Gender ( [M]ale/[F]emale ) : ");
          fflush(stdin);
          scanf("%c",&gen);

             if ( (gen=='M') || (gen=='m') || (gen=='F') || (gen=='f') )
              {
                  printf("\n Enter Age : ");
                  scanf("%d",&age);
                      if ( ( (gen=='M') || (gen=='m') && age>30 ) || ( (gen=='F') || (gen=='f') && age>25 ) )
                        printf("\n\t\t\t\t\t\t \"ELIGIBLE\" ");
                      else
                        printf("\n\t\t\t\t\t\t \"NOT ELIGIBLE\" ");
               }
              else
                printf("\a\n\t\t\t\t\t\t \"INVALID GENDER\" ");
       }
    else
        if (ms=='U' || ms=='u')
          printf("\n\t\t\t\t\t\t \"NOT ELIGIBLE\" ");
    else
        printf("\a\n\t\t\t\t\t\t \"INVLAID INPUT\" ");


    printf("\n");
    getch();
}
