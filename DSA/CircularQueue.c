#include<stdio.h>
#define n 5
int f=-1, r=-1;
int a[n];
int display(){
    int i=f;
    if(f<0)
        printf("\nQueue is Empty...");
    else{
        do{
            printf("%d\t",a[i]);
            i=(i+1)%n;
        }while(i!=(r+1)%n);
        //printf("%d\t",a[i]);
    }
}
int insertend(){
    int val;
    printf("Enter value : ");
    scanf("%d",&val);
    if(r<0){
        f=r=0;
        a[r]=val;
    }
    else if((r+1)%n==f)
        printf("Queue is full...");
    else{
       // printf("Enter Value : ");
       // scanf("%d",&val);
        r=(r+1)%n;
        a[r]=val;
    }
}
int delete(){
    if(f<0)
        printf("Queue is Empty...");
    else if(r==f){
        r=f=-1;
    }
    else{
        f=(f+1)%n;
       // printf("delet Queue...");
    }
}
int main(){
    int ch;
    do{
        printf("\n\t1. insertend\n");
        printf("\t2. delete\n");
        printf("\t3. Display\n");
        printf("\n\tEnter Your Choice : ");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                insertend();
                break;
            case 2:
                delete();
                break;
            case 3:
                printf("\n\t\tQueue is : ");
                display();
                break;
            case 0:
                break;
            default:
               printf("\nEnter Valid Queue...\n");
                break;
        }
    }while(ch!=0);
}