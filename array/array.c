#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    
   printf("Topic:5---> ARRAY\n");  
   printf("-----------------------------\n");  
   printf("One Dimensional Array:\n");  
   printf("Example:\n");  
   printf("Fibbonacci Series:\n");  
   
   int fib[15];
   int i;
   
   fib[0] = 0;
   fib[1] = 1;
   for(i = 2; i < 15; i++)
   {
     fib[i] = fib[i-1] + fib[i-2];
   }
   for(i = 0; i < 15; i++)
   {
   printf("%d\n", fib[i]);
   }
   printf("\n");
   
   printf("Example2:\n");  
   printf("Searching an Element:\n");  
   
   int a[30],n,i2,key,FOUND=0;
   printf("How many number:");
   scanf("%d",&n);
   
   if(n>30)
   {
    printf("Too many Numbers:");
    exit(0);
    }
    printf("Enter the array elements: \n");
    for(i2=0 ; i2<n; i2++)
    {
      scanf("%d", &a[i2]);
    }
    printf("\n");
    printf("Enter the key to be searched:\n");
    scanf("%d",&key);
    for(i2=0 ; i2<n; i2++)
    {
      if(a[i2] == key)
      {
        printf("Found at :%d \n",i2);
        FOUND=1;
       }
    }
      if(FOUND == 0)
      {
       printf("\n NOT FOUND...");
      }
       printf("\n");
  
    
    
     printf("Example3:\n");  
     printf("Sorting an Element(Bubble Sort):\n");  
   
     int j,temp,sorted=0;
     printf("How many numbers:");
     scanf("%d",&n);
     if(n>30)
     {
      printf("Too many Numbers:");
      exit(0);
     }
     printf("Enter the array elements:\n");
     for(i=0 ; i< n; i++)
     {
      scanf("%d", &a[i]);
     }
     for(i = 0; i < n-1 && sorted==0; i++)
     {
       sorted=1;
     
       for(j = 0; j < (n - i) -1; j++)
       {
          if(a[j] > a[j+1])
          {
            temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
            sorted=0;
          }
       }
    }
    printf("The numbers in sorted order:\n");
    for(i=0 ; i<n; ++i)
    {
     printf("%d\n", a[i]);
    }
      printf("\n");
  
     printf("Example4:\n");  
     printf("Searching an Element(Binary Search):\n");  
   
    int t,low,mid,high,found=0;
    printf("Enter the NO. of elements in the array:");
    scanf("%d",&n);
    if(n>30)
    {
     printf("Too many Numbers:");
     exit(0);
    }
    printf("Enter the elements of the array:\n");
    
    for(i=0 ; i< n; i++)
    {
       scanf("%d", &a[i]);
    }
    printf("Enter the element to search :");
    scanf("%d",&t);
    low = 0;
    high = n - 1;
 
    while(high >= low)
    {
      mid = (low + high) / 2;
  
      if(a[mid] == t)
      {
        found = 1;
        break;
       }
      else if (t < a[mid])
      {
        high = mid - 1;
      }
      else
      {
        low = mid + 1;
      }
    }
    if(found==0)
    {
      printf("NOT FOUND\n");
    }
    else
    {
      printf("FOUND IS:%d...\n",mid);
    }
     printf("\n");
     
 
     printf("Example5:\n");  
     printf("Roll Dice :\n");  
      
     int d1, d2;
     int ar[13]; // uses [2..12] 
    
     for(i = 2; i <= 12; i = i + 1)
     {
        ar[i] = 0;
      }
     for(i = 0; i < 100; i = i + 1)
     {
       d1 = rand() % 6 + 1;
       d2 = rand() % 6 + 1;
      ar[d1 + d2] = ar[d1 + d2] + 1;
      } 
     for(i = 2; i <= 12; i = i + 1)
     {
      printf("%d: %d\n", i, ar[i]);
     }
     printf("\n");
 
 
  return 0;
}
