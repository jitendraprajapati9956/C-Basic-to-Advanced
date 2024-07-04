#include <stdio.h>
#include <ctype.h>

#define MAX 5  // Passing an Array to a  Function
#define N 5  //Addition or Subtraction with  Integers


//function declaration 

 void swap(int *a, int *b)
 {
 int temp;
 temp = *a;
 *a = *b;
 *b = temp;
 }
 
 int word_cnt(char *s)
 {
 int cnt = 0;
 while(*s != '\0') 
 {
  while(isspace(*s))  
   {    // skip white space 
     ++ s;
   }
  if(*s != '\0')
  {                  //found a word 
   ++cnt;
   while(!isspace(*s) && *s != '\0')
    {  // skip the word 
     ++s;
    }
  }
  return cnt;
 }
}

/*char *mystrstr(char *input, char *pat)
 {
  char *start, *p1, *p2;
  for(start = &input[0]; *start != '\0'; start++)
  {  // for each position in input string... 
   p1 = pat;  // prepare to check for pattern  
         string there 
   p2 = start;
   while(*p1 != '\0')
   {
     if(*p1 != *p2)  // characters differ 
      break;
     p1++;
     p2++;
    }
   if(*p1 == '\0')        // match found
   return start;
  }
  return NULL;
 }
 */
float compute(float, float *);
int *pointMax(int *, int *);

