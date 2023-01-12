#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void display();
void delend();
void delfrnt();
//void delpos();

struct node{
    int data;
    struct node *next;
};
int size;
struct node *head,*newnode,*temp;
void main(){
    int ch,i;
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
    while(ch=-1){
    printf("\nEnter choice\n1.deletion at frnt\n2.deletion at position\n3.deletion at end\n4.Display\n");
    scanf("%d",&ch);
    switch(ch){
        case 1:
            delfrnt();
            break;
       // case 2:
       //
        //delpos();
        //   break;
        case 3:
            delend();
            break;
        case 4:
            display();
            break;
    }
    }

    getch();
}
void delfrnt(){
    temp=head;
    head=head->next;
    free(temp);
}
void display(){
        temp=head;
    printf("Inserted data ");
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
void delend(){
    struct node *prevnode;
    temp=head;
    while(temp->next!=0){
        prevnode=temp;
        temp=temp->next;
    }
    if(temp==head){
        head=0;
        free(temp);
    }
    else{
        prevnode->next=0;
        free(temp);
    }
}
