#include <stdio.h>
#include <limits.h>  //constant 
#include <complex.h> // complex number

int main()
{
    
   printf("Topic:3---> Input OutPut\n");  
   printf("------------------------------------\n");  
   
   printf("\nDisplay Character using putchar():\n");
  
   int ch;
   ch ='A';
   putchar(ch); 
   printf("\nch:%d\n",ch);
  
   printf("------------------------------------\n");  
 
   printf("\nDisplay getchar():\n");
   ch =getchar();
   printf("\nInput Char:%d\n",ch);
   putchar(ch);
   printf("\nGetChar()--Putchar()=%d\n",ch);
    printf("------------------------------------\n");  
 
    printf("\nDisplay Character using Putchar() next character from ASCII:\n");
    ch = ch + 1;
    putchar(ch);
    printf("\nch:%d\n",ch);
    printf("------------------------------------\n");  
   
    printf("\nDisplay Character using getchar()&Putchar() next character from ASCII:\n");
    ch=getchar();
    printf("\nInput Char:%d\n",ch);
    ch++;
    putchar(ch=getchar());
    printf("\nputchar() In getchar():%d\n",ch);
    putchar(ch=getchar()+2);
    printf("\nputchar() In getchar()+2:%d\n",ch);
      printf("------------------------------------\n");  
 
    
    printf("\nDouble Output next two character from ASCII:\n");
    ch=getchar();
    printf("\nInput Char:%d\n",ch);
    putchar(++ch);
    printf("\n++ch:%d\n",ch);
    putchar(ch++);
    printf("\nch++:%d\n",ch);
    putchar(ch);
    printf("\nch:%d\n",ch);
    putchar(ch--);
    printf("\nch--:%d\n",ch);
   
     printf("------------------------------------\n");  
 
    /*printf("\nCompare Two Number in getchar&putchar:\n");
    int a =2,b=5;
    int t,f,x;
    t=getchar();
    
    fflush(stdin);
    f=getchar();
    x = ( ( a > b ) ? t : f );
    putchar(x);
    
      printf("------------------------------------\n");  
 
    int chh,n;
    chh=getchar();
        
    n = (chh>='a')&&(chh<='z')? putchar(chh+'A'-'a'):putchar(chh);   
    
    putchar(n);
     printf("\nLowercase to capital letter:%d\n",n);

    
    printf("------------------------------------\n");  
 
    printf("\n Continue(Y/N)?");
    */
    
    
       
 
   return 0;
}
