#include <stdio.h>
#include <string.h>
#include <stdlib.h>

union test
{
  int i;          
  char c;        
}var;     

struct S
{
 int i;
 char ch;
 double d;
};
union U
{
 int i;
 char ch;
 double d;
};

struct SS
{
 int i;
 char ch;
 double d;
};
union UU
{
 int i;
 char ch;
 double d;
}; 

enum days{Mon, Tues, Wed, Thurs, Fri, Sat, Sun };
    
struct cbits {
  unsigned b1 : 1;
  unsigned b2 : 1;
  unsigned b3 : 1;
  unsigned b4 : 1;
  unsigned b5 : 1;
  unsigned b6 : 1;
  unsigned b7 : 1;
  unsigned b8 : 1;
 };
 
union UUU 
{
  char c;
  struct cbits cb;
};
  
int main()
{
    
   printf("Topic:10---> UNION\n");  
   printf("-----------------------------\n");  
   printf("Declaring Union and its Members:\n");  
   printf("union mixed\n");
   printf("{\n");
   printf("char letter;\n");
   printf("float radian;\n");
   printf("int  number;\n");
   printf("};\n");
   printf("union mixed all;\n");
   printf("\n");
   
 
   printf("-----------------------------\n");  
   printf("Accessing and  Initializing the Members of a  Union:\n");
   
   var.i=65;    
   printf("var.i=%d\n", var.i);  
   printf("var.c=%c\n", var.c);  
   printf("\n");
   
   
   printf("-----------------------------\n");  
   printf("Structure VS Union:\n");
   
   printf("Size of the structure is %ld\n", sizeof(struct S));
   printf("Size of the union is %ld\n", sizeof(union U));
   
    struct SS a = {10, 'A', 3.1415};
    union UU b = {10};  // Initialize 'i' member of the union
  
    printf("a.i=%d a.ch=%c a.d=%lf\n", a.i, a.ch, a.d);
    printf("b.i=%d b.ch=%c b.d=%lf\n", b.i, b.ch, b.d);
    printf("\n");

    b.ch = 'B';
    printf("b.i=%d b.ch=%c b.d=%lf\n", b.i, b.ch, b.d);
    
    b.d = 5.12345;
    printf("b.i=%d b.ch=%c b.d=%lf\n", b.i, b.ch, b.d);
   
    b.i = 10;  
    printf("i = %d\n", b.i);

    b.ch = 'A';  
    printf("ch = %c\n", b.ch);

    b.d = 3.1415;  
    printf("d = %lf\n", b.d);
 
    printf("\n");
    printf("Topic:11---> ENUMERATION TYPES\n");  
    printf("-----------------------------\n");  
     
    enum days start, end;
    start= Tues;          /* means start=1 */
    end= Sat;            /* means end=5  */
    
    printf("start = %d, end = %d\n", start,end);
    start= 64;
    printf("start now is equal to %d\n", start);
 
    printf("\n");
    printf("Topic:11---> BITFIELDS\n");  
    printf("-----------------------------\n");  
   
     union UUU look;
     look.c = 'A';
     printf("Character:%c\n",look.c);
     printf("BIT 1 = %d\n", look.cb.b1 );
     printf("BIT 2 = %d\n", look.cb.b2 );
     printf("BIT 3 = %d\n", look.cb.b3 );
     printf("BIT 4 = %d\n", look.cb.b4 );
     printf("BIT 5 = %d\n", look.cb.b5 );
     printf("BIT 6 = %d\n", look.cb.b6 );
     printf("BIT 7 = %d\n", look.cb.b7 );
     printf("BIT 8 = %d\n\n", look.cb.b8 );
    
  
   
  return 0;
 }


