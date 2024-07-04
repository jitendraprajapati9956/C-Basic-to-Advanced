#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    
   printf("Topic:5---> ARRAY\n");  
   printf("-----------------------------\n");  
   printf("One Dimensional Array:\n");  
  
   printf("Declaration Array:\n");  
   printf("Int a[size]\n");  
  
   printf("Initizing Array:\n");  
   printf("int a[2] = {1,2}\n");  
  
   printf("Access Array:\n");  
   printf("a[0] = 1\n");  
   
   printf("-----------------------------\n");  
   printf("One Dimensional Array Example:\n");  
   
   printf("Size Of Array:\n");  
   float ar[10];
   printf("%ld\n", sizeof(ar));
   printf("\n");  
  
   printf("Garbage:\n");  
   int arr[5],i1;
   for(i1=0;i1<5;++i1)
   {
     printf("%d\n",arr[i1]);
   }
   printf("\n");  
   
   printf("Reverse Number:\n");  
  
    int a[30],n,i;
    
    printf("\n Enter the number:");
    scanf("%d",&n);
  
    if(n>30)
    {
     printf("\n Too many Numbers");
     exit(0);
    }
    
    for(i=0 ; i< n; i++)
    {
     scanf("%d", &a[i]);
    }
    printf("Reverse Order:");
    for(i=n-1 ; i>=0; i--)
    {
    
      printf("%d,", a[i]);
    }
    printf("\n");
    
    int s = 0;
    float avg;
    
     printf("Enter the number of number:");
     scanf("%d",&n);
 
     if(n>30)
     {
      printf("\n Too many Numbers:");
      exit(0);
     }
     
     for(i=0 ; i< n; i++)
     {
       scanf("%d", &a[i]);
       s+=a[i];
     }
     avg=(float)s/n;
     printf("Numbers greater than the average:");
 
     for(i=0 ; i< n; i++)
     {
       if(a[i]>avg)
       {
        printf("%d\n",a[i]);
       }
     }
       printf("\n");
       
       
        printf("Variable Length Array:\n");
  
      printf("enter the value of n:\n ");
      scanf("%d", &n);
      printf("enter the values one by one\n");
      for(i=0;i<n; ++i)
      {
         scanf("%d", &a[i]);
      }
      printf("Enter numbers are.....\n");
      for(i=0;i<n;++i)
      {
        printf("%d \n",a[i]);
      }
        printf("\n");
        
        
      int m,r;
      printf("Enter the decimal Integer");
      scanf("%d",&n);
      m=n;
      for(i=0;n>0;i++)
      {
       r=n%2;
       a[i]=r;
       n=n/2;
      }
      printf("Binary equivalent of :%d is \n",m);
      for(i--;i>=0;i--)
      {
        printf("%d",a[i]);
      }
      printf("\n");
   printf("-----------------------------\n");  
   printf("-----------------------------\n");  
   printf("Multi Dimensional Array:\n"); 
   printf("Example:\n"); 
   
   int j;
   int ar2[3][2] = {{4,7},{1,0},{6,2}};
 for(i = 0; i < 3; i++)
 {
  for(j = 0; j < 2; j++)
  {
   printf("%d", ar2[i][j]);
  }
  printf("\n");
  }
  
   printf("\n");
   printf("-----------------------------\n");  
   printf("Transport Matrix:\n"); 

  int row,col;
 int  value;
 int mat[10][10], transp[10][10];
 printf("Input the number of rows:");
 scanf("%d", &row);
 printf("Input number of cols:");
 scanf("%d", &col);
 for(i = 0 ; i < row; i++)
 {
  for(j = 0 ; j < col; j++)
 {
   printf("Input Value for : %d: %d:",i+1,j+1);
   scanf("%d", &value);
   mat[i][j] = value;
  }
 }
 printf("Entered Matrix is as follows:\n");
 for(i = 0; i < row; i++)
 {
  for(j = 0; j < col; j++)
  {
   printf("%d", mat[i][j]);
  }
  printf("\n");
 }
 for(i = 0; i< row; i++)
 {
  for(j = 0; j < col; j++)
  {
   transp[i][j]= mat[j][i];
  }
 }
 printf("Transpose of the matrix is as follows:\n");
 for(i = 0; i < col; i++)
 {
  for(j = 0; j < row; j++)
  {
   printf("%d", transp[i][j]);
  }
  printf("\n");
 }

   printf("\n");
   printf("-----------------------------\n");  
   printf("-----------------------------\n");  
   printf("Two Dimensional Character Array:\n"); 
   printf("Example:\n"); 
   
   int it;
 char sa[10][30], t[30];
 for(it=0;it<10;it++)
  scanf("%s",sa[it]);
  for(it=0;it<10;it++)
   printf("\n%s",sa[i]);
   
   printf("\n");
   printf("-----------------------------\n");  
   
   char sam[2][5]={"EVEN","ODD"};
 int numo;
 printf("Enter the number:");
 scanf("%d",&numo);
 printf("The number is %s:",sam[numo%2]);
 
 printf("\n");
   printf("-----------------------------\n");  
   
 char sto[10][30], twa[30];
 int i1i,jt,namo;
 printf("how many strings:");
 scanf("%d",&namo);
 printf("Enter the strings:\n");
 for(i1i=0;i1i<n;i1i++)
  scanf("%s",sto[i1i]);
 printf("**starting comparing and sorting**");
 for(i1i=0;i1i<namo-1;i1i++)
  for(jt=i1i+1; jt<n; ++jt)
   if(strcmp(sto[i1i],sto[i1i])>0)
   {
    strcpy(t,sto[i1i]);
    strcpy(sto[i1i],sto[j]);
      strcpy(sto[j],twa);
   }
 printf("**sorted array**");
  for(i1i=0;i1i<namo;i1i++)
  printf("%s",sto[i1i]);



 
  
   return 0;
}
