// Program to read employee id,name and salary and store into employee.dat file
#include <stdio.h>
#include <stdlib.h>
struct employee
{
    char name[50];
    int id;
    float salary;
};
main()
{
    FILE *fp;
    struct employee *e = NULL;
    int num=0,capacity=1,i=0;
    char choice;

    e=(struct employee *)malloc(capacity * sizeof(struct employee));
    if (e==NULL)
    {
        printf("\a\n\t\t\t\t\t\tUnable to Allocate Memory.\n");
        exit(0);
    }

    fp=fopen("employee.dat","at");
    if (fp==NULL)
    {
        printf("\a\n\t\t\t\t\t\tUnable to open file.\n");
        free(e);
        exit(0);
    }

    do
    {
        if (num>=capacity)
        {
            capacity++;
            e=(struct employee *)realloc(e, capacity * sizeof(struct employee));
            if (e==NULL)
            {
                printf("\a\n\t\t\t\t\t\tUnable to reallocate memory.\n");
                fclose(fp);
                exit(0);
            }
        }

        printf("\nEnter Details For Employee %d :\n",num+1);
        printf("\n ID : ");
        scanf("%d",&e[num].id);
        printf(" Name : ");
        scanf(" %[^\n]",e[num].name);
        printf(" Salary : ");
        scanf("%f",&e[num].salary);

        fwrite(&e[num],sizeof(struct employee),1,fp);
        num++;

        printf("\n Do You Want to Continue (Y/N): ");
        fflush(stdin);
        scanf("%c",&choice);
        choice=tolower(choice);
    }while (choice=='y');

    fclose(fp);
    free(e);

    printf("\n Employee details have been saved to employee.dat");

    printf("\n\n Do You Wish to Display Details : ");
    fflush(stdin);
    scanf("%c",&choice);

    if (choice=='y')
    {
        fp = fopen("employee.dat","rb");
        if (fp==NULL)
        {
            printf("\a\n\t\t\t\t\t\tUnable to open file.\n");
            exit(0);
        }

        struct employee e;

        printf("\n Employee Details : ");
        printf("\n----------------------------------------------------\n");
        printf("%-10s %-30s %-10s", "ID", "Name", "Salary");
        printf("\n---------------------------------------------------\n");

        while (fread(&e,sizeof(struct employee),1,fp)==1)
        {
            printf(" %-10d %-30s %-10.2f\n",e.id,e.name,e.salary);
            i++;
        }

        printf("\n---------------------------------------------------\n");
        printf("\n Total employees : %d",i);

        fclose(fp);
    }

    printf("\n");
}

