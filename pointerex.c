#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>


 void F(int *a, int n)
 {
  int i;
  for(i = 0; i < n; i++)
  {
  printf("%d,", *(a++)+i);
  }
 }
int main()
{
    
   printf("Topic:8---> Pointer\n");  
   printf("------------------------------------\n");  
   printf("Examples:\n"); 
   
   int val = 5;
   int *ptr = &val;
  
  printf("++val  *ptr:\n"); 
  printf("%d %d", ++val, *ptr);
  printf("\n"); 
  printf("val  *ptr++:\n"); 
  printf("%d %d", val, *ptr++);
  printf("\n"); 
  printf("val  ++*ptr:\n"); 
  printf("%d %d", val, ++*ptr);
  printf("\n"); 
  

  int a[] = {1,2,3,4,5,6};
  int *ptr2 = a + 2;
//  printf("%d %d", *++a, --*ptr2);  Error 
  printf("\n"); 
  printf("++*ptr+1  1+*--ptr:\n"); 
  printf("%d %d", --*ptr+1,1+*--ptr);
 
 
  char myArray[5], *p = myArray;
  int i;
  for(i = 4; i > 0; i--)
  { 
     *p++ = i*i;
      p++;
  
      for (i = 4; i >= 0; i--)
     {
       printf("%d", myArray[i]);
     }
  }
  printf("\n"); 
  
  

  int a2 = 555, *ptr3 = &a2, b = *ptr2;
  printf("\n"); 
  printf("++a  --b  *ptr++:\n"); 
  printf("%d %d %d", ++a2, --b, *ptr2++);
  printf("\n"); 
  printf("val  (*ptr)++:\n"); 
  printf("%d %d", val,(*ptr)++);
  printf("\n"); 
 
  int a3[100];
  int sum = 0;
  int k;
  for(k = 0; k < 100; k++)
  {
   *(a3+k) = k;
  }
  printf("\n"); 
  printf("a[--k]:\n"); 
  printf("%d", a3[--k]); 
  printf("\n"); 

  
  void F(int *a, int n);
  int arr[5] = {5,4,3,2,1};
  printf("\n"); 
  printf("*(a++)+i:\n"); 
  F(arr,5);
 
 
//  int a[10];
 //printf("%d", ((a + 9) + (a + 1)));          error
  printf("\n"); 

 
  char A[] = {'a','b','c','d','e','f','g','h'};
  char *p3 = A;
  ++p3;
  while(*p3 != 'e')
  printf("%c", *p3++);
  
  char *p1 = "Name";
  char *p2;
  p2 = (char *) malloc(20);
  while(*p2++ = *p1++);
   printf("%s\n", p2);
   
  printf("\n"); 
  printf("a4+++b4:\n"); 
  int a4 = 2, b4 = 3;
  printf("%d", a4+++b4);
  
  
  int a5[] = {1,2,3,4,5,6,7};
  char c[] = {'a','x','h','o','k'};
  printf("\n"); 
  printf("(&a[3]-&a[0]),(&c[3]-&c[0]):\n"); 
  printf("%ld\t %ld",(&a[3]-&a[0]),(&c[3]-&c[0]));
  printf("\n"); 
 
  /*          error: assignment to expression with array type  s1 = s2;

  char s1[] = "Manas";
  char s2[] = "Ghosh";
  s1 = s2;
  printf("%s", s1);
  */
  
/*
  char *ptrr = "JITENDRA";
  (*ptrr)++;
  printf("%s\n", ptrr);
  ptrr++;
  printf("%s\n", ptrr);
*/

 char *p6 = "Pointer";
  int i6 = 0;
  while(*p6)
  {
   if(!isupper(*p6++))
   {
    ++i6;
   }
  }
  printf("%d", i6); 
  printf("\n"); 
 
   char str[] = "Test";
  if((printf("%s", str)) == 4)
   printf("Success");
  else
   printf("Failure");
  
   printf("\n"); 
   
   printf("Hi Friends"+3);
   printf("\n"); 
  
   
   int aa[] = {1,2,3,4,5,6};
  int *pptr = aa + 2;
  printf("\n"); 
  printf("*––ptr:\n"); 
  printf("%d", *--pptr);

  printf("\n"); 

 /* int i = 100, j = 20;
  i++ = j;
  i* = j;
  printf("%d\t %d\n", i,j);
 */
 
  int a7[5], *p7;
  for(p7 = a7; p7 < &a7[5]; p7++)
  {
   *p7 = p7-a7;
   printf("%d", *p7);
  }
  printf("\n"); 
 
// putchar(5["manas"]);  //not printed

  int aa2[] = {1,2,3,4,5};
  int ii, ss = 0;
  for(ii = 0; ii < 5; ++ii)
  {
   if((aa2[ii]%2) == 0)
   {
      ss += aa2[ii];
   }
  }
  printf("%d", ss);
   printf("\n"); 
 
   int ii2;
  char ss2[] = "Dharamshih Desai University";
  for(ii2 = 0; ss2[ii2]!= '\0'; ++ii2)
  {
   if((ii2%2) == 0)
   {
    printf("%c %c", ss2[ii2], ss2[ii2]);
    putchar(ss2[ii2]);
    }
  }
    
    
  char arr2[3][6] = {"ZERO", "ONE", "TWO"};
  printf("\n"); 
  printf("s[2]:\n"); 
  printf("%s", arr2[2]);
  printf("\n"); 
  printf("s[2][0]:\n"); 
  printf("%c", arr2[2][0]);
  
  
  int aaa[][3] = {0,1,2,3,4,5};
  printf("\n"); 
  printf("sizeof(aaa):\n"); 
  printf("%ld", sizeof(aaa));
  printf("\n"); 
  printf("sizeof(aaa[2]):\n"); 
 //aaa[2][3] = {0,1,2,3,4,5};
  //printf("%ld", sizeof(aaa[2]));
 /*  
   char *str2 = "This is my string";
   str2[3] = 'B';
   puts(str2);
   printf("\n"); 

  */
  int aaaa[5]={1,3,6,7,0};
  int *bbbb;
  bbbb=&aaaa[2];
  printf("%d", bbbb[-1]);
  
  printf("\n"); 
  printf("s[2]:\n"); 
  void x(void);
  x();

  return 0;
}

 void x(void)
 {
 char aas[]="Hii";
 char *bbs="JITENDRA";
 char ccs[10]="PRAJAPATI";
 printf("%s %s %s\n", aas, bbs, ccs);
 printf("%ld %ld %ld\n",sizeof(aas), sizeof(bbs), sizeof(ccs));
 }

