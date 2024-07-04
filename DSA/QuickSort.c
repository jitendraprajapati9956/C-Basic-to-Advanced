#include<stdio.h>
#include<stdlib.h>
int n;
void print(int a[1]){
    int i;
    printf("\n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}
void Quicksort(int a[], int first, int last){
    int i, j, temp, pivot;
    if(first<last){
        print(a);
        pivot=first;
        i=first, j=last;
        while(i<j){
            while(a[i]<a[pivot] && i<last)
            i++;
            while(a[i]>a[pivot])
            j--;
            if(i<j){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            temp=a[pivot];
            a[pivot]=a[j];
            a[j]=temp;

            Quicksort(a,first,j-1);//last side
            Quicksort(a,j+1,last);//right side
        }
    }
}
int main(){
    int a[25], i;
   // int a[]={60,10,40,70,50,20,80,30,90};
    printf("How Many Elymant Enter : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
       a[i]=rand()%100+1;
    //print(a);
    Quicksort(a,0,n-1);
    printf("\nAfter Quick sort : ");
    print(a);
}