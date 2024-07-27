// Program to maintain a catalog of books and add new books,display them and search specific book
# include <stdio.h>
# include <string.h>
# define max 100
int i;
struct book
{
    int bookID;
    char title[100];
    char author[100];
    int noofpages;
    float price;
    int publicationYear;
};

void addBook(struct book books[], int *n);
void displayBooks(struct book books[], int n);
void searchBook(struct book books[], int n);
void updateBook(struct book books[], int n);

main()
{
    struct book books[max];
    int n=0;
    int choice;

    while (1)
    {
        printf("\n----------------------------------------------\n");
        printf("\n Book Catalog Management System");
        printf("\n 1. Add Book");
        printf("\n 2. Display All Books");
        printf("\n 3. Search Book");
        printf("\n 4. Update Book");
        printf("\n 5. Exit");
        printf("\n Enter your choice : ");
        scanf("%d",&choice);

        switch (choice)
        {
            case 1:
                addBook(books,&n);
                break;
            case 2:
                displayBooks(books,n);
                break;
            case 3:
                searchBook(books,n);
                break;
            case 4:
                updateBook(books,n);
                break;
            case 5:
                printf("\n Exiting.\n");
                return 0;
            default:
                printf("\a\n\t\t\t\t\t\tInvalid choice. Please try again.");
        }
    }

    printf("\n");
}

void addBook(struct book books[], int *n)
{
    if (*n>=max)
    {
        printf("\n Catalog is full. Cannot add more books.\n");
        return;
    }
    printf("\n----------------------------------------------\n");
    printf("\n Enter book details : ");
    printf("\n Book ID: ");
    scanf("%d",&books[*n].bookID);
    printf(" Title: ");
    scanf(" %[^\n]",books[*n].title);
    printf(" Author : ");
    scanf(" %[^\n]",books[*n].author);
    printf(" Number of Pages : ");
    scanf("%d",&books[*n].noofpages);
    printf(" Price : ");
    scanf("%f",&books[*n].price);
    printf(" Publication Year : ");
    scanf("%d",&books[*n].publicationYear);
    (*n)++;
    printf("\n Book added successfully.");
    printf("\n----------------------------------------------\n");
}

void displayBooks(struct book books[], int n)
{
    if (n==0)
    {
        printf("\n No books in the catalog.");
        return;
    }

    printf("\n**********************************************\n");
    printf("\n Book Catalog :");
    for (int i=0;i<n;i++)
    {
        printf("\n Book ID : %d",books[i].bookID);
        printf("\n Title : %s",books[i].title);
        printf("\n Author : %s",books[i].author);
        printf("\n Number of Pages : %d",books[i].noofpages);
        printf("\n Price : %.2f",books[i].price);
        printf("\n Publication Year : %d",books[i].publicationYear);
        printf("\n");
    }
    printf("\n**********************************************\n");
}

void searchBook(struct book books[], int n)
{
    int choice, bookID;
    char searchStr[100];
    printf("\n----------------------------------------------\n");
    printf("\n Search by :");
    printf("\n 1. Book ID");
    printf("\n 2. Author");
    printf("\n 3. Title");
    printf("\n Enter your choice : ");
    scanf("%d",&choice);
    printf("\n----------------------------------------------\n");

    switch (choice)
    {
        case 1:
            printf("\n Enter Book ID : ");
            scanf("%d",&bookID);
            for (int i=0;i<n;i++)
            {
                if (books[i].bookID==bookID)
                {
                    printf("\n----------------------------------------------\n");
                    printf("\n Book found :");
                    printf("\n Book ID : %d",books[i].bookID);
                    printf("\n Title : %s",books[i].title);
                    printf("\nAuthor : %s",books[i].author);
                    printf("\n Number of Pages : %d",books[i].noofpages);
                    printf("\n Price : %.2f",books[i].price);
                    printf("\n Publication Year : %d",books[i].publicationYear);
                    printf("\n----------------------------------------------\n");
                    return;
                }
            }
            printf("\n Book with ID %d not found.",bookID);
            break;
        case 2:
            printf("\n Enter Author : ");
            scanf("%[^\n]",searchStr);
            for (int i=0;i<n;i++)
            {
                if (strcmp(books[i].author, searchStr)==0)
                {
                    printf("\n----------------------------------------------\n");
                    printf("\n Book found :");
                    printf("\n Book ID : %d",books[i].bookID);
                    printf("\n Title : %s",books[i].title);
                    printf("\n Author : %s",books[i].author);
                    printf("\n Number of Pages : %d",books[i].noofpages);
                    printf("\n Price : %.2f",books[i].price);
                    printf("\n Publication Year : %d",books[i].publicationYear);
                    printf("\n----------------------------------------------\n");
                }
            }
            break;
        case 3:
            printf("\n Enter Title : ");
            scanf("%[^\n]",searchStr);
            for (int i=0;i<n;i++)
            {
                if (strcmp(books[i].title, searchStr)==0)
                {
                    printf("\n----------------------------------------------\n");
                    printf("\n Book found :");
                    printf("\n Book ID : %d",books[i].bookID);
                    printf("\n Title : %s",books[i].title);
                    printf("\n Author : %s",books[i].author);
                    printf("\n Number of Pages : %d",books[i].noofpages);
                    printf("\n Price : %.2f",books[i].price);
                    printf("\n Publication Year : %d",books[i].publicationYear);
                    printf("\n----------------------------------------------\n");
                }
            }
            break;
        default:
            printf("\n\a\t\t\t\t\t\tInvalid choice. Please try again.");
    }
}

void updateBook(struct book books[], int n)
{
    int bookID;
    printf("\n Enter Book ID to update : ");
    scanf("%d",&bookID);
    for (int i=0;i<n;i++)
    {
        if (books[i].bookID==bookID)
        {
            printf("\n----------------------------------------------\n");
            printf("\n Book found :");
            printf("\n Current details :");
            printf("\n Book ID : %d",books[i].bookID);
            printf("\n Title : %s",books[i].title);
            printf("\n Author : %s",books[i].author);
            printf("\n Number of Pages : %d",books[i].noofpages);
            printf("\n Price : %.2f",books[i].price);
            printf("\n Publication Year : %d",books[i].publicationYear);

            printf("\n Enter new price : ");
            scanf("%f",&books[i].price);
            printf("\n Price updated successfully.");
            printf("\n----------------------------------------------\n");
            return;
        }
    }
    printf("\n Book with ID %d not found.",bookID);
}
