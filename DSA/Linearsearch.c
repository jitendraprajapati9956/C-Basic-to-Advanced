#include<stdio.h>
#include<stdlib.h>
#define n 10
int a[n], i, value;
int linear(int a[], int val){
    for(i=0;i<=n;i++){
        if(value==a[i])
        break;
    }
    if(i<n)
        printf("\nIndex Array Number is : %d",i);
    else
        printf("\nNot Match Search Elemant...");
}
int main(){
    for(i=0;i<n;i++){
        a[i]=rand()%100;
        printf("%d:[%d]\t",i,a[i]);
    }
    printf("\n\nenter search value : ");
    scanf("%d",&value);
    linear(a,value);
}