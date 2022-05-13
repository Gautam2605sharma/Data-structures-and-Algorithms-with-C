#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
void push(int);
void pop();
void display();
int stack[SIZE],top=-1;
int value,choice;
void main(){
   
 while(1){
   printf("Choose option\n");
   printf("1.push\n2.pop\n3.display\n4.exit\n");
   scanf("%d",&choice);
 switch (choice)
 {
 case 1: printf("Enter the value to insert = ");
 scanf("%d",&value);
 push(value);
    break;
 
 case 2:pop();
    break;
 case 3: display();
 break;
 case 4: exit(0);
 default: printf("wrong choice ");   
 }
 } 

}
void push(int value){
   if(top==SIZE-1)
   printf("stack is full\n");
   else{
      top=top+1;
      stack[top]= value;
      printf("Insertion is done\n");


   }
}
void pop(){
   if(top==-1)
   printf("stack is empty\n");
   else{
      printf("deleted item =%d\n",stack[top]);
      top=top-1;
   }
}
void display(){
   if (top==-1)
   {
    printf("stack is empty\n");
    
   }
   else{
      int i;
      for ( i = top; i >=0; i--)
      
      {
        printf("%d\n",stack[i]);
      }
      
   }
   
}
