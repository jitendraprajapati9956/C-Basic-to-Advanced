#include <stdio.h>
#include <limits.h>  //constant 

int main()
{
  printf("Operators Examples\n ");
  
  printf("1.Arithmetic\n 2.Relational\n 3.Logical\n 4.Bitwise\n 5.Conditional\n 6.Comma\n 7.sizeof\n 8.Expression Evaluation-precedence and Associativity\n");
  printf("\n");
   
  printf("Arithmetic Examples");
  printf("\n");
     
  int x=5,y=7,z;
  z=x+y;
  printf("x value is :%d\n",x);
  printf("y value is :%d\n",y);
  printf("sum z,is: %d\n",z);
  printf("\n");
  int a,b,c;
  c=a+b;
  
  printf("a value is :%d\n",a);
  printf("b value is :%d\n",b);
  printf("sum c,is: %d\n",c);
  printf("value n't defined default is 0 \n");
  printf("\n");
  
      
  printf("Unary Increment and Decrement operator Examples\n");
  int d=5,e=3;
  printf("++(d*e+2)  is Compiler error -Lvalue required \n" );
  printf("++2  is Compiler error -Lvalue required \n" );
  printf("\n"); 
 
  printf("Logical Examples");
  printf("\n");
  
  int i=0,j=1;
  printf("i=0,j=1 \n");
  printf("%d \n", i++ && ++j);
  printf("i:%d j:%d \n", i,j);  
  printf("\n");
 
  printf("Comma Examples");
  printf("\n");
 
  int m=1;
  int n;
  n =(m=m+3,m%3);
   printf("n: (m=m plus 3 comma m module 3)\n");
   printf("n:%d \n",n);
   printf("Explantion- comma operator left to right precendence first m plus 3 = 4 is add m module 3 4module3=1 \n " );
   printf("\n");
  
   int k,l,comma;
   int kcount =0 , lcount=0;
   comma = ( k < l ? kcount++ : lcount++, n);
   printf(" comma :%d \n",comma);
   printf("Explantion- k is less than l , kcount++ is execute but k is grater tyhan l , lconut++ execute \n " );
  printf("\n");
   
   printf("Swap two Number using comma operator:\n");
   int o=2,p=3,swap;
   printf("o:%d\n",o);
   printf("p:%d\n",p);
   swap=o,o=p,p=swap;
   printf("swap No: o=%d p=%d\n",o,p);
   printf("\n");
 
   printf("Precendece Examples \n");
   int precendence; 
   precendence = 2*3 + 4*5;
   printf("2 * 3 + 4 * 5: \n");
   printf("precendence = %d \n",precendence); 
   
   precendence = 2 * (3 + 4) * 5;
   printf("2 * (3 + 4) * 5: \n");
   printf("precendence = %d \n",precendence); 
   
   precendence = 7 * 6 % 15 / 9;
   printf(" 7 * 6 module 15 / 9: \n");
   printf("precendence = %d \n",precendence); 
  
   precendence = 7 * ( 6 % 15 ) / 9;
   printf("7 * (6 module 15) / 9: \n");
   printf("precendence = %d \n",precendence); 
  
   precendence = 7 * 6 % (15 / 9);
   printf("7 * 6 module (15 / 9): \n");
   printf("precendence = %d \n",precendence); 
  
   precendence =7 * ((6 % 15) / 9);
   printf("7 * ((6 module 15) / 9): \n");
   printf("precendence = %d \n",precendence); 
   
   
   
   
   
   printf("\n");
   
   
   
   
   
   
   
   
   
   
   
      
   return 0;
   

}
