#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <string.h>

#define COLS 50
#define ROWS 3
#define COLS2 4
/*void sort_words(char *a[], int n)
 {
 int i,j;
 char *temp;
 
  for(i=0;i<n-1;++i)
  {
    for(j=i+1;j<n;++j)
    {
      if(strcmpi(a[i],a[j])>0)
      {
       temp=a[i];
       a[i]=a[j];
       a[j]=temp;
      }
    }
  }
}
*/


void change(int *);
void change2(int **);
 int A,B;
 char *rainbow[] = {"red", "orange", "yellow","green", "blue", "indigo", "violet"};
 char *getday(int);
/*void reverse(char *string)
 {
  char *lp = string;         // left pointer 
  char *rp = &string[strlen(string)-1]; // right pointer 
  char tmp;
while(lp < rp)
   {
    tmp = *lp;
    *lp = *rp;
    *rp = tmp;
    lp++;
    rp--;
   }
}
*/

int *ptr[10];
 void display()
 { 
  int i2;
 // Displaying what each pointer in the array points to. 
   for(i2 = 0; i2 < 10; i2++)
   {
    printf("%d\n",*ptr[i2]);
   }
 }
 
  void show(int(*b)[3])
 {
 int i,j;
 for(i=0;i<2;++i)
 {
 printf("\n");
 for(j=0;j<3;++j)
 printf("%d\t",*(*(b+i)+j));
 }
 }
 
 
 
 void show2(int array[][COLS2], int rows, int cols)
{
  int i,j;
  for(i=0; i < rows; i++)
  {
  printf("%p",array[i]);
  for(j=0; j < cols; j++)
  printf("%d", array[i][j]);
  printf("\n");
  }
}

 void display2(int (*array)[COLS2], int rows, int cols)
 {
  int i,j;
  for(i=0; i < rows; i++)
  {
   printf("%p", array);
   for(j=0; j < cols; j++)
   printf("%d",(*array)[j]);
   array++;
   printf("\n");
  }
 }
 
 void print_mat(int *pt_array, int rows, int cols)
  {
   int i,j;
   for(i=0; i < rows; i++)
   {
    printf("%p",pt_array); 
    for(j=0; j < cols; j++)
     printf(" %d", *(pt_array++)); 
    printf("\n");
   }
 }



