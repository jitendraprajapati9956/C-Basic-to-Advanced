#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{ 
 
   printf("Topic:6---> String\n");  
   printf("-----------------------------\n");  
   printf("Example:\n");
   printf("Copying a String:\n");

  char s1[] ="Hello, Jitendra";
  char s2[20];
  strcpy(s2, s1);
  puts (s2);
  printf("\n");
  printf("-----------------------------\n");  
  
  char src[30], dest[30];
 int i = 0;
 printf("\n Enter the source string: ");
 scanf("%[^\n]",src);
 while(src[i] != '\0')
 {
 dest[i] = src[i];
 i++;
 }
 dest[i] = '\0';
 printf("Source string is :%s", src);
 printf("Destination string is : %s", dest);
 
  printf("\n");
  printf("-----------------------------\n");  
 
   printf("Compare a String:\n");
  char x[50],y[]="String in c";
 strcpy(x,"String in c");
 
 if(strcmp(x,"String in c") == 0)
 printf("Equal \n");
 else
 printf("Unequal \n");
 
 if( strcmp(y,x) == 0)
 printf("Equal \n");
 else
 printf("Unequal \n");
 
 
  printf("\n");
  printf("-----------------------------\n");  
  printf("Concate a String:\n");
  
 
  char s[30] ="Hello,";
 char str[] ="world!";
 printf("%s\n", s);
 strcat(s, str);
 printf("%s\n", s);

 printf("\n");
  printf("-----------------------------\n");  
  printf("Capital character to small characater in  a String:\n");
 


 char c;
 while((c=getchar()) != '\n')
 if('A'<=c && c<='Z')
 putchar(c+'a'-'A');
 else
 putchar(c);
 
 
 printf("\n");
  printf("-----------------------------\n");  
  printf("Strncat() Function in  a String:\n");
 
 
 char aString1[80] ="Dharamshih Desai University" ,
      aString2[80] ="Gujarat Vidhyapith";
 
 printf("Before the copy...\n");
 puts(aString1);
 puts(aString2);
 strncat(aString1, aString2, 6);
 printf("Before the copy...\n");
 puts(aString1);
 puts(aString2);

  printf("\n");
  printf("-----------------------------\n");  
  printf("String Copy a String:\n");

 
 str[0]='M';
 str[1]='A';
 str[2]='D';
 str[3]='A';
 str[4]='M';
 str[5]= '\0'; 
 printf("String is %s\n",str);
 printf("Second of string is %s\n",&str[2]);
 strcpy(str,"SIR");
 printf("String is %s\n",str);
 
 
  printf("\n");
  printf("-----------------------------\n");  
  printf("String Palindrome and Not:\n");

int n,iii,j,chk=1;
 char strr[30];
 printf("Enter the string:");
 scanf("%[^\n]",strr);
 n=strlen(strr)-1;
 for(iii=0,j=n;iii<n/2;iii++,j--)
 if(strr[iii]!=strr[j])
  {chk=0;
  break;}
 if(chk==1)
  printf("String is Palindrome");
 else
  printf("String is not Palindrome");
/*  
  int n,i,j;
 char s[30],t[30];
 printf("\n Enter the string:");
 scanf("%[^\n]",s);
 n=strlen(s)-1;
 for(i=0,j=n;j>=0;i++,j--)
 t[i]=s[j];
 t[i]='\0';
 if(strcmp(s,t)==0)
 printf("String is Palindrome");
 else
 printf("String is not Palindrome");
*/

  printf("\n");
  printf("-----------------------------\n");  
  printf("String Example:\n");
  
/*                                   
char ss1[]="Dharamshih Desai";  // type of Assignment Complication Error
 char ss2[]="University";
    ss1=ss2;
    printf("%s",ss1);

 char p[]="string”;   // no output
    char t;
    int i,j;
    for(i=0,j=strlen(p);i<j;i++)
    {
     t=p[i];
     p[i]=p[j-i];
     p[j-i]=t;
    }
    printf("%s",p);


char names[5][20]={"Naran","Hiral","Rajesh","Jitendra","Punit"};  //compile Error
    int i;
    char *t;
    t=names[3];
    names[3]=names[4];
    names[4]=t;
    for(i=0;i<=4;i++)
    printf("%s",names[i]);


*/

  int i1i;
    char a[]="\0";
    if(printf("%s\n",a))
     printf("Ok here \n");
    else
     printf("Forget it\n");

