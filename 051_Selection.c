// Program to check whether if passenger is eligible for consession or not

# include <stdio.h>

main()

{
    int age=0;
    char gen;

    printf("\n Enter Age : ");
    scanf("%d",&age);

    if (age<0)
      {
          printf("\a\n\t\t\t\t\t\t \"INVALID AGE\" ");
          return;
      }
    if (age<5)
        printf("\n You have full consession.(No Ticket Required)");
    else
        {
            printf("\n Enter Gender( [M]ale/[F]emale ): ");
            fflush(stdin);
            scanf("%c",&gen);
            gen=toupper(gen);
            if (gen=='M' || gen=='F')
               {
                   if (gen=='M' && age>60)
                     printf("\n You have been allotted 50%% Consession.");
                   else
                      if (gen=='F' && age>50)
                        printf("\n You have been allotted 50%% Consession.");
                   else
                      printf("\n Sorry,no Consession.");
               }
             else
                printf("\a\n\t\t\t\t\t\t Sorry,Only two Genders are allowed.");

        }

    printf("\n");
    getch();
}
