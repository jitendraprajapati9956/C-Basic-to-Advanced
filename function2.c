#include <stdio.h>
#include <limits.h>  //constant 
#include <complex.h> // complex number
#include <stdbool.h> //bool
#include "extern.c"  // link program

void exchange(int, int);
void exchange2(void);

int a, b;   
int i3;       
 void show3();   
int main()
{
  printf("Topic_7_Function----> \n");
  printf("--------------------------------\n "); 
  printf("SCOPE AND EXTENT\n");
  printf("Concept of Global and Local Variables:\n");
  printf("Example:\n");
 
  int a, b;       
  a = 5;
  b = 7;
  printf("In main: a = %d, b = %d\n", a, b);
  exchange(a, b); 
  printf("Back in main:");
  printf("a = %d, b = %d\n", a, b);
  printf("\n");
  
  a = 5;
  b = 7;
  printf("In main: a = %d, b = %d\n", a, b);
  exchange2();  
  printf("Back in main:\n");
  printf("a = %d, b = %d\n", a, b);
  printf("\n");
  printf("--------------------------------\n "); 
 
  printf("SCOPE AND EXTENT\n");
  printf("Scope Rules:\n");
  printf(" Block scope:\n");
  printf(" file scope:\n");
  printf(" function scope:\n");
  printf(" function prototype scope:\n");
  printf("\n");
 
  printf(" Block scope:\n");
  printf("Example:\n");
 
  int x= 3;   
  printf("outer block x = %d before inner block", x);
  {
   int x= 45; 
   printf("in inner block x = %d", x);
  }
  printf("in outer block x = %d after inner block", x);
  printf("\n");
 printf("\n");
 
  printf(" function prototype scope:\n");
  printf("Example:\n");


  void show(int x);
  int x2=10;
  show(x2);

  printf("\n");
  printf("--------------------------------\n "); 
 
  printf("Storage Classes:\n");
  printf("storage_class_specifier data_type  variable_name;\n");
  printf("The  storage class –  auto\n");
  printf("The  storage class –  register\n");
  printf("The  storage class –  static\n");
  printf("The  storage class –  extern\n");
  printf("\n");
 
  printf("The  storage class –  auto\n");
  printf(" auto char any_alpha;\n");
  printf("Example:\n");

   auto int a2 =5;
   printf("a = %d",a2);
   {
    int a = 10,i;
     printf("a = %d\n",a2);
    printf("i = %d\n",i);
    }
   printf("a = %d\n",a2);
   printf("\n");
   
   printf("The  storage class –  static\n");
   printf("Example:\n");

   void show2(void);
   printf("First Call of show():\n");
   show2(); 
   printf("Second Call of show():\n");
   show2();
   printf("Third Call of show():\n");
   show2(); 
   printf("\n");
   
   printf("The  storage class –  extern\n");
   printf("Example:\n");
   
   int i3=10;
   show4(); 
   printf("Value of i in function2.c=%d\n",i3);

   printf("\n");
   printf("--------------------------------\n "); 
   printf("The Inline Function:\n "); 
   inline int sum(int x, int y)
   {
    return x+y;
    }

   return 0;
}

//function Definition

void exchange(int a, int b)
 { 
  int temp; /* local variable */
  printf("In function exchange() before change: a=%d and b=%d\n",a,b);
  temp = a;
  a = b;
  b = temp; /* interchange over */
  printf("In function exchange() after change:\n");
  printf("a = %d, b = %d\n", a, b);
 } 

 void exchange2(void)
 { 
  int temp; 
  printf("In function exchange() before change:  a=%d and b=%d\n",a,b);
  temp = a;
  a = b;
  b = temp; 
  printf("In function exchange() after change:\n");
  printf("a = %d, b = %d\n", a, b);
 } 
 
 void show(int x)
 {
 printf("%d",x);
 }

 void show2(void)
 {
 static int i; 
printf("\n i=%d",i); 
i++;
 }
 
