#include<stdio.h>
#include<stdlib.h>
void main()
{
  struct node{
          int data;
          struct node *next;
  };
  struct node *newnode,*temp,*head;
head=0;
int choice;
printf("Do you want to continue(0,1)\n");
scanf("%d",&choice);
if(choice==0)
{


newnode= (struct node*)malloc(sizeof(struct node));
printf("Enter data = ");
scanf("%d",&newnode->data);
newnode->next=0;
while(choice){
if(head==0)
{
        head=newnode=temp;
}
else{
        temp->next=newnode;
        temp=newnode;
}

temp=head;
}

}
else{
        exit(0);
}
}