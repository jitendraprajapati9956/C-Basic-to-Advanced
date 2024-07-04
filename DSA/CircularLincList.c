#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head = NULL;
void display(){
    struct node *ptr = head;
    if(head == NULL)
        printf("list is empty");
    else{
        while(ptr->next != head){
            printf(" %d ",ptr->data);
            ptr = ptr->next;
            }
            printf("%d",ptr->data);
        }   
        printf("\n"); 
}
void insert_end(){
    int val;
        printf("enter value insert:");
        scanf("%d",&val);
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
        temp->data = val;
    if(head == NULL){
        head = temp;
        temp->next=head;
        return;
    }
    while(ptr->next != head)
        ptr = ptr->next;
        ptr->next = temp;
        temp->next = head;
        return;
}
void delete_end(){
    struct node *ptr = head;
    struct node *p;
    if(head->next==NULL){
        head=NULL;
        free(ptr);
        return;
    }
    while(ptr->next!=head){
        p=ptr;
        ptr=ptr->next;
    }
    p->next=ptr->next;
    free(ptr);
}
void first_insert(){
    int val;
        printf("enter value insert:");
          scanf("%d",&val);
        struct node *ptr = head;
        struct node *temp = malloc(sizeof(struct node));
        temp->data = val;
    if(head == NULL){
        head = temp;
        temp->next=head;
        return;
        }
    while(ptr->next != head)
        ptr = ptr->next;
        ptr->next = temp;
        temp->next = head;
        head = temp;
        return;
}
void first_delete(){
    struct node *ptr=head;
    struct node *p= head;
    while(ptr->next!=head)
        ptr = ptr->next;
        ptr->next=p->next;
        head=p->next;
        free(p);
        return;
}
void mid_insert(){
    int position;
       printf("Enter position to Insert: ");
       scanf("%d", &position);

    int val;
       printf("Enter val to Insert: ");
       scanf("%d", &val);

    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
       temp->data=val;

    while(ptr->data!=position)
        ptr=ptr->next;
        temp->next=ptr->next;
        ptr->next=temp;
}
void mid_delete(){
    int position;
        printf("Enter position to Insert: ");
        scanf("%d", &position);
    struct node *p;
    struct node *ptr = head;
    while(ptr->data!=position){
            p=ptr;
            ptr=ptr->next;
        }
        p->next = ptr->next ;
        free(ptr); 
}                
int main(){
    int ch;
    do{
        printf("\nPress 1 if insert_end\n");
        printf("Press 2 if delete_end\n");
        printf("Press 3 if first_insert\n");
        printf("Press 4 if first_delete\n");
        printf("Press 5 if mid_insert\n"); 
        printf("Press 6 if mid_delete\n"); 
        printf("press 9 if display array");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                insert_end();
                break;
           case 2:
                delete_end();
                break;
           case 3:
                first_insert();
               break;
           case 4:
                first_delete();
                break; 
           case 5:
                mid_insert();
                break;
           case 6:
                mid_delete();
                break;         
            case 9:
                display();
                break;
            default:
                printf ("\n\t Please Enter a Valid Choice(1/3/5/6/9)");
                break;   
        }
    }while(ch!=0);
}