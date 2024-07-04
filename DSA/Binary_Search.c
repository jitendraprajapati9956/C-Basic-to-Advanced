#include<stdio.h>
#define n 10
int binary(int a[], int l, int h, int x){
    int mid;
    while(l<=h){
        mid=(l+h)/2;
        if(a[mid]==x)
            return mid + 1;
        else if(a[mid]<x)
            l = mid + 1;
        else
            h = mid -1;
    }
    return -1;
}
int main(){
    int a[n]={1,2,5,7,9,15,19,23,27,30},x;
    printf("Enter the Searching Elemant : ");
    scanf("%d",&x);
    int m = binary(a,0,n-1,x); 
    if(m == -1)
        printf("Elemant is not found...");
    else
        printf("Elemant is found at %d position",m);
}