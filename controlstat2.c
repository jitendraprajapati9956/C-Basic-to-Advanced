#include <stdio.h>

int main()
{
    
   printf("Control Statement Example\n");  
   printf("------------------------------------\n");  
   printf("While Loop Example: \n");
   printf("Average Number \n");
   printf("\n");
     int n,a,c=1,s=0;
   float avg;
   
   printf("How Many Number:");
   scanf("%d",&n);
          
   while(c <= n) 
   {
    printf("Enter the Number:");
    scanf("%d",&a);
    s+= a;
    c++;
   
   }  
   
   avg = (float)s/n;
   printf("Average is %f\n",avg);
   
     printf("\n");
 
    char ans='y';
    int n2=0,a2,s2=0;
   float avg2;
  
    while(ans == 'y' || ans == 'Y')
    {
     printf("Enter the Number:");
    scanf("%d",&a2);
    s2+= a2;
    n2++;
      printf("Do you More:(y/n)");
      scanf("%c",&ans);
      break;
    
    }
    
      avg2 = (float)s2/n2;
   printf("Average is %f\n",avg2);
   
     printf("\n");
     printf("------------------------------------\n");  
     printf("Sum of Digit: \n");
 
     int n3,s3=0,r;
     
    printf("Enter the Number:");
    scanf("%d",&n3);
    
    while(n3 > 0)
    {
      r =n3%10;
      s3=s3+r;
      n3=n3/10;
    }
  
   printf("\n Sum of Digit:%d",s2);
   
     while(n3)
    {
      r =n3%10;
      s3=s3+r;
      n3=n3/10;
    } 
     
      printf("\n Sum of Digit:%d",s3);
    
     
       printf("\n");
     printf("------------------------------------\n");  
     printf("Infinite Loop: \n");
     
     int c4=5;
     
    while(c4)
    {
     printf("\t %d",c4);
     c4--;
     }
 
     
      while(c4)
    {
     printf("\t %d",c4);
     c4= c4-2;
     }
  
      printf("\n");
     printf("------------------------------------\n");  
      
      float x;
      x = 0.0;
      
      while(x != 1.1)
      {
       x = x + 0.1;
       printf("1.1 minus %f equals %.20g\n",x,1.1 - x); 
       break;
      }
     
     float C = 2.0; 
     char chr = 'F';
     while(C > 0.01)
     {
      printf("%f \n",C);
      C /= 10;
     }
      
      int i9=5;
      while(i9-- > 0)
      {
       printf("x");
      }
     
      while(i9-- > 0)
      {
      printf("x");
      printf("x");
      }
      
     
      printf("\n");  
      printf("\n------------------------------------\n");  
      printf("For  Loop Example: \n");
      printf("Sum of Number: \n");
  
      int sum = 0,number,value,i;
      
      printf("Enter Values:");
      scanf("%d",&number);
      
      for(i = 1 ; i <= number ; i++)
      {
        printf("Enter No:");
        scanf("%d",&value);
        sum += value;
        
      }
      printf("Sum of %d value is:%d\n",number,sum);
      
      printf("\n");  
      printf("\n------------------------------------\n");  
      printf("Factorial : \n");
  
      int n1,c1;
      long int f=1;
      
      printf("\n Enter Number:");
      scanf("%d",&n1);
      
     /*  for(c1= 1;c <= n1;++c1)
      {
        f*=c1;
      }
      printf("Factorial is:%ld\n",f);
     */
      printf("\n");  
     
     for(; n1 > 0 ; n1--)
      {
        f*=n1;
      }
      printf("Factorial is:%ld\n",f);
      
      printf("\n");  
      printf("\n------------------------------------\n");  
   
   /*   printf("Maximum number : \n");
     
      int counter = 2 , number2, mex;
      printf("\n Enter Number:");
      scanf("%d",&mex);
   
      while(counter <= 10)
      {
         printf("\n Enter Number:");
         scanf("%d",&mex);
        
         if(number2 > mex)
         {
           mex = number2;
           counter++; 
         }
      }
       printf("Maximum Number is:%d\n",mex);
  */
    
     printf("\n");  
     printf("Sum of series 1+2+3+4+..");
     
     int c5,s5=0,n5;
     
      printf("\n Enter Number:");
      scanf("%d",&n5);
      
      for(c5=1; c5 <= n5; c5++)
      {
       s5+=c5;
       printf("\n Sum is %d",s5);
      }
       printf("\n");  
       printf("Sum of series 1+2+3+4+.. Example 2:");
       
     /* for(s5=0; c5 <= n5; c5++)
      {
       s5+=c5;
       printf("\n Sum is %d",s5);
      }
      
      */
      printf("\n");  
      printf("\n------------------------------------\n");  
      printf("Sum of Digit:\n");  
      
      int n6,s6=0,r6;
      
      printf("\n Enter Number:");
      scanf("%d",&n6);
        
    /*  for(;n6 > 0 ; n/=10) //no vaild for loopSS
      {
       r6=n6%10;
       s6=s6+r6;
      }
       printf("\n Sum of Digit:%d",s6);
   */
    for(;n6 > 0;)
    {
      r6=n6%10;
      s6=s6+r6;
      n6=n6/10;
    }
    printf("\n Sum of Digit:%d",s6);


      printf("\n");  
      printf("\n------------------------------------\n");  
      printf("Print 1 to 5 for loop:\n");  
    
      int c7;
      
      for(c7=1;c7<=5;c7++)
      {
       printf("print:%d",c7);
      }
       printf("\n");  
       
      for(c7=1;c7<=5;++c7)
      {
       printf("print++:%d",c7);
      }
       printf("\n");
         
      for(c7=0;c7++;c7++)// no executed
      {
       printf("print++,++:%d",c7);
      }
       printf("\n");
         
      for(c7=1;c7<=5;)
      {
       printf("print:%d",c7);
      }
        printf("\n");
        
      for(c7=1;c7<=5;)
      {
       printf("print:%d",++c7);
      }
        printf("\n");
        
        
   return 0;
}
