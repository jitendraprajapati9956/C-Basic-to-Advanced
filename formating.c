#include <stdio.h>
#include <limits.h>  //constant 
#include <complex.h> // complex number
#define BLURB "Formatting Print"
int main()
{
    
   printf("Topic:3---> Input OutPut\n");  
   printf("------------------------------------\n");  
   
   printf("Format specifier in printf()\n");  
   
   printf("Number=%3d\n",10);  //%3d
   printf("Number=%2d\n",10);  //%2d
   printf("Number=%1d\n",10);  //%1d
   printf("Number=%7.2f\n",5.4321);  //%7.2f
   printf("Number=%.2f\n",5.4391);  //%.2f
   printf("Number=%.9f\n",5.4321);  //%.9f
   printf("Number=%f\n",5.4321);  //%f
   printf("Number=%06.1f\n",5.5); 
   printf("%-+6.1f=Number\n",5.5); 
   printf("%-6.3f=Number\n",17.23478); 
 //  printf("VAT=17.5%%\n",17.23478); Error in ubuntu 
   
        
   printf("%s","hello");     
   printf("\n%3s","hello");     
   printf("\n%10s","hello");     
   printf("\n%-10s","hello");     
   printf("\n%10.3s","hello");     
   printf("\n"); 
    printf("\n"); 
   printf("List of Commonly used control code\n"); 
  
   printf("RAM\b");
   printf("RAM\f");
   printf("RAM\n");
   printf("RAM\r");
   printf("RAM\t");
   printf("RAM\'");
  // printf("RAM\0'"); error in ubuntu
   printf("\n"); 
   printf("\n"); 
  
    printf("------------------------------------\n");  
 
   printf("print formatted number \n");  
  
    printf("/%d/\n",2358);
    printf("/%2d/\n",2358);
    printf("/%10d/\n",2358);
    printf("/%-10d/\n",2358);
    printf("\n"); 
    printf("\n"); 
 
    printf("------------------------------------\n");  
  
   printf("print formatted floating point number \n");  
  
    printf("/%f/\n",2358.21);
    printf("/%e/\n",2358.21);
    printf("/%4.f/\n",2358.21);
    printf("/%3.1f/\n",2358.21);
    printf("/%-10.3f/\n",2358.21);
    printf("/%10.3f/\n",2358.21);
    printf("/%10.3e/\n",2358.21);
    printf("\n"); 
    printf("\n"); 
   
    printf("------------------------------------\n");  
  
    printf("print Character String \n");  
   
     printf("/%2s/\n",BLURB);
    printf("/%22s/\n",BLURB);
    printf("/%22.5s/\n",BLURB);
    printf("/%-22.5s/\n",BLURB);
    printf("\n"); 
    printf("\n"); 
 

   
   return 0;
}
