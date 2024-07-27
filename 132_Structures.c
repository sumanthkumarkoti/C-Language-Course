// Program to read and display average salary,employees with highest and lowest salaries
# include <stdio.h>
# define max 100
struct employee
{
    int id;
    float salary;
    char name[50],designation[50];
}e;
int i;
void read (struct employee e[],int *n);
void display (struct employee e[],int n);
main ()
{
    struct employee e[max];
    int n;

    read(e,&n);
    display(e,n);

    printf("\n");
}
void read (struct employee e[],int *n)
{
    printf("\n Enter the number of employees : ");
    scanf("%d",n);

    for (i=0;i<*n;i++)
    {
        printf("\n Enter details for employee %d\n",i+1);
        printf(" ID : ");
        scanf("%d",&e[i].id);
        printf(" Name : ");
        fflush(stdin);
        scanf("%[^\n]",&e[i].name);
        printf(" Designation : ");
        fflush(stdin);
        scanf("%[^\n]",&e[i].designation);
        printf(" Salary : ");
        scanf("%f",&e[i].salary);
    }
}
void display(struct employee e[], int n)
{
    if (n==0)
    {
        printf("\a\n\t\t\t\t\t\tNo employee data available.\n");
        return;
    }

    float total=0;
    struct employee highest=e[0];
    struct employee lowest=e[0];

    for (i=0;i<n;i++)
    {
        total+=e[i].salary;
        if (e[i].salary>highest.salary)
            highest=e[i];
        if (e[i].salary<lowest.salary)
            lowest=e[i];
    }

    float average=total/n;
    printf("\n--------------------------------------------------\n");
    printf("\n Average Salary : %.2f\n",average);
    printf("\n--------------------------------------------------\n");
    printf("\n Employee with the highest salary :");
    printf("\n ID : %d",highest.id);
    printf("\n Name: %s",highest.name);
    printf("\n Designation: %s",highest.designation);
    printf("\n Salary: %.2f",highest.salary);
    printf("\n--------------------------------------------------\n");
    printf("\n Employee with the lowest salary :");
    printf("\n ID : %d",lowest.id);
    printf("\n Name: %s",lowest.name);
    printf("\n Designation: %s",lowest.designation);
    printf("\n Salary : %.2f",lowest.salary);
}
