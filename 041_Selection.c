// Program to read a character and check whether if character is vowel or consonants

# include <stdio.h>

main()
{
  char ch;

  printf("\n Enter character : ");
  scanf("%c",&ch);
  printf("\n");

 if( (ch>=65 && ch<=90) || ( ch>=97 && ch<=122) )
 {
  if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
     printf(" '%c' is a Vowel.",ch);
  else
      if (ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
  	    printf(" '%c' is a Vowel.",ch);
  	else
    	 printf(" '%c' is a Consonant.",ch);
 }
 else
     printf("\a\n\t\t\t\t\t\t \"INVALID INPUT\" ");

  printf("\n");
  getch();
}