int main()
{
    
   printf("Topic:8---> Pointer\n");  
   printf("------------------------------------\n");  
   printf("Declaring a  Pointer:\n");  
   printf("\n");  
  
   int *ptr;
   printf("The value of ptr is %p\n", ptr);
   printf("\n");  
  
   int *p;
   float *q;
   double *r;
   printf("the size of integer pointer is %ld\n",sizeof(p));
   printf("the size of float pointer is %ld\n",sizeof(q));
   printf("the size of double pointer is %ld\n",sizeof(r));
   printf("the size of character pointer is %ld\n",sizeof(char *));
   printf("\n");  
   printf("------------------------------------\n");  
   
   printf("Initializing  Pointers:\n");  
   printf("\n");  
   
   int a=10;
   p=&a;
   printf("p = %p\n", p);
   printf("------------------------------------\n");  
  
  
   printf("Indirection Operator and  Dereferencing:\n");  
   printf("\n");  
   
   int num = 5,i;
   int *iPtr = &num;
   printf("The value of num is %d\n", num);
   num = 10;
   printf("The value of num after num = 10 is %d\n", num);
   *iPtr = 15;
   printf("The value of num after *iPtr = 15 is %d\n", num);
   printf("Value of i = %d\n", i);
   printf("\n Value of i = %d\n", *(&i));
   printf("\n");  
  
   
   printf("Sum Two Number:\n");  
   printf("\n");  
 
   int a2,b,c;
   int *pa,*pb,*pc;
   pa=&a2;
   pb=&b;
   pc=&c;
   printf("Enter The First Number:");
   scanf("%d",pa);
   printf("Enter The Second Number:");
   scanf("%d",pb);
   *pc=*pa+*pb;
   printf("SUM IS %d",*pc);
   printf("\n");  
 
   int a3=5, b3=10;
   int *p3;
   p3 = &a3;
   printf("\na=%d b=%d *p=%d", a3, b3,*p3);
   p3=&b3;
   printf("\na=%d b=%d *p=%d", a3, b3,*p3);
   printf("\n");  
 
   printf("------------------------------------\n");  
  
  
  /*
   printf("Void Pointer:\n");  
   printf("\n");  
   
   int a4=5,
   void *vp;
   vp=&a4;
   printf("\n a= %d", *((int *)vp));
 */
 
   printf("Null Pointer:\n");  
   printf("\n"); 
   printf("Integer:\n");
 
   int *p2;
   p2 = NULL;
   printf("The value of p is %p\n", p2);
   
   printf("Character:\n");
   char *p4=NULL;
   printf("%s",p4);
   printf("\n"); 
  

   printf("------------------------------------\n");  
   printf("Use of Pointer:\n");  
   printf("\n"); 
   printf("Call By Address:\n");
   printf("Swap Two Number:\n");
  
   int x=5,y=10; 
   void swap(int *,int *);
   printf("%d %d\n",x,y);
   swap(&x, &y);
   printf("%d %d\n",x,y);
   printf("\n"); 
  
   printf("Returning More than One Value from a Function:\n");
   printf("Area Of circle:\n");
 
   float r2,area,perimeter;  
   float compute(float, float *);  
   
   printf("Enter the radius of the circle:");
   scanf("%f",&r2);
 
   area=compute(r2, &perimeter);
   printf("\n AREA = %f", area);
   printf("\n PERIMETER = %f", perimeter);
   printf("\n"); 
 
   printf("Returning Pointer from a Function:\n");
   printf("Maximum No:\n");
 
  
   int a6,b6,*pf;
   printf("a = ");
   scanf("%d",&a6);
   printf("b = ");
   scanf("%d",&b6);
   pf=pointMax(&a6,&b6);
   printf("*p = %d\n", *pf);
   
   printf("------------------------------------\n");  
   printf("Array And Pointer:\n");  
   printf("\n"); 
   printf("One-dimensional Arrays and Pointers:\n");
   
   int array[]={10, 20, 30, 40, 50};
   printf("%p %p", array, &array); 
   printf("\n"); 
  
   int arr[]={10, 20, 30, 40, 50};
   for(i=0;i<5;++i)
   {
    printf("Array:%d\n", arr[i]); 
   }
   printf("\n"); 
   
   for(i=0;i<5;++i)
   {
     printf("Array:%d\n", *(arr+i)); 
   }
   printf("\n"); 
  
   int *ap;
   ap=arr;
   for(i=0;i<5;++i)
   {
    printf("Array:%d\n", ap[i]); 
    printf("Array:%d\n", *(ap+i));
    printf("Array:%d\n", *(i+ap));
    printf("Array:%d\n", i[ap]);
   }
   
   printf("------------------------------------\n");  
   printf("Passing an Array to a  Function:\n");  
  
   int arr1[MAX],n;
   int getdata(int *, int);
   void show(int *, int);
   n = getdata(arr1, MAX);
   show(arr, n);
   printf("\n");  
   printf("------------------------------------\n");  
   printf("Differences between Array Name and Pointer:\n");  
   
   int arr2[]={10, 20, 30, 40, 50};
   printf("arr:%p , &arr2[0]:%p , &arr2:%p", arr2, &arr2[0],&arr2);
   printf("\n");  
 
  /* float a7[5];
   for(i = 0; i < 5; i++)
   {
    *a7 = 0.0;
    a7++; // BUG: a = a + 1; 
   }

   float *ptr2;
   ptr2 = a7; 
   for(i = 0; i < 5; i++) 
   {
    *ptr2 = 0.0; // *ptr accesses a[i] 
    ptr2++;
   }
   
   */
   
   int *ptr2;
  ptr2=arr;
  printf("&arr[0]:%p, ptr2:%p, &ptr2:%p", &arr[0],ptr2,&ptr2);

  printf("Size of  Pointer:\n");  
  printf("%ld\n", sizeof(arr)); 

  ptr2=arr;
  printf("%ld\n", sizeof(ptr2));
  
   printf("\n");  
   printf("------------------------------------\n");  
   printf("Pointer and String:\n"); 
   
   for(i=0;*("I am Jitendra" + i)!='\0';++i)
    printf("%c",*("I am Jitendra" + i)); 
    
 /*  for(i=0;*({1,2,3,4,5} + i)!='\0';++i)  //number array not true
    putchar(*({1,2,3,4,5} + i));
  */
   
   printf("\n");  
   printf("------------------------------------\n");  
   printf("Pointer Arithmetic:\n"); 
   printf("Assignment:\n"); 
   
   int i2;
   int *ip2;
   void *vp2;
   ip2 = &i2;

   vp2 = ip2;
    //printf(“\n *vp= %d”,*vp); ——————— ERROR
   ip2 = vp2;
    printf(" *ip= %d\n",*ip2);
    printf("*vp= %d\n",*((int *)vp2));
    printf("\n");  
  if(ip2 != &i2)
   printf("Error\n");
  else
   printf("Code Successfully\n");

  printf("\n");  
 
 
  printf("------------------------------------\n");  
   printf("Pointer Arithmetic:\n"); 
   printf("Addition or Subtraction with  Integers:\n"); 
   
    
   int array3[] = {10, 12, 6, 7, 2};  
   int ias; 
   int sum = 0; 
   int sum2 = 0;
   int sum3 = 0;
   int *p5;
   p5 = array3;
   for(ias=0; ias<5; ias++)
   {  
    sum += array3[ias]; 
    sum += *(array3 + ias); 

    sum += *p5;
    p5++;

    }  
   printf("Sum:%d\n", sum);
   printf("Sum2:%d\n", sum2);
   printf("Sum3:%d\n", sum3);
   
   printf("\n");  
 

   float arr4[N], *ptr4;
   int *iptr, a5[N],i5;
  
  for(i5 = 0; i5 < N; i5++)
  {
   arr4[i5] = 0.3;
   a5[i] = 1;
  }
  ptr4 = &arr4[3];
  *ptr4 = 1.0;     // arr[3] = 1.0 
  *(ptr4 - 1) = 0.9;  // arr[2] = .9 
  *(ptr4 + 1) = 1.1;  // arr[4] = 1.1 
 
  iptr = &a5[3];
  *iptr = 0;
  *(iptr - 1) = -1;
  *(iptr + 1) = 2;
  
  for(i5 = 0; i5 < N; i5++)
  {
   printf("arr[%d] = %f", i5, *(arr4 + 1));
   printf("a[%d] = %d\n", i5, a5[i5]);
  }
  printf("\n");  
 
  int A[] = {10, 20, 30, 40, 50};
 int *p6, i6;
 p6 = A;
 printf("*p : %i\n\n", *p6);
 i6 = *(p6++);
 printf("i is: %i\n", i6);
 printf("*p is: %i\n\n", *p6);
 i6 = (*p6)++;
 printf("i is: %i\n", i6);
 printf("*p is: %i\n\n", *p6);
 i6 = *(++p6);
 printf("i is: %i\n", i6);
 printf("*p is: %i\n\n", *p6);
 i6 = ++(*p6);
 printf("i is: %i\n", i6);
 printf("*p is: %i\n\n", *p6);

 printf("\n");  
 
 
 int a7[] = {10, 20, 30, 40, 50};
 int i7, *p7;
 p7=a7+4;
 
 for(i7=4; i7>=0; i7--)
 {
  printf("%d\n", *(p7-i7));
 }

 int a8[] = {10, 12, 6, 7, 2};
 int i8, *p8;
 p8=a8+4;
  for(i8=0; i8<5; i8++)
  {
  printf("%d\n", p8[-i8]);
  }
  
  printf("\n");  
 
  
 /*
  char a9[15] = "I AM JITENDRA";  //get function not suppoted Ubuntu
 char *pa9;
 pa9 = a9;
 while(*pa9)
 {
  putchar(*pa9);
  pa9++;
 }
 printf("\n");
 
 
  char aa[50], bb[50];
  void scopy(char *, char *);
 
  printf("Enter the string:");
  gets(a);
  scopy(b,a);
  printf("String:%s",b);
  
  printf("\n"); 
  
   char aa2[50], bb2[30];
 char *mystrstr(char *, char *);
 printf("Enter the string:");
  gets(aa2);
printf("Enter the substring to search:");
  gets(bb2);
 if(mystrstr(aa2,bb2) == NULL)
   printf("NOT FOUND\n");
  else
   printf("FOUND\n");
 
    
 */
 
  char str[80];
 printf("ENTER THE SENTENCE:");
 scanf("%[^\n]", str);
 printf("NO OF WORDS =% d", word_cnt(str));
 
   printf("\n");  
  
  
   return 0;
}


// function definition


float compute(float r, float *p)
{
 float a;
 a=(float)3.1415 * r * r;
 *p=(float)3.1415 * 2 * r;
 return a;
}

 int *pointMax(int *x, int *y)
 {
 if(*x>*y)
 return x;
 else
 return y;
 }
 
 
 int getdata(int *a, int n)
 {
  int x, i = 0;
  printf("Enter the array elements:\n");
  
  while(i < n) 
  {
   scanf("%d", &x);
   *(a + i) = x;
   i++;
  }
  return i;
 }
 void show(int *a, int n)
 {
  int i;
  printf("Array element:\n");
  for(i=0;i<n;++i)
   printf("%d,", *(a+i));
 }

void scopy(char *t, char *s)
 {
 int i;
 i = 0;
 while(s[i]!= '\0')
 {
  t[i] = s[i];
  i++;
 }
 t[i]='\0';
 }
 
