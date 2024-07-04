#include <stdio.h>

int main()
{
    
   printf("Topic:4---> Control Statement\n");  
   printf("------------------------------------\n");  
   
   int a=3;
   printf("\na=%d\n",a);
   printf("a>3=%d\n",a>3);
   printf("a>3=%d\n",a>2);
   
   printf("\n");
   int a1=1,b=2;
   printf("a=%d\n",a1);
   printf("b=%d\n",b);
   printf("(a1/b + a1/b) == 1 %d\n",(a1/b + a1/b) == 1);
   
   _Bool isprime = 5;
   printf("prime no:%d\n",isprime);
   
    printf("------------------------------------\n");  
   printf("Odd or Even number if-else\n"); 
   
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
   printf("Student Grade if-else ladder\n"); 
   
   int marks;
   char grade;
   
   printf("Enter Marks:");
   scanf("%d",&marks); 
      
    if(marks>=90)
    {
      grade='A';
    }
    else if(marks>=80)
    {
      grade='B';
    }
    else if(marks>=70)
    {
      grade='C';
    }
    else if(marks>=60)
    {
      grade='D';
    }
    else{
      grade='F';
    }
   
   printf("Grade Is:%c\n",grade);
   
   
   printf("------------------------------------\n");  
   printf("Nested if Example\n"); 
  
   int j,k,l;
   printf("\nEnter Three Numbers:\n");
   scanf("%d %d %d",&j, &k, &l);
      
   if(j>k)
   {
     if(j>l)
     {
       printf("Compare to l to j:%d",j);
     }
     else
     {
       printf("Compare to J to l:%d",l);  
     }
   }
   else
   {
     if(k>l)
     {
       printf("Compare to K to j:%d",k);
     }
     else
     {
       printf("Compare to K to l:%d",l);  
     }
   }
   
   printf("\n------------------------------------\n");  
   printf("Dangling Else \n"); 
   
   int x=2;
   int y=2;
   
   if( x == 1)
   {
    if (y == 2)
    {
      printf("A was 1 and B was 2");
    }
   }
   else{
    printf("A wasn't 1 ");
   }
   
   printf("\n------------------------------------\n");  
   printf("Condition Operator \n"); 
 
   int  a2,b2,c2;
   printf("Enter The Two Number:"); 
   scanf("%d %d",&a2,&b2);
   
   c2 = a2 > b2 ? a2: b2;
   
   printf("Largest Number is %d:",c2); 

     printf("\n------------------------------------\n");  
     printf("Switch Statement: \n");
     
     
     int n1;
     printf("Enter the Number:\n");
     scanf("%d",&n1);
     switch(n1%2)
     {
      case 0:
        printf("Even");
        break;
      
      case 1:
        printf("Odd");
        break;
      
      default:
        printf("Only 0 and 1 number valid");
        break;
    
     }
     printf("\n");
 
        int value1,value2;
        char operator;
        printf("Addition,Multiplication,Subtraction,Division\n");
        
        printf("Type in +,-,*,/ \n");
        printf("number1 .Type Of operator. number2 \n");
        scanf("%d %c %d",&value1,&operator,&value2);
        
        switch(operator)
        {
         
          case '+':
             printf("%d \n",value1 + value2);
             break;  
        
          case '-':
             printf("%d \n",value1 - value2);
             break;  
        
          case '*':
             printf("%d \n",value1 * value2);
             break;  
        
          case '/':
          
              if (value2 == 0)
              {
                printf("Division By ZERO \n");
               }
              else
              {
             printf("%d \n",value1 / value2);
             break;  
              }
          
          default:
              printf("Not valid Operator\n");
              break;
       }
        
      printf("\n");  
      printf("\n------------------------------------\n");  
      printf("While Loop: \n");
  
     printf("Decrese Number: \n");
  
     int in;
     in=5;
     
      while(in > 0)
      {
       printf("\n N0:%d",in);
       in = in - 1;
      }   
        
     printf("\n");  
     printf("\n------------------------------------\n");  
     printf("10 times * :\n");
       
        int times = 0;
       
       while(times < 10)
       {
         printf("*");
         times++;
       }
          printf("\n");  
  
        int timess = 1;
      
        while(timess <= 10)
       {
         printf("*");
         timess++;
       }
   
          printf("\n");  
  
        int timed = 10;
      
        while(timed > 0)
       {
         printf("*");
         timed--;
       }
   
      printf("\n");  
      printf("\n------------------------------------\n");  
      printf("For  Loop: \n");
  
      int fors;
      for(int i = 0 ; i < 10 ; i++)
      {
        printf("loop times:%d,",i);
      }
   
      printf("\n");  
      printf("\n------------------------------------\n");  
      printf("Do-While  Loop: \n");
   
   /*   int x1 = 1;      rewritten 
      int count = 0;
      
      do{
        scanf("%d",&x);
        if(x1 >= 0)
        {
         count += 1;
        }
     }
     while(x1 >= 0);   
     */ 
      
      int c=5;
      
     do
     {
       printf("Jitendra");
       c++;
     }
     while(c<5); 
     
     printf("\n"); 
      
     printf("Eular's Number Formula Example\n");
     printf("e = 1/0! + 1/1! + 1/2! + 1/3! + 1/4!\n");
     printf("e  less than 0.0000001\n");
     
     double term = 1.0;
     double sum = 1.0;
     int no = 0;
     
     while( term >= 0.0000001)
     {
      no++;
      term = term/no;
      sum = sum + term; 
     }
     printf("e is:%lf\n",sum);
      
     printf("\n"); 
     
       printf("\n");
    
   printf("------------------------------------\n");  
   printf("Using Sentinel Value  Example\n");  
 
    int age;
    printf("\n Enter Age(-1 write to stop):");
    scanf("%d",&age);
    
    while(age != -1)
    {
       printf("\n Enter Age(-1 write to stop):");
       scanf("%d",&age);
     
    }
    
    int n2,sums,score;
    float average;
    
    sums = 0;
    n2 = 0;
    printf("\n Enter score(-99 write to stop):");
    scanf("%d",&score);
    
    while(score != -99)
    {
       sums += score;
       n2++;
       printf("\n Enter score(-99 write to stop):");
      scanf("%d",&score);
    }
     average = (float)sums / n2;
     printf("Average Is:%f",average);
    printf("\n");
    
   printf("------------------------------------\n");  
   
    
  /*  printf("Using Prime Read  Example\n"); 
   printf("\n Enter score(EOF Exit):");
   
    while(scanf("%d",&score) != EOF)
    {
       sums += score;
       n2++;
     
      
    }
     average = (float)sums / n2;
     printf("Average Is:%f",average);
*/ 

  printf("Using Counter  Example\n"); 
  
   int  count;
   count = 0;
   int numtimeneed = 10;
   
   while( count < numtimeneed)
   {
     printf("\nCount NO:%d",(count +1));
     count++;
   }
   printf("\n");
   
   int count2,score2;
   float average2;
   count2 = 0;
   
   int numtimeneed2 = 10;
   int Total = 0;
  
   while( count2 < numtimeneed2)
   {
      printf("Enter score:");
      scanf("%d",&score2);
      Total += score2;
      count2++;
   }
    average2 = (float)Total / numtimeneed2;
     printf("Average Is:%f",average2);
    printf("\n");
   
        printf("\n");
    
   printf("------------------------------------\n");  
   printf("GoTO Statment:\n");
   printf("Factorial:\n");
  
   int no2,co2;
   long int fact=1;
   printf("Enter the Number:");  
   scanf("%d",&no2);
   
   if(no2 < 0)
   {
     goto end;
   }
   for(co2=1; co2<=no2; co2++)
   {
   fact*=co2;
   printf("\n Factorial Is:%ld",fact);
   
   printf("\n");
   co2=1;
   loop:
   fact=fact*co2;
   co2++;
   if(co2<=no2)
   {
    goto loop;
      printf("\n Factorial Is:%ld",fact);
      end:
   }
   }
   
   printf("\n");
   printf("------------------------------------\n");  
   printf("Break Statment:\n");
 
 /* 
     int c=1;
     while( c < 5)     //infinite loop
    {
      if(c==3)
      {
       break;
       printf("\t %d",c);
       c++;
      }
    }
    
    
  while(1)
  {
   printf("\t %d",c);
   c++;
  }
 
 
   int n,r,d=2;
   printf("\n Enter the Number:");
   scanf("%d",&n);
   
   r= n%d;
   
   while( d <= n/2)
   {
    r = 1;
    
    if( r == 0)
    {
      break; // stop the program
      
      d++;
    }
   }
   if( r == 0)
    {
      printf("\n N't Prime Number");
    }
    else {
     printf("\n Prime Number");
    }
       
 */
 /*
     printf("\n");
   printf("------------------------------------\n");  
   printf("Continue Statment:\n");
 
   int c=1;
   
   while( c <= 5)
   {
     if( c == 3)
     {
       break;
       printf("\t %d",c);
       c++;
     } 
   }
  while( c <= 5)
   {
     if( c == 3)
     {
       continue;
       printf("\t %d",c);
       c++;
     } 
   }
   */ 
    
       printf("------------------------------------\n");  
   printf("Nested Loop:\n");
    
    int row,col;
    
    for( row = 1; row <= 4; ++row)
    {
      
      for( col = 1; col <=row; ++col)
      {
        printf("* \t");
      }
      printf("\n");
    }
   printf("\n");
   printf("------------------------------------\n");  

   for( row = 1; row <= 4; ++row)
    {
      
      for( col = 1; col <=row; ++col)
      {
        printf("%d \t",row);
      }
      printf("\n");
    }
   printf("\n");
   printf("------------------------------------\n");  
   
   int k=1;
   
   for( row = 1; row <= 4; ++row)
    {
      
      for( col = 1; col <=row; ++col)
      {
        printf("%d \t",k++);
      }
      printf("\n");
    }
    
   printf("\n");
   printf("------------------------------------\n");  
   
   int i,j;
   
    for( i = 1; i <= 10; i++)
    {
      
      for( j = 1; j <=10; j++)
      {
        printf("%5d",i * j);
      }
      printf("\n");
    }
    
   printf("\n");
   printf("------------------------------------\n");  
 
   for( i = 1; i <= 10; i++)
    {
      
      for( j = 1; j <=10; j++)
      {
        printf("%5d",i * j);
        
        if( i == j)
        {
          break;
        }
      }
      printf("\n");
    }
    
   printf("\n");
   printf("------------------------------------\n");  
 
   printf("%d\n",2);
    
   for( i = 3; i <= 100; ++i)
    {
      
      for( j = 2; j  < i; ++j)
      {
        
        if( i % j == 0)
        {
          break;
        }
        if( j > sqrt(i))
        {
         printf("Prime Number:%d\n",i);
         break;
        }
      }
    
    } 
    
    printf("\n");
   printf("------------------------------------\n");  
  
    int r;
    
    for( i = 2; i <= 100; ++i)
    {
      r=1;
      for( j = 2; j <= sqrt(i); ++j)
      {
        r = i%j;
        
        if( r == 0)
        {
          break;
        }
        
      }
      if( r!=0)
      {
       printf("Prime Number:%d\n",i);
      }
    
    } 
    
 
 
 
  
  
   return 0;
}