char p[]="%d\n";
    p[1] = 'c';
    printf(p,65);

char str1[] = {'s','o','m','e'};
    char str2[] = {'s','o','m','e','\0'};
    while(strcmp(str1,str2))
    printf("Strings are not equal\n");

    char p2[]="The Matrix Reloaded";
    int i2i=0;
    while(p2[i2i])
    {
     if(!isupper(p2[i2i]++))
     ++i2i;
    }
    printf("%d", i2i);


/*
char istr[128];  // input buffer 
 char tstr[128];  // translated string here 
 int ii;
int slen;        // string length 
 while(1)
 {
  printf("Enter a string");
  gets(istr);
  if((slen=strlen(istr))==0) break;// terminate 
  strcpy(tstr,istr);         // make a copy 
  ii = 0;
  while(ii < slen)       // translate loop 
  {
   if(tstr[ii] >= 'A' && tstr[ii] <= 'Z')    
                                   // upper case 
     tstr[ii] += 'a'-'A';
   else if(tstr[ii] >= 'a' && tstr[ii] <= 'z')  
                           // lower case 
     tstr[ii] += 'A'-'a';
   ii++;                    // to next character 
  }
  printf("Original string = %s\n",istr);
  printf("Transformed string = %s\n",tstr);
 }
 
 
char istr[128]; // input buffer 
 char tstr[128]; // translated string here 
 int i;
            // string length 
 while(1)
 {
  printf(“Enter a string”);
  gets(istr);
 if(strlen(istr)==0) break;  // terminate 
  strcpy(tstr,istr);      // make a copy 
  i = 0;
  while(tstr[i]!=‘\0’)     // translate loop 
  {
   if(tstr[i] >= ‘A’ && tstr[i] <= ‘Z’)     
                          // upper case 
     tstr[i] += ‘a’-‘A’;
   else if(tstr[i] >= ‘a’ && tstr[i] <= ‘z’)  
                             // lower case 
     tstr[i] += ‘A’-‘a’;
   i++;                   // to next character 
  }
  printf(“Original string = %s\n”,istr);
  printf(“Transformed string = %s\n”,tstr);



char s[50],w[20],t[50],d[20];
int i,j;
 printf("Enter the sentence: \n");
 gets(s);
 printf("\n Enter the word to be deleted:");
 scanf("%s",d);
 i=0;
 while(s[i]!='\0')
 {
 j=0;
 while(1)
 {
  if(s[i]==' '||s[i]=='\0')
  break;
  w[j++]=s[i++];
 }
 w[j]='\0';
 if(strcmp(w,d)!=0)
 {
  strcat(t,w);
  strcat(t," ");
 }
 if(s[i]!='\0')
 i++;
 }
 printf("\n After deletion the sentence is as follows...\n");
 puts(t);


  char s[50],w[20],d[20];
 int i,j;
 printf("Enter the full name :");
gets(s);
 i=0;
 while(s[i]!='\0')
 {
  j=0;
  while(1)
  {
   if(s[i]==' '||s[i]=='\0')
   break;
   w[j++]=s[i++];
  }
  w[j]='\0';
  if(s[i]==' ')
  { 
   printf("%c",w[0]);
   printf("%c",'.');
  }
  if(s[i]=='\0')
  printf("%s",w);
  if(s[i]!='\0')
  i++;
 }
*/





/* 
printf("SScanf\n");

 int error;
  char inbuf[256];
  int ii2;
  char c;
 while(1)
 {
  error = ii2 = 0;
  printf("Enter an integer:");
  printf("%d",gets(inbuf));    // get complete input line 
 
  while(inbuf[ii2] == ' ')
  ii2++;          // skip spaces 
  if(inbuf[ii2] == '-' || inbuf[ii2] == '+')
  ii2++;
  while((c = inbuf[ii2++])!='\0')
              // while string end with NUL 
  {
   if(c>'9' || c<'0')       // non-digit ? 
   {
    printf("Non-Numeric Character %c\n",c);
    error = 1;
    break;
   }
  }
  if(!error)       // was everything OK ? 
  {
   int num;             // local variable 
   sscanf(inbuf,"%d",&num);      // conversion 
   printf("Number was %d\n",num);
   break;
  }
 }
 */



 
  return 0;
}
