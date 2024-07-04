#include <stdio.h>


int main()
{
  printf("Type Conversion Example\n ");
  
  short int si;
  long int li;
  unsigned short int usi;
  unsigned long int uli;
   
   si = -10;
   li = si;
   
   printf("Sign Extension\n");
   
   printf("si =%d li=%ld\n",si,li);
   
   usi = 40000U;
   uli = usi;
   
  
   printf("Zero Extension\n");
   
   printf("usi =%d uli=%ld\n",usi,uli);
   
   uli = 0xabcdef12;
   usi = uli;
   
   printf("Will Truncate-discard More Sigficant bits\n");
   
   printf("usi =%8hx | uli=%8lx\n",usi,uli);
   
    si = usi;
    
   printf("Preseves bit pattern\n");
   
   printf("si =%8hd | usi=%8hu\n",si,usi);
   
   si = -10; 
   
   usi = si;
   
   printf("si =%8hd | uli=%8hu\n",si,usi);
   
  
   printf("--------------------------------\n "); 
   printf("Type Conversion Example-2\n ");
   
   
   int ssi;
   unsigned int usii;
   char ch ='a';
   
   ssi = ch;
   usii = ch;
   
   printf("C = %c\n si =%d\n usi=%u\n",ch,ssi,usii);
   
   ch ='\377';
   ssi = ch;
   usii = ch;
   
   printf(" si =%d\n usi=%u\n",ssi,usii);
   
   
  printf("--------------------------------\n "); 
   printf("Type Conversion Example-3\n ");
  
    int a =100, b = 40;
    float c;
    
    c = a/b;
    
    printf("Answer = %f",c);
  
  /*printf("--------------------------------\n "); 
   printf("Type Conversion Example-4\n ");
  
   float cc = 3.14 % 2;
   
   printf("%2f",cc); //compile Error
   
   
 */
  
  
  
  
  
  
  
  
  
  return 0;
}
