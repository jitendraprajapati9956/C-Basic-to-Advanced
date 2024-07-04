#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{ 
 
   printf("Topic:6---> String\n");  
   printf("-----------------------------\n");  
   printf("Printing String\n");  
   
   char st[]="Hello, JITENDRA";
   printf(">>%s<<\n",st);
   printf(">>%20s<<\n",st);
   printf(">>%-20s<<\n",st);
   printf(">>%.4s<<\n",st);
   printf(">>%-20.4s<<\n",st);
   printf(">>%20.4s<<\n",st);
   printf("\n");  
   printf("-----------------------------\n");  
   printf("sprintf() function similar printf()\n");  
 
    //char s[] = "Hello Jitendra" 
    //puts(s); 
 
   char buf[128];
   double x = 1.23456;
   int i = 0;
   sprintf(buf,"x = %7.5lf",x);
   while(i<10)
   {
    puts(buf+i++);
   }
 
   printf("\n");  
   printf("-----------------------------\n");  
   printf("string Input\n");  
  
   char str[50];
   printf("Enter a string:");
   scanf("%s",str);
   printf("The string was :%s\n",str);
   
   printf("\n");  
   printf("-----------------------------\n");  
   printf("Convert Decimal number to HexaDecimal:\n");
   int n,r, array[50];
   char hexdigit[]="0123456789ABCDEF";
 
   printf("Enter the decimal number:");
   scanf("%d", &n);
   i=0;
 
   while(n>0)
   {
     r=n%16;
     array[i]=r;
     i++;
     n=n/16;
   }
   printf("Hexadecimal is:");
   for(--i;i>=0;--i)
   {
    printf("%c", hexdigit[array[i]]);
   }

   printf("\n");  
   printf("-----------------------------\n");  
  
 
 /*  char hexdigit2[50];
   printf("Enter the decimal number:");
   scanf("%d", &n);
   i=0;
   
   while(n>0)
   {
     r=n%16;
 
    if(r<10)
    {
     hexdigit2[i]=r+48;
    }
    else
    {
     hexdigit2[i]=r%10+65;
     i++;
     n=n/16;
    }
   hexdigit2[i]='\0';
   printf("Hexadecimal is:");
   for(i=strlen(hexdigit)-1;i>=0;--i)
   {
    printf("%c", hexdigit2[i]);
   }
  }
   
   printf("\n");  
   printf("-----------------------------\n");  
 */ 
   char str2[80];
   printf("Enter a string in lower case:");
   scanf("%[^\n]",str2);
   printf("The string was : %s\n", str2);
   printf("\n");  
   printf("-----------------------------\n");  
   
   
   char string [80];
   printf("Enter a string, terminate with a tilde: ");
   scanf("%[^~]", string);
   printf("%s", string);
   printf("\n");  
   printf("-----------------------------\n");  
   
   char xx;
   printf("Enter a string, Stop with a tilde(~):\n");
   scanf("%[^~]", string);
   scanf("%c", &xx); 
   printf("%s", string);
   putchar(xx);
   printf("\n");  
   printf("-----------------------------\n");  
     
   
   /*
     printf("String Input Using Scanf() With Specifier c:");
 char strch[10];         //string Is Null And Infinite Loop
   while(1)
   {
    printf("Enter a string of 9 characters:");
    scanf("%10c",strch);
    strch[9]='\0';     
    printf("String was :%s\n",strch);
   if(strch[0] == 'Z') break;             
     
   }
   printf("\n");  
   printf("-----------------------------\n");  
   
   char strrr[150];      //C does Not array Bounds gets() or Puts() can be nested Ex-printf("%s",gets(s));
   printf("Enter a string");
   gets(strrr);
   printf("The string was :%s\n",strrr);
  
   char s[80], ch;
   int ii;
   printf("Enter the text:");
   for(ii=0; ii<80 ;ii++)
   {
     ch=getchar();
    
    if(ch=='\n')
    break;
    s[ii]=ch;
   }
  
   s[ii]='\0';
   printf("Entered text is:");
   puts(s);
*/
  printf("\n");
  
  printf("String Input Using fscanf() anf fprintf():");
  int first,second;
  
  fprintf(stdout,"Enter two ints in this line:\n");
  fscanf(stdin,"%d %d",&first,&second);
  fprintf(stdout,"Their sum is: %d.\n",first + second);
  
   printf("\n");  
   printf("-----------------------------\n");   
   
   int in;
   printf("Input an integer:");
  
   if(fscanf(stdin,"%d", &in))
   
     printf("The integer read was: %i\n", in);
   
   else
   {
     fprintf(stderr,"Error reading an integer from stdin.\n");
     exit(1);
    }

   printf("\n");  
   printf("-----------------------------\n");   
   
 /*  printf("Character Manipulation in the Sting\n:");

   char a[80],t[80];
   int in2,j;
 
   printf("Enter the text\n");
   gets(a);
   
   for(in2=0,j=0; a[in2]!='\0';++in2)
   {
     if(a[in2]!= ' ')
     {
       t[j++]=a[in2];
       t[j]='\0';
     }
     printf("the text without blank spaces\n");
    puts(t);

   }
 
 */
    printf("\n");  
    printf("-----------------------------\n");  
    printf("Count the Number Words in string:");
 
    char sttr[30];
    int icase=0,count=0;
 
   printf("Enter the string:");
   scanf("%[^\n]",sttr);
 
  while(sttr[icase]!='\0')
  {
   
    while(isspace(sttr[icase]))
     {
       icase++;
     }
    
    if(sttr[icase]!='\0')
    {
      ++count;

      while(!isspace(sttr[icase]) && sttr[icase] != '\0')
      {
          icase++;
      }
    }
 }
 printf("NO. of words in the string is %d:", count);

   printf("\n");  
    printf("-----------------------------\n");  
  
 /* printf("String Uppercase() and Lowercase():");
  printf("Enter the string:");
   gets(sttr);
   
   while(sttr[icase]!= '\0')
   {
      sttr[icase]=toupper(sttr[icase]);
      icase++;
   }
   sttr[icase] = '\0';
   puts(sttr);
   
   char s[100];
   int    len;     
   while(1)
   {
  
  printf("Enter a string");
  gets(s);
  len = strlen(s);
    if(len == 0) break; 
  while(len > 0)
   {
   len--;
   printf("%c",s[len]);
  }
  printf("\n");
 }
 */
  
 printf("Count the Number Character in string:");
 int no, c;
 char line[100];
 no = 0;
 while((c=getchar()) != '\n')
 {
  if(no < 100)
  line[no] = c;
  no++;
 }
 line[no]='\0';
 printf("Length = %d\n", no); 
 printf("\n");  
    printf("-----------------------------\n");  
 
 
  
 
  return 0;
}
