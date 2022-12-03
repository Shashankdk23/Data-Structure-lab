#include<stdio.h>
#include<stdlib.h>
#define size 3
int queue[size];
int front=-1,rear=-1;
void insert();
void delete();
void display();
void main()
{

int choice;
while(1)
  {
    printf("\n Enter the choice \n 1. insert \n 2.delete \n 3.display \n 4.exit \n");
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
        default:printf("Invalid choice");
    }
  }

}
void insert()
{
    int val;
    if(front==-0 && rear==(size-1)||front==rear+1)
    {
        printf("the circular queue is full");
    }
    else
    {
        printf("Enter the value to insert");
        scanf("%d",&val);
        if( front==-1&&rear==-1)
        {

            front=0;
            rear=0;
        }
       else{
             rear=(rear+1)%size;
       }
       queue[rear]=val;
    }
}
void delete()
{
    int d;
    if(front==-1&&rear==-1)
    {
        printf("The circular queue is empty");
    }
    else
    {
        d=queue[front];
        printf("The deleted element is %d",d);
        if(front==(rear-1))
    {
        front=-1;
        rear=-1;
    }
    else
    {
        front=(front+1)%size;
    }
    }
}
void display()
{
      int i;
      if(front==-1&&rear==-1)
    {
        printf("The circular queue is empty");
    }
      printf("The queue are :\n");
        if(front<=rear)
       {

        for(i=front;i<=rear;i++)
        printf("%d \n",queue[i]);
        }
        else
        {
         for(i=front;i<=(size-1);i++)
         {
             printf("%d \n",queue[i]);
         }

         for(i=0;i<=rear;i++)
            {
            printf("%d \n",queue[i]);
         }


    }
}
