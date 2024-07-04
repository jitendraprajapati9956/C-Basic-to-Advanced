#include <stdio.h>
#include <limits.h>  //constant 
#include <complex.h> // complex number

int main()
{
    
   // Printing on the screen
       printf("Topic_1_Printing on the screen----> \n");
       printf("Hello Jitendra \n");
       printf("\n");


       printf("Topic_2_Data Types-----> \n");
         char c= 'J';
       printf("character= %c \n", c);
        
         int a =45;
       printf("Integer= %d \n", a);
       	
        float f=3.14;
       printf("Float = %f \n", f);
       
        double d =3.145978465;
       printf("double= %lf \n",d );
       
        printf("Void=  \n");
      
        const int b=22;
        printf("Const Integer= %d \n", b);
        // const b= 44;
       //  printf("Const Integer Change= %d \n", b);
       printf("Constant variable cannot be use. read only \n");
       printf("\n");
      
       printf("Size of Minimum and Maximum in Datatype\n");
       
       printf("Character:\n");   
       printf("Bits In a Character--> %d ",CHAR_BIT);   
       printf("\n");
       printf("Min-->[%d] and <--Max=[%d] \n",CHAR_MIN,CHAR_MAX);   
       printf("Signed_Min-->[%d] and <--Max=[%d] \n",SCHAR_MIN,SCHAR_MAX);   
       printf("UnSigned_Max=[%u]",UCHAR_MAX);   
       printf("\n");
       printf("\n");

       printf("Integer:\n");   
       printf("Min-->[%d] and <--Max=[%d] \n",INT_MIN,INT_MAX);   
       printf("UnSigned_Max=[%u]",UINT_MAX);   
       printf("\n");
       printf("\n");

       printf("Long:\n");   
       printf("Min-->[%ld] and <--Max=[%ld] \n",LONG_MIN,LONG_MAX);   
       printf("UnSigned_Max=[%lu]",ULONG_MAX);   
       printf("\n"); 
       printf("\n"); 

 
       printf("Short:\n");   
       printf("Signed_Min-->[%d] and <--Max=[%d] \n",SHRT_MIN,SHRT_MAX);   
       printf("UnSigned_Max=[%d]",USHRT_MAX);        
       printf("\n");
       printf("\n");

       
       printf("Operator------->\n");
       int first =12;
       int second =23;
       float third =3.14;
       float fourth=3.14;
       int add,sub,mul,div;
       float add2,sub2,mul2,div2;
       
       printf("Arithmetic operator:\n"); 
       printf("Integer:\n"); 
       
       add = first+second;
       printf("Addition_a + b = %d\n",add);
       sub = first-second;
       printf("Subtraction_a - b = %d\n",sub);
       mul = first*second;
       printf("Multiplication_a * b = %d\n",mul);
       div = first/second;
       printf("Division_a / b = %d\n",div);
        
       printf("Float:\n"); 
       add2 = third+fourth;
       printf("Addition_a + b = %f\n",add2);
       sub2 = third-fourth;
       printf("Subtraction_a - b = %f\n",sub2);
       mul2 = third*fourth;
       printf("Multiplication_a * b = %f\n",mul2);
       div2 = third/fourth;
       printf("Division_a / b = %f\n",div2);
             
       int increment = 1;
       printf("Prefix Increment = %d\n",++increment);
       printf("Postfix Increment = %d\n",increment++);
       
       int decrement = 2;
       printf("Prefix decrement = %d\n",--decrement);
       printf("Postfix decrement = %d\n",decrement--);
       printf("\n");
       printf("\n");
       
       printf("Relational operator:\n"); 
       printf("Equal(==)  :%d\n",first == second);
       printf("NotEqual(!=) :%d\n",first != second);
       printf("Lessthan(<) :%d\n",first < second);
       printf("Lessthan_OrEqual(<=)  :%d\n",first <= second);
       printf("Greaterthan_OrEqual(>=) :%d\n",first >= second);
       printf("Greaterthan(>) :%d\n",first > second);
       printf("\n");
    
       printf("Logical operator:\n"); 
       printf("AND(&&)  :%d\n",first < second && second < second);
       printf("<--Left Operand is False and right Operand Not see (&&)-->\n"); 
       printf("OR(||) :%d\n",first < first || second <first);
       printf("<--Left Operand is True and right Operand Not see (||)-->\n"); 
       printf("<--(&&) and (||) Left to Right associativity-->\n"); 
       printf("NOT(!) :%d\n",!(first == first));
       printf("\n");
       
       printf("Bitwise operator:\n"); 
       printf("Not(~)  :%d\n",~first);
       printf("AND(&)  :%d\n",first & second);
       printf("OR(|)  :%d\n",first | second);
       printf("(^)  :%d\n",first ^ first);
       printf("(<<)  :%d\n",first << 2);
       printf("(>>)  :%d\n",first >> 2);
       printf("\n");
           
       printf("Conditional operator:\n"); 
       int conditon = (first < second ? first : second);
       printf("First<second ? First:second  :%d\n",conditon);
       printf("\n");

       printf("Explantion-int first=12 ,second=23,condition \n " );
       printf("if(first<second) { condition=first } else condition=second \n " );
       printf("\n"); 
       
       printf("Comma operator:\n"); 
       int i=0;
       int j;
       j= (i +=4 ,i +=5, i +6);
       printf("(i +=4 ,i +=5, i +6) :%d \n",j);
       printf("Explantion- comma operator left to right precendence first 'i +=4' 4 is add 'i +=5' 4+5=9 is    add 'i + 6'  4+5+6=15 is add\n " );
  printf("\n"); 
           
 int m=1;
  int n;
  n =(m=m+3,m%3);
   printf("n: (m=m plus 3 comma m module 3)\n");
   printf("n:%d \n",n);
   printf("Explantion- comma operator left to right precendence first m plus 3 = 4 is add m module 3 4module3=1 \n " );
   printf("\n");
   
   
   printf("Sizeof Operator:\n");
   
   printf("char size = %ld bytes \n ",sizeof(char));
   printf("short size = %ld bytes \n ",sizeof(short));
   printf("int size = %ld bytes \n ",sizeof(int));
   printf("long size = %ld bytes \n ",sizeof(long));
   printf("float size = %ld bytes \n ",sizeof(float));
   printf("double size = %ld bytes \n ",sizeof(double));
   printf("1.55 size = %ld bytes \n ",sizeof(1.55));
   printf("1.55L size = %ld bytes \n ",sizeof(1.55L));
   printf("HELLO size = %ld bytes \n ",sizeof("HELLO"));
   printf("\n");
      
   printf("Precedence of Operator:\n");
   int precedence;
   int two = 4;
   int three = 8;
   int four = 2;
   int five = 4;
   int six = 2;
   
   precedence = two + three / four + five * six;
   printf("two + three / four + five * six:\n");
   printf("Precedence =%d \n",precedence);
   
   
   precedence = (two + three) / four + five * six;
   printf("(two + three) / four + five * six:\n");
   printf("Precedence =%d \n",precedence);
 
   precedence = two + three / ((four + five ) * six);
   printf("two + three / ((four + five ) * six):\n");
   printf("Precedence =%d \n",precedence);
   printf("\n");
 
 
   printf("Type Conversion:\n");
   
   char ch = 'A';
   int  innt = 15;
   float  ft = 3.14;
   double doublee = 3.145980,type;
  
   type = ( ch * innt) + (ft / innt ) - (ft + doublee);  
   printf("%.2f\n",type);
   
  
  printf("\nExplain Type Conversion:\n");
   type = ( ch * innt);
   printf("%.2f\n",type);
   
   type =  (ft / innt);
   printf("%.2f\n",type);
   
   type =  (ft + doublee);
   printf("%.2f\n",type);
   
    printf("--------------------------------\n "); 
   printf("Conversion of Floting and integer type\n ");
  
   double x;
   int ii;
   
   ii=1400;
   x= ii;
   
   printf("conversion from int to double x =%10.6le i =%d\n",x,i);
   
   x = 14.999;
   
   ii = x;
   
   printf("conversion from double to int  x =%10.6le i =%d\n",x,i);
  
    x= 1.0e+60; //large number
    
    i = x;
    
   printf("conversion from double to int  x =%10.6le i =%d\n",x,i);
 
   
    printf("------------------------------------------- \n "); 
  
   
    printf("Working With Complex Number \n "); 
  
    double complex cx = 3.2 +3.0*I;
   
    double complex cy = 5.0 - 4.0*I;
  
   printf("Starting Values: cx =%g  + %gi , cy =%g + %gi\n",creal(cx),cimag(cx),creal(cy),cimag(cy));
  
   
  
   return 0;
}
