#include<stdio.h>
struct node{ 
    int data;
    char ch;
    struct node *ptr;
};
int main(){
    struct node x,y;
    x.ch='A';
    x.data=65;
    x.ptr=NULL;

    y.ch='Z';
    y.data=70;
    y.ptr=NULL;
   // printf("X:\ndata:%d\tch:%c",x.data,x.ch);
   // printf("\n\nY:\ndata:%d\tch:%c",y.data,y.ch);
    
    y.ptr=&x;
    x.ptr=&y;  
     printf("X:\ndata:%d\tch:%c",y.ptr->data,y.ptr->ch);
     printf("\n\nY:\ndata:%d\tch:%c",x.ptr->data,x.ptr->ch);
}