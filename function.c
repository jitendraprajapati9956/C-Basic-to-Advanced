#include <stdio.h>
#include <limits.h>  //constant 
#include <complex.h> // complex number
#include <stdbool.h> //bool
#define SIZE 50
#define row 2
#define col 3
 
 

// function Declaration
float FtoC(float);  
int mul_by_10(int num); /* function prototype */
int GCD(int,int);
bool isPrime(int);
void change(int []);
void sort (int [], int);
void doubleThem(int [], int);
float avg_age(int [],int);
int maximum(int [],int); /* function prototype */
void string_copy(char [], char []);
void mat_arith(int [][col], int [][col]);
 

int main()
{
  printf("Topic_7_Function----> \n");
  printf("--------------------------------\n "); 
  printf("Function Prototype Declaration:\n");
  printf("return_data_type function_name (data_type_list);\n");
  printf("\n");
  printf("--------------------------------\n "); 
 
  printf("Function  Definition:\n");
  printf("return_data_type function name(data_type variable1,data_type variable2,……) { Function Body }\n");
  printf("\n");
 
 /*double power(double x, int n) 
 { 
   double result = 1.0; 
   for(int i = 1; i<=n; i++)     
          result *= x;
   return result; 
 }
 
 float FtoC(float faren) 
 {           
  float factor = 5.0/9.0; 
  float freezing = 32.0;  
  float celsius;       
celsius = factor ∗(faren - freezing);
 return celsius;     
}
  */
  printf("--------------------------------\n "); 
 
  printf("Return Statment:\n");
  printf("return expression; or return(expression);\n");
  printf("\n");
  printf("Example:\n");
  
  int sum(int, int);
    int a=5, b=10;
    
  printf("Sum:%d:",sum(a,b));
  printf("\n");
  printf("--------------------------------\n "); 
 
  printf("\n");
  printf("Function Calling:\n");
  printf("function_name(); or variable_name = function_name();\n");
  printf("\n");
  printf("Example:\n");
  
 
  float tempInF;
  float tempInC;
  printf("Temperature in Fahrenheit:");
  scanf("%f", &tempInF);
  tempInC = FtoC(tempInF); //Function calling
  printf("%f Fahrenheit equals %f Celsius...",tempInF,tempInC);
  printf("\n");
  printf("--------------------------------\n "); 
  
  
  printf("\n");
  printf("Call By Value:\n");
  printf("function_name(); or variable_name = function_name();\n");
  printf("\n");
  printf("Example:\n");
  
  int result,num = 3;
 
  printf("Num = %d before function call:", num);
  result = mul_by_10(num);
  printf("result = %d after return from function:", result);
  printf("\n");
  printf("Num = %d", num);
  printf("\n");
  printf("--------------------------------\n "); 
 
  int nOne, nTwo, n;
  printf("Enter two numbers:");
  scanf("%d %d", &nOne, &nTwo);
  
  n=GCD(nOne,nTwo);
  printf("GCD of %d and %d is %d \n",nOne,nTwo,n);
  printf("\n");
  printf("--------------------------------\n "); 

  int n1, d=2;
  printf("Enter the Number:");
  scanf("%d",&n1);
  printf("Prime factors of %d is....\n",n);

  for(d=2;d<=n1/2;++d)
  {
    if(n1%d==0 && isPrime(d))
    {
    printf("%d ",d);
    }
  }
  printf("\n");
  printf("--------------------------------\n "); 

  int arr[3] = {1, 2, 3};
  change(arr);
  printf("Elements are %d, %d, and %d.\n", arr[0],arr[1], arr[2]);
  printf("\n");
  printf("--------------------------------\n "); 


  int i;
  int array[10] = {3,2,7,0,6,4,9,8,1,5};
  printf("\n");
  printf("The array before the sort:\n");
  for(i = 0; i < 10; ++i)
  {
    printf ("%i", arr[i]);
  }
  sort (array, 10);
  printf("The array after the sort:\n");
  for(i = 0; i < 10; ++i)
  {
    printf ("%i", arr[i]);
  }
  printf("\n");
  printf("--------------------------------\n "); 
  
  
  printf("\n");
  printf("Passing Arrays to Function:\n");
  printf("\n");
  printf("Example:\n");
  
  int myInts[10] = {1,2,3,4,5,6,7,8,9,10};
  int size=10;
  printf("The given numbers are:\n");
  for (i = 0; i < size; i++)
  {
   printf("%d,",myInts[i]);
  }
  doubleThem(myInts,size);   /* function call */
  printf("The double numbers are:\n");
  for (i = 0; i < size; i++)
  {
   printf("%d,",myInts [i]);
   }
  printf("\n");
  
  int i3,b3[SIZE],n3;
  float average;
  printf("How many students? \n");
  scanf("%d",&n3);
  printf("Enter the age of students: \n");
  for(i3=0;i3<n3;i3++)
  {
   scanf("%d",&b3[i]);
  }
  average=avg_age(b3,n3);
  printf("the average age of students =%f", average);
  printf("\n");
 printf("\n");
 
  int values[5], i4, max;
  printf("Enter 5 numbers\n");
  for(i4 = 0; i4 < 5; ++i4)
  {
   scanf("%d", &values[i4]);
  }
  max = maximum(values,5); /* function call */
  printf("Maximum value is %d\n", max);
  printf("\n");
 

  char a5[100]; 
  char b5[100]; 
  printf("Input source string:");
  scanf("%[^\n]",a5); 
  string_copy(b5,a5); 
  printf("Destination string : %s\n",b5);
  printf("\n");
 

  int a6[row][col], b6[row][col],i6,j6;
  printf("Enter elements of the fi rst matrix.\n");
  for(i6=0; i6<row; i6++)
  {
   for(j6=0; j6<col; j6++)
   {
    scanf("%d",&a6[i6][j6]);
    printf("Enter elements of the second matrix.\n");
   }
  }
  for(i6=0; i6<row; i6++)
  {
   for(j6=0; j6<col; j6++)
   {
    scanf("%d",&b6[i6][j6]);
   }
  }
  mat_arith(a6,b6);  /** function call **/
  printf("\n");
 
  printf("--------------------------------\n "); 
  
  
 
   return 0;
}

