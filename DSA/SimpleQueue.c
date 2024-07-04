#include<stdio.h>
#define n 5
int  f=-1, r=-1;
int a[n]; 
int display(){
    if(f<0)
        printf("\nQueue is Now Empty..");
    else{
        for(int i=f;i<=r;i++){
            printf("%d\t",a[i]);
        }
    }printf("\n");
}
int insertEnd(){
    int val;
    if(r>=n-1)
        printf("Queue is full...\n");
    else if(r<0){
        printf("Enter Value : ");
        scanf("%d",&val);
        f=r=0;
        a[r]=val;
    }
    else{
        printf("Enter Value : ");
        scanf("%d",&val);
        r++;
        a[r]=val;
    }
}
int delete(){
    if(f<0){
        printf("\n\tQueue is Empty...\n");
    }else if(f==r){
        f = r = -1;
    }else{
        f++;
    }
}
int main(){
    int ch;
    do{
        printf("\n\t1. insertEnd\n");
        printf("\t2. delete\n");
        printf("\t3. Display\n");
        printf("\n\tEnter Your Choice : ");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                insertEnd();
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
               printf("\nValid Queue...\n");
                break;
        }
    }while(ch!=0);
}