#include <stdio.h>
#include <stdlib.h>  

int fib(int); //function declaration
int gcd(int, int);   /* function prototype */
int binarysearch(int a[], int n, int key)
 {
     int beg,mid;
     beg=0; 
     int end=n-1;   
     while(beg<=end)
     {
       mid=(beg+end)/2;
     if(key==a[mid])
             return mid;
        else if(key>a[mid])
               beg=mid+1;
       else
          end=mid-1;
     }
    return -1;
 }
int main()
{
  printf("Topic_7_Function----> \n");
  printf("--------------------------------\n "); 
  printf("Recursion:\n");
  printf("Example:\n");
  printf("Fibonacci Series:\n");
  
  int i,j;
  printf("Enter the Number:");
  scanf("%d",&i);
  
  if(i < 0)
  {
  printf("Wrong Input\n");
  exit(1);
  }
 
  printf("Fibonacci Series %d:",i);
  
  for( j = 1; j <=i; ++j)
  {
    printf("%d,",fib(j)); //function calling
  }
  printf("\n"); 
  printf("--------------------------------\n "); 
  printf("GCD:\n");
 
  int i2,j2;
  printf("Enter the numbers:");
  scanf("%d %d",&i,&j);
  printf("The GCD of %d and %d is: %d",i,j,gcd(i,j)); /* function call */
 
  printf("\n"); 
  printf("--------------------------------\n "); 
  printf("Binary Search:\n");
  
  int arr[50], n, key, index;
  printf("How many elements?"); 
  scanf("%d", &n);
   
   puts("Enter the array elements in ascending order");
     
   for (index = 0; index < n; index++)
   {
         scanf("%d", &arr[index]);
    }
    
   printf("Enter the search key:");
   scanf("%d", &key);
     
   index = binarysearch(arr, n, key);
   
   if (index == -1)
   {
       puts("not found");
   } 
   else
   {
     printf(" found at index:%d\n", index);
   }

  
 
  return 0;
}
// recursive Function

int fib(int val)
{
  if( val <= 2)
  {
    return 1;
  }
  else
  {
    return( fib ( val - 1 ) + fib ( val - 2)); 
  }
}

 int gcd(int a,int b)
 {
  int remainder;
  remainder = a % b;
  if(remainder == 0)
   return b;
  else
   return gcd(b, remainder);
 }
 
 
