// Program to calculate Electricity from the inputted Present Month and Last Month readings

# include <stdio.h>

int main()

{
   int pres,last,uc;
   float amt;
   const float RATE = 7.85;

   printf("\n");
   printf(" Enter Present Month Reading : ");
   scanf("%d",&pres);
   printf("\n");
   printf(" Enter  Last Month Reading : ");
   scanf("%d",&last);

   uc = pres - last;
   amt = uc * RATE;

   if(uc<0)
   {
       printf("\n");
       printf(" \t\t\t\t\t\t\tERROR");
       printf("\n");
       printf("\n");


   }
   else

   printf("\n");
   printf(" Bill Amount : %.2f",amt);
   printf("\n");

   getch();

}