int main()
{
    
   printf("Topic:8---> Pointer\n");  
   printf("------------------------------------\n");  
   printf("Subtraction Pointer:\n");  
   printf("\n");  

  
   int x[100];
   int *pi, *cpi = &x[99]; // cpi points to the last  element of x 
   pi = x;
 
   if((cpi - pi) != 99)
   {
    printf("Error\n");
   }
   pi = cpi;
   pi++;        
   // increment past end of x 
  if((pi - cpi) != 1)
  {
    printf("Error\n");
   }
   printf("\n");  
   
   printf("------------------------------------\n");  
   printf(" Comparing Pointers:\n");  
   
   int a[] = {10, 20, 30, 40, 50};
   int i, *p;
   
   for(p=a; p<=a+4; p++)
   {
    printf("%d\n", *p);
   }
  /* 
   char a2[50];
   void reverse(char *);
   printf(" Enter the string:");
   gets(a2);
   reverse(a2);
   printf("After reversing the string is :\n");
   puts(a2);
*/
 
   printf("\n");  
   
   printf("------------------------------------\n");  
   printf("Pointers to  Pointers:\n");  
  
   
   int a2=5;
   int *p2,**q;
   p2=&a2;
   q=&p2;
   printf("*p=%d\n",*p2);
   printf("**q=%d\n",**q);
   printf("\n");  
   
   int *p3;
   A=5;
   B=10;
   p3=&B;
   change(p3);
   printf("*p = %d\n", *p3);
   printf("\n");  
   
   change2(&p3);
   printf("*p = %d\n", *p);
   printf("\n");  
   
   int a3;
   int *p4;
   int **dp;
   int ***tp;
   p4=&a3;
   dp=&p;
   tp=&dp;
 
   printf("ENTER THE VALUE OF a:");
   scanf("%d",&a3);
   printf("\n");  
   printf("a=%d\n",a3);

   printf("ENTER THE VALUE OF a:");
   scanf("%d",p4);
   printf("\n");  
   printf("a=%d\n",a3);

   printf("ENTER THE VALUE OF a:");
   scanf("%d",*dp);
   printf("\n");  
   printf("a=%d\n",a3);

   printf("ENTER THE VALUE OF a:");
   scanf("%d",**tp);
   printf("\n");  
   printf("a=%d\n",a3);
   
   printf("\n");  
   
   printf("------------------------------------\n");  
   printf("ARRAY OF  POINTERS:\n");  

   int a4 = 46, b = 109, c = 51, d = 66, e = 82, f = 47,
   g = 40, h = 36, k = 70, l = 79;
   int* temp;
   int i2,j;
   ptr[0]=&a4;
   ptr[1]=&b;
   ptr[2]=&c;
   ptr[3]=&d;
   ptr[4]=&e;
   ptr[5]=&f;
   ptr[6]=&g;
   ptr[7]=&h;
   ptr[8]=&k;
   ptr[9]=&l;
   printf("Displaying the values before  sorting :\n");  
 
   display(); // Displaying the values before  sorting 
   for(i2 = 0; i2 < 10; i2++)
   {
     for(j = 0; j < 9-i; j++)
     {
       if(*ptr[j] > *ptr[j+1])
       {
         temp = ptr[j];
         ptr[j] = ptr[j+1];
         ptr[j+1] = temp;
       }
     }
   }
     
   printf("Displaying the values after  sorting :\n");  
   display();
  printf("\n");  
   
   int color; 
   printf("Rainbow Color:\n");  
 
   for(color = 0; color <= 6; color++)
   {
    printf("%s\n", rainbow[color]);
   }
   printf("\n");

   int iday;
   char *dayofWeek;
   printf("Enter a number from 1 to 7 for the day of the week:");
   scanf("%d",&iday);
   dayofWeek=getday(iday);
 
   if(dayofWeek!=NULL)
   {
     printf("Day Name:%s\n", dayofWeek);
   }
  else
   {
    printf("No Day\n");
   }
   printf("\n");  
 /*
  char w[10][COLS];
  char *wdptr[10];
  int i;
  for(i=0; i<10; ++i)
  {
    gets(w[i]);
    wdptr[i]=w[i];
  }
  printf("Before sorting the strings are:\n");
  for(i=0; i<10; ++i)
  {
    puts(w[i]);
    sort_words(wdptr,10);
  }
  printf("After sorting the strings are:\n");
  for(i=0; i<10; ++i)
  {
   puts(wdptr[i]);
   }
*/
  
  printf("------------------------------------\n");  
  printf("POINTERS  TO AN ARRAY:\n");  

  
  int a5[2][3]={{3,4,5},{6,7,8}};
  int i4; 
  int(*pa)[3];
  pa=a5;
 
  for(i4=0;i4<3;++i4)
  {
    printf("%d\t",(*pa)[i4]);
  }
  printf("\n");
  pa++;
  for(i4=0;i4<3;++i4)
  {
   printf("%d\t",(*pa)[i4]);
  }
  printf("\n");  
  
  printf("------------------------------------\n");  
  printf("TWO-DIMENSIONAL  ARRAYS AND POINTERS:\n");  

  int a6[2][3]={10,20,30, 40,50,60};
  int i6,j6;
 
  for(i6=0;i6<2;++i6)
  {
   printf("\n");
  
   for(j6=0;j6<3;++j6)
   {
     printf("%d\t",*(*(a6+i6)+j6));
    // printf("%d\t",*(a6[i6]+j6)));
    // printf("%d\t",(*(a6+i6)[j6]));
    // printf("%d\t",*(&a6[0][0]+i6*3+j6));
   }
  }
 printf("\n");
 
  printf("------------------------------------\n");  
  printf("TWO-DIMENSIONAL  ARRAYS AND POINTERS:\n");  
  printf("Passing  Two-dimensional  Array to a Function:\n");  

  int a7[2][3]={10,20,30,40,50,60};
  void show(int(*)[3]);
  show(a7);
  
  printf("\n");
  printf("\n");
  printf("\n");
 
  printf("------------------------------------\n");  
 
 int i8, j8;
 int mat[ROWS][COLS2];
 int *ptr;
 void show2(int [][COLS2], int, int); 
 
 printf("The matrix is %d x %d \n",ROWS,COLS2);
 printf("\n");

 printf("The original values using array indices:\n");
 for(i8=0; i8 < ROWS; i8++)
 {
  printf("%p",mat[i8]);
  for(j8=0; j8 < COLS; j8++)
  {
  mat[i8][j8] = i8+j8;
  printf("%d", mat[i8][j8]);
  }
  printf("\n");
 }
 printf("\n");
 printf("The first call to show: \n");
 show2(mat, ROWS, COLS2); 
 printf("\n");
 printf("The second call to show: \n");
 show2(&mat[0], ROWS, COLS2);
 printf("\n");
 printf("The original values using a pointer:\n");
 ptr = &mat[0][0];
 for(i8=0; i8 < ROWS; i8++)
 {
 printf("%p",ptr);
 for(j8=0; j8 < COLS2; j8++)
 {
  *ptr = i8+j8;
  printf("%d", *(ptr++));
 }
 printf("\n");
 }
 printf("\n");
 printf("The first call to show:\n");
 show2(mat, ROWS, COLS2);
 printf("\n");
 printf("The second call to show:\n");
 show2(&mat[0], ROWS, COLS2);
  
 printf("\n");
 printf("\n");
  printf("------------------------------------\n");  
  
  void display2(int(*)[COLS2], int, int); 
  printf("The matrix is %d x %d \n",ROWS,COLS2);
 printf("\n");
 printf("The original values using array Display:\n");
 for(i8=0; i8 < ROWS; i8++)
 {
  printf("%p",mat[i8]);
  
    for(j8=0; j8 < COLS; j8++)
    {
     mat[i8][j8] = i8+j8;
     printf("%d", mat[i8][j8]);
    }
  printf("\n");
 }
 printf("\n");
 printf("The first call to Display: \n");
 display2(mat, ROWS, COLS2); 
 printf("\n");
 printf("The second call to Display: \n");
 display2(&mat[0], ROWS, COLS2);
 printf("\n");
 printf("The original values using a pointer:\n");
 ptr = &mat[0][0];
 for(i8=0; i8 < ROWS; i8++)
 {
 printf("%p",ptr);
 for(j8=0; j8 < COLS2; j8++)
 {
  *ptr = i8+j8;
  printf("%d", *(ptr++));
 }
 printf("\n");
 }
 printf("\n");
 printf("The first call to Display:\n");
 display2(mat, ROWS, COLS2);
 printf("\n");
 printf("The second call to Display:\n");
 display2(&mat[0], ROWS, COLS2);
 printf("\n");
 printf("\n");
 printf("------------------------------------\n");  

  
  void print_mat(int *, int, int);
  printf("The matrix is %d x %d \n",ROWS,COLS2);
  printf("\n");
  printf("The original values For Matrix:\n");
  for(i8=0; i8 < ROWS; i8++)
  {
    printf("%p",mat[i8]);
   
    for(j8=0; j8 < COLS2; j8++)
    {
     mat[i8][j8] = i8+j8;
     printf("%d", mat[i8][j8]);
    }
  printf("\n");
 }
 printf("\n");
 printf("The first call to print_mat: \n");
 print_mat(mat[0], ROWS, COLS2);
 printf("\n");
 printf("The second call to print_mat: \n");
 print_mat(&mat[0][0], ROWS, COLS2);
 printf("\n");
 printf("The third call to print_mat:\n");
 print_mat(*mat, ROWS, COLS2);// This will run faster as will print_mat
 printf("The original values for print_mat: \n");
 ptr = &mat[0][0];
  for(i8=0; i8 < ROWS; i8++)
 {
 printf("%p",ptr);
 for(j8=0; j8 < COLS2; j8++)
 {
  *ptr = i8+j8;
  printf("%d", *(ptr++));
 }
 printf("\n");
 }
 printf("\n");

 printf("The first call to print_mat: \n");
 print_mat(mat[0], ROWS, COLS2);
 printf("\n");
 printf("The second call to print_mat: \n");
 print_mat(&mat[0][0], ROWS, COLS2);
 printf("\n");
 printf("The third call to print_mat:\n");
 print_mat(*mat, ROWS, COLS2);
  
  printf("\n");
 printf("\n");
 printf("------------------------------------\n");  

   
 char a9[2][15]= {"abc:", "a  for apple"};
  char *p9[2]= {"abc:", "a  for apple"};
  printf("%c %c %c %s %s \n", a9[0][0],a9[0][1],a9[0][2], a9[0], a9[1]);
  printf("%c %c %c %s %s \n", p9[0][0],p9[0][1],p9[0][2],p9[0],p9[1]);
  
  
   return 0;
}


 void change(int *q)
 {
 q=&B;
 }
 
 void change2(int **q)
 {
 *q=&B;
 }
 
 char *getday(int iNo)
 {
   char *days[7];
   days[0]="Sunday";
   days[1]="Monday";
   days[2]="Tuesday";
   days[3]="Wednesday";
   days[4]="Thursday";
   days[5]="Friday";
   days[6]="Saturday";
 
  if(iNo >=1 && iNo<=7)
  {
    return days[iNo-1];
  }
  else
  {
   return NULL;
  }
 }
