#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>


#define ROW 5  //Implementing Multidimensional Arrays Using Pointer
#define COL 5

typedef int RowArray[COL];
RowArray *rptr;
 
//function declaration
int(*fpointer)(int, int); // Define a pointer to a function 
int add(int, int);       
int sub(int, int);

double fact(double a)
  {
   double f=1.0;
   for(a=0;a>0;a--)
    f*=a;
   return f;
  }
double exp_term(double b, double x)
 {
  return(pow(x,b)/fact(b));
 }
 double by_term(double b, double x)
 {
 return(1/pow(x,b));
 }
 double sum(double f(double,double), int m, int n)
 {
 int K;
 double s = 0.0;
 double x;
 printf("ENTER THE VALUE OF x:");
 scanf("%lf",&x);
 printf("\n");
 for(K=m; K<=n;++K)
 s+=f(K,x);
 return s;
 }

 void Add(int a, int b)
 {
 printf("Result of Addition = %d\n",a+b);
 }
 void Sub(int a, int b)
 {
 printf("Result of Subtraction = %d\n",a-b);
 }
 void Mul(int a, int b)
 {
 printf("Result of Multiplication = %d\n",a*b);
 }
void *safe_malloc(size_t);
void getdata(int *,int, int);
void showdata(int *,int,int);
 
/* void sort_words(char *a[], int n)
 {
 int i,j;
 for(i=0;i<n-1;++i)
 for(j=i+1;j<n;++j)
  if(strcmp(a[i],a[j])>0)
   swap(&a[i],&a[j]);
 }
 
 void swap(char **p, char**q)
 {
 char *tmp;
 tmp=*p;
 *p=*q;
 *q=tmp;
 }
*/

//void change(const int [], int);


