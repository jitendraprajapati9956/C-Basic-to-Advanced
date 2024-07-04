#include <stdio.h>

int main()
{
    
   printf("Control Statement Example\n");  
   printf("------------------------------------\n");  
   printf("Largest Number in three No\n");  
   
   int a,b,c,max;
   printf("Enter 3 Number:");
   scanf("%d %d %d",&a,&b,&c);
   max=a;
   
   if(b>max)
   {
    max=b;
   }
   if(c>max)
   {
    max=c;
   } 
   
   printf("Largest No:%d\n",max);
   printf("------------------------------------\n");  
   printf("Odd or Even number\n"); 
   
   int n,r;
   printf("Enter Number:");
   scanf("%d",&n); 
   
    r=n%2;
    
    if(r==0)
    {
    printf("even\n");
    }
    else{
    printf("odd\n");
    }
   
   
   printf("------------------------------------\n");  
   printf("Equal or not Equal\n"); 
 
   int d=2,e=3;
   printf("D:%d\n",d); 
   printf("E:%d\n",e); 
 
   if(d==e) // second option (d = e)
   {
      printf("Equal\n");
   }else{
    printf("Not Equal\n");
   }
   
    printf("------------------------------------\n");  
     printf("Calculate Earning by Worker hourly wise\n");
     printf("Option 1:simple\n");
     int weeklyhours,earning,earning2,offhours,regpay;
     float hourlyrate;
     
     printf("Enter WeeklyHour:");
     scanf("%d",&weeklyhours);
     printf("Enter hourlyrate:");
     scanf("%f",&hourlyrate);
     
     if(weeklyhours <=40)
     {
       earning = hourlyrate * weeklyhours;
     }
     else{
       earning = 40 * hourlyrate +(weeklyhours - 40) * hourlyrate * 1.5;
     }
      
     printf("earning in hourly:%d",earning); 
 
     printf("\n"); 
     printf("\n");
     printf("Option 2:simple & compound\n");
     
     printf("Enter OffHour:");
     scanf("%d",&offhours);
     printf("Enter Regpay:");
     scanf("%d",&regpay);
   
     
      if(weeklyhours <=40)
     {
       earning2 = hourlyrate * weeklyhours;
     }
     
     else
     {
        offhours =weeklyhours - 40 ;
        regpay = 40 *hourlyrate;
        earning2 = regpay +offhours * hourlyrate * 1.5;
     }
      printf("earning in hourly:%d\n",earning2); 
      
      
      printf("------------------------------------\n");  
       printf("Leap year or not\n");
       int year,rem,rem2,rem3;
       printf("Enter year:");
       scanf("%d",&year);
       
        rem = year % 4;
        rem2 = year % 100;
        rem3 = year % 400;
   
          
         if((rem == 0 && rem2 != 0) || rem3 == 0)
         {
          printf("Leap year\n");
         }
         else
         {
           printf("Not Leap year\n");
        
         } 
         
       printf("------------------------------------\n");  
       printf("Zero,Positive,Negative\n");
      
       int x;
       printf("Enter the Number:");
       scanf("%d",&x);
       
       if(x > 0)
       {
        printf("x is positive \n");
       }
       else if(x == 0){
        printf("x is zero \n");
       
       }    
       else{
        printf("x is negative \n");
       
       } 
      
       printf("------------------------------------\n");  
       printf("Examples\n");

       printf("1. if(-1):\n");          
       printf("HI!");
       if(-1)
       {
         printf("BYE");
       }     
       printf("\n");
       
       
      printf("2. if(!1):\n");          
      printf("HI!");
       if(!1)
       {
         printf("BYE");
       }     
       printf("\n");
       
     
      printf("3. if Example:\n");          
       float m=199.9;
       if(m < 100)
       {
         printf("One");
       }
       if(m < 200)
       {
         printf("Two");
       }
       if(m < 300)
       {
         printf("Three");
       }
       printf("\n");
       float x1 = 123.4;
        if( x1 < 100)
        {
         printf("one");
        } 
        if( x1 < 200)
        {
         printf("Two");
        }
        if( x1 < 300)
        {
         printf("Three");
        }  
      
      
       printf("4. if else Example:\n");          
       int p = -1;
       unsigned int q =1; 
       if(p<q)
       {
         printf("Less");
       }
       else
       {
         printf("Grater");
       }
       
        
       double hundred =100.0;
       double number= 95.0;
       
       if ( number == number / hundred * hundred)
       {
        printf("Equal");
       }
       else
       {
         printf(" Not Equal");
      
       }
       
       printf("\n");
      
      if ( 95.0 == 95.0 / 100.0 * 100.0)
       {
        printf("Equal");
       }
       else
       {
         printf(" Not Equal");
      
       }
       
         printf("\n------------------------------------\n");  
         printf("Condition Operator \n"); 
         printf("\n");
         printf("Equal or Not Equal \n"); 
 
         int  a2,b2,c2;
         printf("Enter The Two Number:"); 
         scanf("%d %d",&a2,&b2);
   
         c2 = a2 > b2 ? a2:  b2>a2 ? b2 : -1;
     
         if(c2 ==-1) 
         { 
          printf("Both Number is Equal"); 
         }
        else
         {
          printf("Large Number is:%d",c2);
         }
         
         printf("\n");
         printf("\n------------------------------------\n");  
         printf("Largest Three Numbers: \n");
         int  a3,b3,c3;
         printf("Enter Three Numbers:"); 
         scanf("%d %d %d",&a3,&b3,&c3);
         
         if(a3>b3)
         { 
          if(a3>c3)
           {
            printf("Largest Number is:%d",a3);
           }
           else
           {
            printf("Largest Number is:%d",c3);
           }
          }
         else
         {
          if(b3>c3)
           {
            printf("Largest Number is:%d",b3);
           }
           else
           {
            printf("Largest Number is:%d",c3);
           }
         }   
       
         printf("\n");
         printf("\n------------------------------------\n");  
         
         printf("(conditional Operator)Largest Three Numbers: \n");
         int max2;
         max2 = a3 > b3 ? (a3 > c3 ? a3 : c3) : (b3 > c3 ? b3 : c3);
       
         printf("Largest Number is:%d",max2);
         
       printf("\n------------------------------------\n");  
       printf("Switch Statement: \n");
       
   /*     printf("Vowel or Not: \n");
        
         char ch;
         printf("Enter a Character:");
         scanf("%c \n",&ch);
          
         switch(ch)
         {
          case 'a' : 
          case 'A' :
          case 'e' :
          case 'E' :
          case 'i' :
          case 'I' :
          case 'o' :
          case 'O' :
          case 'u' :
          case 'U' :
          printf("%c",ch);
          printf("is always a vowel");
          break;
          
          case 'y' :
          case 'Y' :
          printf("%c is sometimes a vowel" ,ch);
          break;
          
          default:
          printf("%c is Not a vowel" ,ch);
          break;
          
         }
        */
         printf("\n");
         printf("Switch Statement Example \n");
         
         char ch2 = 'Y';
         printf("Character:%c\n",ch2);
         switch(ch2)
         {
          case 'Y':
           printf("Yes/No");
          case 'N':
           printf("No/Yes");
           break;
           
           default:
            printf("Other");
         }
          printf("\n------------------------------------\n");  
          printf("\n");
         
          int choice=3;
          printf("Choice No:%d\n",choice);
          switch (choice)
          {
            default:
              printf("Default");
              break;
              
            case 1: 
              printf("Choice 1");
              break;
              
            case 2:
              printf("Choice 2");
              break;
           }  
     
          printf("\n");
          printf("\n------------------------------------\n"); 
          printf("While Loop Example: \n");
       
          int age;
          printf("Enter Age:");
          scanf("%d",&age);
          
          while ( age != -1)
          {
          
            printf("\n Age:- %d ",age);
            break;
         
          }
         printf("\n");
       
          int x2=1;
          int count =0;
          printf("Enter Number:");
          while ( x2 >= 0)
          {
             scanf("%d",&x2);
             count += 1;
            printf("\n Number:- %d ",count);
            break;
         
          }
          
     
   return 0;
}
