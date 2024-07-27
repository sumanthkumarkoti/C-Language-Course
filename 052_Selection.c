// Program to generate final bill for customer based on discount

# include <stdio.h>

main()
{
	int cost,dis,ext,days,billamt;
	char mode;

	cost=dis=ext=days=billamt=0;

	printf("\n Enter Cost of the TV:");
	scanf("%d",&cost);
	printf("\n Are you Paying cash(y/n):");
	fflush(stdin);
    scanf("%c",&mode);

	mode=toupper(mode);

	if(mode=='Y')
	 {
	 	dis=cost*25/100;
	 	billamt=cost-dis;
 	  }
 	else
	     if(mode=='N')
		    {
		    	printf("\n In How many Days will you Pay? : ");
		    	scanf("%d",&days);

		    	if(days<7)
    			  {
  			        dis=cost*15/100;
				    billamt=cost-dis;
  			      }
  			    else
  			      {
      			  	ext=cost*10/100;
      			  	billamt=cost+ext;
      			  }
		    }
		  else
		  {
  		      printf("\a\n\t\t\t\t\t\t \"INVALID MODE\" ");
  		      return;
		  }

 if(days<7)
	printf("\n Discount is: Rs. %d",dis);
 else
	printf("\n Extra Amount is: Rs. %d",ext);
	printf("\n Final Bill Amount : Rs. %d",billamt);

   printf("\n\t\t\t\t\t\t \"THANK YOU\" ");
   printf("\n");
   getch();
}
