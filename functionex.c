#include <stdio.h>
#include <stdlib.h>  

// function declaration
 int f1(void); 
 int f2(void); 
 void f3(void); 
 void f4(int); 
 int add(int,int);
 int add2(int a,int b)
 {
 int c=a+b;
 }
 /*int funct2(int b)   //errror 
 {
 if(b == 0)
  return b;
 else
  funct1(b--);
 }
 int funct1(int a) //errror
 {
 if(a == 0)
  return a;
 else
  funct2(a--);
 }

 int funct2(int b)//errror
 {
 if(b == 0)
  return b;
 else
  funct1(--b);
 }
 int funct1(int a)//errror
 {
 if(a == 0)
  return a;
 else
  funct2(--a);
 }
 
 int funct1(int a)//errror
 {{;}{{;}return a;}}
 */
 int val = 6; 
int main()
{
  printf("Topic_7_Function----> \n");
  printf("--------------------------------\n "); 
  printf("Example:\n");
  printf("Function Calling:\n");
 
  printf("%d\n", f1()); 
  printf("%d\n", f1()); 
  printf("%d\n", f1()); 
  printf("Static Keyword:\n");

  printf("%d\n", f2()); 
  printf("Global Value:\n");

  f3(); 
  printf("%d\n", val); 
  f3(); 
  printf("%d\n", val); 
  printf("Global Value:\n");

  f4(val); 
  printf("%d\n", val); 
  f4(val); 
  printf("%d\n", val); 

  printf("add1:\n");
  
   int a=1,b=2;
   printf("%d\n",add(a,b));
   
   printf("add2:\n");
 
   int a2=10,b2=20;
   printf("a:%d b:%d =%d\n",a2,b2,add2(a2,b2));

   printf("add3:\n");
   
  
   int a3=7;
 printf("%d",funct1(a3));

  printf("\n"); 
  printf("--------------------------------\n "); 
  
 /* int add3(int,int);  //error
 int a3=7,b3=13;
 printf("%d",add3(add3(a,b),add(a,b)));
 */
  
 
  return 0;
}
// recursive Function

 int f1(void) { 
int val = 1; 
return val++; 
}

int f2(void) { 
 static int val = 1; 
 return val++; 
}

void f3(void) { 
 ++val; 
 }
 
 
void f4(int val) { 
 ++val; 
  }

int add(int a,int b)
 {
 return(a+b);
 }
 
/*int add3(a,b) //error
 int a,b;
 {
 return(a+b);
 }
 
 int add4(a,b)
 {
 int c=a+b;
 return c;
 }
*/

 
