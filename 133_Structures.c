// Program to read student name and any id proof
# include <stdio.h>
# pragma pack(1)
int no,i;
struct student
{
    char name[50];
    union
    {
        long long aadharno;
        long long pp;
        char panno[10];
        char dlno[12];
    }id;
    int idtype;
};
void read (struct student s[] , int no);
void search (struct student s[] , int no);
main ()
{
    printf("\n Enter number of students : ");
    scanf("%d",&no);

    struct student s[no];

    read (s,no);
    search (s,no);

    printf("\n");
}
void read(struct student s[], int no)
{
    for (int i=0;i<no;i++)
    {
        printf("\n Enter Details of Student %d :",i+1);
        printf("\n Enter Student Name : ");
        scanf(" %[^\n]",s[i].name);
        printf("\n\n\t1. Aadhar Number");
        printf("\n\t2. Passport Number");
        printf("\n\t3. PAN Number");
        printf("\n\t4. Driving License Number");
        printf("\n\n Enter ID Proof Type: ");
        scanf("%d",&s[i].idtype);

        switch (s[i].idtype)
        {
            case 1:
                printf("\n Enter Aadhar Number: ");
                scanf("%lld",&s[i].id.aadharno);
                break;
            case 2:
                printf("\n Enter Passport Number: ");
                scanf("%lld",&s[i].id.pp);
                break;
            case 3:
                printf("\n Enter PAN Number: ");
                scanf("%s",s[i].id.panno);
                break;
            case 4:
                printf("\n Enter Driving License Number: ");
                scanf("%s",s[i].id.dlno);
                break;
            default:
                printf("\a\n\t\t\t\t\t\tInvalid Choice");
                i--;
                break;
        }
    }

    return ;
}

void search(struct student s[], int no)
{
    char found='n';

    printf("\n Details of Students using Aadhar Number :\n");
    for (int i=0;i<no;i++)
    {
        if (s[i].idtype==1)
        {
            printf("\n Name : %s",s[i].name);
            printf("\n Aadhar Number : %lld",s[i].id.aadharno);
            found='y';
        }
    }

    if (found=='n')
        printf("\n NIL");

    return ;
}
