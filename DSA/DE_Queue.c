#include <stdio.h>
#define n 5
int a[n], f = -1, r = -1;

int Display()
{
    if (f < 0)
        printf("Queue is Now Empty...");
    else
    {
        for (int i = f; i <= r; i++)
        {
            printf("%d   ", a[i]);
        }
    }printf("\n");
}

//          Last In Last Out

int InsertEnd()
{
    int val;
    if (r >= n - 1)
        printf("\n\tQueue is Full...\n");
    else if (r < 0)
    {
        printf("Enter Value : ");
        scanf("%d", &val);
        f = r = 0;
        a[r] = val;
    }
    else
    {
        printf("Enter Value : ");
        scanf("%d", &val);
        r++;
        a[r] = val;
    }
}

int DeleteEnd(){
    if (r < 0)
    {
        printf("\n\tQueue is Empty..\n");
    }
    else if (r == f)
    {
        f = r = -1;
    }
    else
    {
        r--;
    }
}

//       First In First Out

int InsertFirst(){
    int val;
    if (f < 0)
    {
        printf("Enter Value : ");
        scanf("%d", &val);
        f = r = 0;
        a[f] = val; 
    }else if(f == 0){
        printf("\n\tNot Added this Position...\n");
    }else
    {
        printf("Enter Value : ");
        scanf("%d", &val);
        f--;
        a[f] = val;
    }
}

int DeleteFirst()
{
    if (f < 0)
    {
        printf("\n\tQueue is Empty..\n");
    }
    else if (f == r)
    {
        f = r = -1;
    }
    else
    {
        f++;
    }
}

int main()
{
    int ch;
    do
    {
        printf("\n\t   (Note:Last Insert / Last Delete)");
        printf("\n\t1 -> Insert End");
        printf("\n\t2 -> Delete End");
        
        printf("\n\t   (Note:First Insert / First Delete)");
        printf("\n\t3 -> Insert First");
        printf("\n\t4 -> Delete First");

        printf("\n\t5 -> Display");
        printf("\n\t0 -> Exit");

        printf("\n\nEnter Your Choice : ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            InsertEnd();
            break;
        case 2:
            DeleteEnd();
            break;
        case 3:
            InsertFirst();
            break;
        case 4:
            DeleteFirst();
            break;
        case 5:
            printf("\n\tQueue is : ");
            Display();
            break;
        case 0:
            break;
        default:
            printf("\n\tEnter Valid Choice..");
            break;
        }
    } while(ch!=0);
}