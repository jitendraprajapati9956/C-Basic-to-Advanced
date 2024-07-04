
#include <stdio.h>
#include <string.h>
int main()
{
    
   printf("Scanf() Example\n");  
   printf("------------------------------------\n");  
   
    printf("two number input \n");  
  
    int a,b,c;
    printf("First No:");
    scanf("%d",&a);
    printf("Second No:");
    scanf("%d",&b);
  
    c = a + b;
    printf("Additon two number:%d\n",c);  
   
  
 
 
     printf("------------------------------------\n");  
 
    printf("Formatted input in scanf()\n"); 
 
    int x;
    printf("Input:");
    scanf("%d",&x);
    printf("The Value of x is %d.\n",x);


    int i,j,k;
    int num;
    printf("Input Three No:\n");
    num = scanf("%d %d %d",&i, &j, &k); 
    printf("Total input Typed:%d.\n",num);
    
    printf("------------------------------------\n");  
  
    printf("print next Character Three character \n");  
  
     char d,e,f;
     printf("Input three Character \n");  
     scanf("%c%c%c",&d,&e,&f);
     d++;
     e++;
     f++;
         
    printf(" Print Next Three Character: ch1=%c ch2=%c  ch3=%c ",d,e,f);
    printf("\n");
    printf("\n");  
    printf("------------------------------------\n");  
    printf("How Much Piggi Bank 50,25,20,10,5 paise coin\n");
   
    float coin1=0.50,coin2=0.25,coin3=0.20,coin4=0.10,coin5=0.05,total=0.0;
    int ncoins;
    
    printf("How Many 50 paise Coins:"); 
    scanf("%d",&ncoins); 
    total += (ncoins*coin1);
    printf("*** %.2f ***\n",total);
   
    printf("How Many 25 paise Coins:"); 
    scanf("%d",&ncoins); 
    total += (ncoins*coin2);
    printf("*** %.2f ***\n",total);
   
   printf("How Many 20 paise Coins:"); 
    scanf("%d",&ncoins); 
    total += (ncoins*coin3);
    printf("*** %.2f ***\n",total);
   
   printf("How Many 10 paise Coins:"); 
    scanf("%d",&ncoins); 
    total += (ncoins*coin4);
    printf("*** %.2f ***\n",total);
   
   printf("How Many 5 paise Coins:"); 
    scanf("%d",&ncoins); 
    total += (ncoins*coin5);
     
    printf("Total Piggi Bank RS:%2.f\n",total); 
    
    printf("\n");  

    printf("Total Coins:\n"); 
       
    int nc1,nc2,nc3,nc4,nc5,temp;
    float total2;
    
    printf("Total Piggi bank RS.");
    scanf("%f",&total2);
    
    temp = total2 * 100;
    nc1 = temp / 50;
    temp = temp % 50;
    
    nc2 = temp / 25;
    temp = temp % 25;   
   
    nc3 = temp / 20;
    temp = temp % 20;   
   
    nc4 = temp / 10;
    temp = temp % 10;
    
    nc5=temp;
       
    printf("No. of 50 paise Coin=%d\n",nc1); 
    printf("No. of 25 paise Coin=%d\n",nc2); 
    printf("No. of 20 paise Coin=%d\n",nc3); 
    printf("No. of 10 paise Coin=%d\n",nc4); 
    printf("No. of 5 paise Coin=%d\n",nc5); 
    
    printf("\n");
    printf("\n");  
    printf("------------------------------------\n");  
  
    printf("Computing Product Cost Example\n");  
    
    int quantity,day,month,year;
    float cost,total3;
    int product;
 
    printf("Enter Quantity:");
    scanf("%d",&quantity);
 
    printf("Enter Cost:");
    scanf("%f",&cost);
    total3 = cost * quantity;
 
    printf("Enter Product No:");
    scanf("%d",&product);

     printf("Enter Date dd/mm/yyyy:");
     scanf("%d/%d/%d",&day,&month,&year);
     
     month+=1;
     if((month)>12)
     {
        month = 1; 
        year++;
     }   
     printf("Product id=%d dd/mm/yyyy=%d/%d/%d total=%6.2f\nSS",product,day,month,year,total3);
   return 0;
}
