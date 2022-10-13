#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main() {
    struct node{
    int data;
    struct node *next;
};
int size,ch,i;
struct node *head,*newnode,*temp;
head =0;
    printf("Enter the size:");
    scanf("%d",&size);
    printf("Enter the data\n");
    for(i=0;i<size;i++){

        newnode =(struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=0;
      
        if(head ==0){
            head =temp=newnode;
            }
        else{
            temp->next=newnode;
            temp=newnode;
            }
    }
    temp=head;
    printf("Inserted data ");
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\nEnter the data\n");
            newnode =(struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=head;
        head=newnode;
        if(head ==0){
            head =temp=newnode;
            }
        else{
            temp->next=newnode;
            temp=newnode;
            }

    temp=head;
    printf("Inserted data ");
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    /* insertion at end
    newnode->data;
    newnode->next=0;
    head=temp;

    while(temp->next!=0)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    
     */
    getch();
}
