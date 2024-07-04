#include <stdio.h>

int main()
{
    
   printf("Control Statement Example\n");  
   printf("------------------------------------\n");  
   printf("For loop Example\n");  
   
    int i=9;
    for(i--;i--;i--)
    {
     printf("Example 1:%d",i);
    }    
    printf("\n");
    
    for(i=5;++i;i-=3)
    {
      printf("Example 2:%d",i);
    }
    printf("\n");
    
   // for(;printf("C"););  infinite Loop 
   
   for(i=5;--i;)
   {
     printf("Example 4:%d",i);
   }
   printf("\n");
   
   for(i--;i<7;i=7)
   {
    printf("Example 5:%d",i++);
   }
    printf("\n");
    
    for(i=-10; !i;i++)
    {
    printf("Example 6:%d",-i);
    }
    printf("\n");
    
   printf("------------------------------------\n");  
   printf("Do-While loop Example\n");  
 
   int i2=0;
   char c='0';
 
   do
   {
     putchar(c + i2);
      ++i2;
   }
   while(i2 < 5);
  
  /* float s=1.0;  //infinite loop
   int a=4;
   
   while(a<=10)
   {
    s = a*1.2;
    printf("%f",s);
    }
  */
   printf("\n");
  
   printf("-----------------------------\n");  
   printf("Average Number:\n");  
   printf("Two Number Reverse Order:\n");  
   int v1, v2;
   printf("Enter two Number:");
   scanf("%i %i", &v1, &v2);
   printf("Reverse No:%i,%i\n", v2, v1);
   printf("\n");
   
   int  v3;
   printf("Enter three Number: ");
   scanf("%d %d %d", &v1, &v2, &v3);
   printf("%d ,%d ,%d \n", v3, v2, v1);
   printf("\n");
  
   printf("-----------------------------\n");  
   printf("Average Number:\n");  
 
   
   int count,s=0,n, num;
   float avg;
   printf("\n How many numbers?");
   scanf("%d", &n);
   for(count=1;count<=n;++count)
   {
    printf("\n Enter the Number:");
    scanf("%d", &num);
    s+=num;
    }
   avg=(float)s/n;
   printf("Average is %f", avg);
 
  
  
  
  
  
   return 0;
   
   
}
