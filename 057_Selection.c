// Program to display the bill amount in a restaurant

# include <stdio.h>

main()

{
    int item,qty,bill;

    item=qty=bill=0;

    printf("\n\t\t\t\t\t\t Veg KHANA Restaurant ");
    printf("\n\t\t\t\t\t\t ~~~~~~~~");
    printf("\n\t\t\t\t\t\t Sno Items  Price ");
    printf("\n\t\t\t\t\t\t --- -----  -----  ");
    printf("\n\t\t\t\t\t\t 1.  Iddli  Rs.25 ");
    printf("\n\t\t\t\t\t\t 2.  Dosa   Rs.50 ");
    printf("\n\t\t\t\t\t\t 3.  Vada   Rs.20 ");
    printf("\n\t\t\t\t\t\t 4.  Upma   Rs.25 ");
    printf("\n\t\t\t\t\t\t 5.  Exit ");

    printf("\n Which item to order : ");
    scanf("%d",&item);
    printf("\n How many plates : ");
    scanf("%d",&qty);

    switch(item)
    {
       case 1:bill = qty * 25 ; break ;
       case 2:bill = qty * 50 ; break ;
       case 3:bill = qty * 20 ; break ;
       case 4:bill = qty * 25 ; break ;
       case 5: break;
       default : printf("\a\n\t\t\t\t\t\t INVALID INPUT ");
    }

    printf("\n Bill Amount: Rs. %d",bill);


   printf("\n");
   getch();
}
