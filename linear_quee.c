
#include <stdio.h>
#include<stdlib.h>
#define size 3
int a[size],rear=-1,front=0;
void insert(){
    if(rear==(size-1))
    {
        printf("Overflow");

    }
   else
   {
       printf("\nEnter element to be inserted:");
       scanf("%d",&a[++rear]);
   }
}
void delete(){
    if(rear==-1||front==size)
    printf("\nUnderflow");
    else
    printf("\nDeleted element=%d",a[front++]);
}
void display(){
    if(rear==-1||front==size)
    printf("\nUnderflow");
    else
    printf("The elements are: ");
    for(int i=front;i<=rear;i++)
    {
        printf("%d\t",a[i]);
    }
}
int main()
{
    int choice;

    while(1){
         printf("\nEnter choice\n1.Insert\n2.Delete\n3.Display\n4.Exit");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:insert();
        break;
        case 2:delete();
        break;
        case 3:display();
        break;
        case 4:exit(0);
        default :printf("Invalid");

    }}
    return 0;
}