int main()
{
    
   printf("Topic:8---> Pointer\n");  
   printf("------------------------------------\n");  
   printf("POINTERS  TO FUNCTIONS:\n");  
   printf("\n");  
   
   fpointer = add; // Define  functions. 
   printf("Addition:\n");
   printf("%d\n", fpointer(4, 5));
   
   fpointer = sub;        
   printf("Subtraction:\n");
   printf("%d \n", fpointer(6, 2));
 
   printf("\n");  
   
   printf("SUM OF COMPUTATION 1: %lf\n",sum(exp_term,0,3));
   printf("SUM OF COMPUTATION 2: %lf\n",sum(by_term,0,4));

   printf("\n");  
 
   printf("------------------------------------\n");  
   printf("Arrays of Function Pointers:\n");  
   
   void(*p[3])(int, int); 
   int i; 
   void Add(int, int); 
   void Sub(int, int); 
   void Mul(int, int); 
   p[0] = Add; 
   p[1] = Sub; 
   p[2] = Mul; 
   
   for(i = 0; i <= 2; i++)
   { 
     (*p[i])(10, 5); 
   }
 
   printf("\n");  
   printf("\n");  
   printf("------------------------------------\n");  
   printf(" DYNAMIC MEMORY ALLOCATION:\n");  
   
  /*
   int *ip;
   double *dp;
   float *fp1;
   float *fp2;
   
   ip = (int *) malloc(sizeof(int));
   if(ip == NULL)
   {
    printf("out of memory\n");
    exit(-1);
   }
   
   dp =(double *) malloc(sizeof(double));
   if(dp == NULL)
   {
    printf("out of memory\n");
    exit(-1);
   }
   
   fp1 =(float *) malloc(sizeof(float));
   if(fp1 == NULL)
   {
    printf("out of memory\n");
    exit(-1);
   }
 
   fp2 = (float *) malloc(sizeof(float));
  if(fp2 == NULL)
  {
   printf("out of memory\n");
   exit(-1);
  }
  *ip = 42;
  *dp = 3.1415926;
  *fp1 = -1.2;
  *fp2 = 0.34;
  printf("ip: address %d; contents %d\n" ,(int)ip, *ip);
  printf("dp: address %d; contents %f\n" ,(int)dp, *dp);
  printf("fp1: address %d; contents %f\n",(int)fp1, *fp1);
  printf("fp2: address %d; contents %f\n",(int)fp2, *fp2);
*/
 printf("Dynamic Allocation of Arrays:\n");  
 
  int N,*a,i2,s=0,s2=0,*a2;
  printf("Enter no. of elements of the array:");
  scanf("%d",&N);
  a=(int *)malloc(N*sizeof(int));
  a2=(int *)calloc(N,sizeof(int));
 
  if(a==NULL)
  {
   printf("memory allocation unsuccessful\n");
   exit(0);
  }
  if(a2==NULL)
  {
   printf("memory allocation unsuccessful\n");
   exit(0);
  }
  printf("Enter the array elements one by one:");
 
  for(i2=0; i2<N;++i2)
  {
    scanf("%d",&a[i2]); 
    s+=a[i2];
  }
   for(i2=0; i2<N;++i2)
  {
    scanf("%d",(a2+i2));
    s+=a2[i2];
  }
 
  printf("Sum is (Malloc()):%d\n",s);
  printf("Sum is (Calloc()):%d\n",s2);
  
   printf("\n");  
   printf("\n");  
  
  
  void *safe_malloc(size_t size)
 {
 void *ptr;
 ptr= malloc(size);
 if(ptr == NULL) {
 fprintf(stderr, "Out of memory at line %d file %s\n", __LINE__, __FILE__);
 exit(-1);
 }
 return ptr;
 }

   printf("\n");  
   printf("\n");  
   printf("------------------------------------\n");  
   printf("Freeing Memory:\n");  
   
   int *array;
   int size = 1;
   int i3;
   
   printf("Enter the number of values:"); 
   scanf("%d", &size);
   array = (int *)calloc(size, sizeof(int));
 
   for(i3=0; i3<size; i3++)
    {
      printf("Please enter value #%d: ", i3+1);
      scanf("%d", array+i3);
    }
   for(i3=0; i3<size; i3++) 
   {
    printf("Value #%d is: %d\n", i3+1, array[i3]);
   }
 free(array);
 
   printf("\n");  
   printf("\n");  
   printf("------------------------------------\n");  
   printf("Reallocating Memory Blocks:\n");  
   
   int N2,*aa,*np,i4,s4=0;
   char ans='Y';

   printf("Enter no. of elements of the array:");
   scanf("%d",&N2);
   aa=(int *)malloc(N2*sizeof(int));

   if(aa==NULL)
   {
    printf("memory allocation unsuccessful\n");
    exit(0);
   }
   i4=0;
 
   while(toupper(ans)=='Y')
   {
     if(i4 >= N2)
     {  
          // increase allocation 
       N2 *=2;
      np =(int *)realloc(aa,N2*sizeof(int));
 
       if(np == NULL)
       {
        printf("out of memory\n");
        exit(1);
       }
     aa = np;
    }
  printf("Enter the number:\n");
  scanf("%d",&aa[i4]);
  s4+=aa[i4];
  i4++;
 
  printf("Do U 12 Continue(y/n):");
  fflush(stdin);
  scanf("%c", &ans);
  }
 N2=i4;
 
 printf("THE NUMBERS ARE:\n");
 for(i4=0;i4<N2;++i4)
 printf("%d",aa[i4]);
 printf("Sum is %d",s4);

 
   printf("\n");  
   printf("\n");  
   printf("------------------------------------\n");  
   printf("Implementing Multidimensional Arrays Using Pointer:\n");  
  
  int **arr,i5,j5;
  arr=(int **)malloc(ROW*sizeof(int *));
 
  if(!arr)
  {
    printf("out of memory\n");
    exit(EXIT_FAILURE);
  }
 
  for(i5=0;i5<ROW;i5++)
  {
   arr[i5]=(int *)malloc(sizeof(int)*COL);
 
   if(!arr[i5])
   {
     printf("out of memory\n");
     exit(EXIT_FAILURE);
   }
  }
  
 printf("Enter the Elements of the matrix:\n");
 
 for(i5=0;i5<ROW;++i5)
 {
   for(j5=0;j5<COL;++j5)
   {
     scanf("%d",&arr[i5][j5]);
   }
 }
 
 printf("The matrix Is:\n");
 
 for(i5=0;i5<ROW;++i5)
 {
   printf("\n");
 
  for(j5=0;j5<COL;++j5)
  {
   printf("%d\t",arr[i5][j5]);
  }
 }

 int row, col;
 int *a6;
 printf("ENTER THE NUMBER OF ROWS:");
 scanf("%d",&row);
 printf("ENTER THE NUMBER OF COLUMNS:");
 scanf("%d",&col);
 a6=(int *)malloc(row*col*sizeof(int));
 getdata(a6,row,col);
 showdata(a6,row,col);
 free(a6);
 a6=NULL;
 
 printf("\n");  
   printf("\n");  
   
 
   int **arr2;
  arr2= (int **) malloc(ROW * sizeof(int *));
  if(!arr2)
  {
   printf("out of memory\n");
   exit(EXIT_FAILURE);
  }
  arr2[0] = (int *)malloc(ROW *COL* sizeof(int));
  
  if(!arr2[0]) 
  {
   printf("out of memory\n");
   exit(EXIT_FAILURE);
  }
  for(int i=1; i < ROW; i++)
  {
   arr[i] = arr[0] + i * COL;
  }
  
  printf("\n");  
   printf("\n");  
  
 int nrows = 10;   //typedef keyword
 int r, c;
 rptr = malloc(nrows * COL * sizeof(int));
 for(r = 0; r < nrows; r++)
 {
 for(c = 0; c < COL; c++)
 {
 rptr[r][c] = 0;
 }
 } 
 
 /*
 char word[50];
 char *w[cols];
 int i7
 for(i7=0; i7<COL; ++i7)
 {
   scanf("%s",word);
   w[i7]=(char *)calloc(strlen(word)+1, sizeof(char));
   strcpy(w[i7],word);
 }
 n=i7;
 sort_words(w,n);
 */
 
 char **buf;
 int height, width, i7, j7;

 printf("Enter number of lines:");
 scanf("%d", &height);
 fflush(stdin);
 
 printf("Enter width of lines:");
 scanf("%d", &width);
 fflush(stdin);
 
 buf = (char **)malloc(height * sizeof(char *));
 
 if(buf == (char **)NULL)
 {
 
   fprintf(stderr, "Cannot Allocate a Space\n");
    return 1;
 }
 for(i7 = 0; i7 < height; ++i7)
 {
  buf[i7] = (char *)malloc(width);
  
   if(buf[i7] == (char *)NULL)
   {
 
    fprintf(stderr,"Cannot allocate text space.\n");
    --i7;
  
   while(i7 >= 0)
   {
     free(buf[i7]);
     --i;
   }
  free(buf);
  return 1;
  }
 }
 
 for(i7 = 0; i7 < height; ++i7)
 {
  printf("Enter text:");
 // fgets(buf[i7]);
 }
 printf("\n\n\n\n\n");
 for(i7 = 0; i7 < height; ++i7)
  printf("%s\n",buf[i7]);
 for(i7 = 0; i7 < height; ++i7)
 free(buf[i7]);
  free(buf);
 
  printf("\n");  
   printf("\n");  
  
/*
    printf("------------------------------------\n");  
   printf("Constant Pointers:\n");  
    
   int a9[]={1,2,3,4,5};
   int n9,i9;             
   
   n9=sizeof(a9)/sizeof(a9[0]);
   
   change(a9,n9);
   printf("The array elements after calling change():\n");
 
   for(i9=0;i9<n9;++i9)
   {
     printf("\t%d",a9[i9]);
   }

 
  printf("\n");  
  printf("\n");  
*/  
return 0;
}
//function definition
 int add(int a, int b)
 {
  return(a + b);
 }
 int sub(int a, int b)
 {
  return(a - b);
 }
 
 void getdata(int *p,int r, int c)
 {
   int i,j;
  
   printf("Enter the Number:\n");
 
   for(i=0;i<r;++i)
   {
     for(j=0;j<c;++j)
     {
        scanf("%d",p);
        p++;
     }
   }
}

 void showdata(int *p,int r,int c)
 {
 int i,j;
 printf("the MATRIX is:\n");
 
 for(i=0;i<r;++i)
 {
   printf("\n");
   
   for(j=0;j<c;++j)
   {
     printf("\t %d",*p);
     p++;
   }
 }
}

 /*void change(const int b[],int n)
 {
   int i;

   for(i=0;i<n;++i)
   {
     b[i] += 10;
   }
}
*/