//function Definition

int sum(int x, int y)
 {
  return x+y;
 }
 

float FtoC(float faren) //Function header
{     
  float factor = 5.0/9.0;                 
  float freezing = 32.0; // Function body
  float celsius;                        
  
   celsius =factor*(faren - freezing);     
   return celsius; 
 }     
 
int mul_by_10(int num)
 {
 num *= 10;
 return num;
 }

 int GCD(int x,int y)
 {
  int result=1, k=2;
  while(k<=x && k<=y)
  {
    if(x%k==0 && y%k == 0)
     result=k;
    k++;
  }
  return result;
 }
 
bool isPrime(int x)
 {
  int d;
  for(d=2;d<=x/2;++d)
   if(x%d==0)
    return false;
  return true;
 }
 
 void change(int my_array[])
 {
  my_array[0] = 10;
  my_array[2] = 20;
  return;
 }
 
 void sort (int a[], int n)
 {
  int i, j, temp;
  for(i = 0; i < n-1; ++i)
  for(j = 0; j < n-i-1; ++j)
  if (a[j] > a[j+1])
  {
   temp = a[j];
   a[j] = a[j+1];
   a[j+1] = temp;
  }
 }
 
 void doubleThem(int a[], int size)
 {
  int i;
  for(i = 0; i < size; i++)
  {
  a[i] = 2 * a[i];
  }
 }
 
float avg_age(int a[], int n)
 {
  int j;
  float sum=0.0;
  for(j=0;j<n;j++)
   sum=sum+a[j];
  return sum/n;
 }

 int maximum(int values[], int n)
 {
  int max_value, i;
  max_value = values[0];
  for(i = 1; i < n; ++i)
   if(values[i] > max_value)
    max_value = values[i];
  return max_value;
 }
 
 void string_copy(char d[], char s[])
 {
  int i = 0;
  printf("Source string : %s\n",s);
   for (i = 0; s[i] != '\0'; i++)
   {
       d[i] = s[i];
   }
 }
 
 void mat_arith(int a7[][col], int b7[][col])
 {
  int c[row][col],i,j,choice;
  printf("addition enter: 1 \n");
  printf("subtraction enter: 2\n");
  printf("Enter your choice:");
  scanf("%d",&choice);
  for(i=0; i<row; i++)
  for(j=0; j<col; j++)
  {
   if(choice==1)
    c[i][j]= a7[i][j] + b7[i][j];
   else if(choice==2)
    c[i][j]= a7[i][j] - b7[i][j];
   else
   {
    printf("Invalid choice");
    return;
   }
  }
  printf("The resulting matrix is:\n");
  for(i=0; i<row; i++)
  { 
   for(j=0; j<col; j++)
printf("%d", c[i][j]);
   printf("\n\n");
  }
  return;
 }


 
