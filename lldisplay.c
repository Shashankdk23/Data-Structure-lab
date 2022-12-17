#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

void create();
void display();
struct Node
{
    int data;
    struct Node *link;
};
typedef struct Node node;
node *start=NULL;
void create()
{
    int c;
    node *new,*curr;
    start=(node *) malloc(sizeof(node));
    curr=start;
    printf("Enter element\n");
    scanf("%d",&start->data);
    while(1)
    {
        printf("Do you want to add another element(1/0)\n");
        scanf("%d",&c);
        if(c==1)
        {
            new=(node *) malloc(sizeof(node));
            printf("Enter element\n");
            scanf("%d",&new->data);
            curr->link = new;
            curr=new;
        }
        else
        {
            curr->link=NULL;
            break;
        }
    }
}
void display()
{
    node *temp;
    temp=start;
    if(start==NULL)
    {
        printf("Linked list is empty\n");
        return;
    }

    else{
               printf("Linked list elements are:\n");
    while(temp!=NULL)
    {
        printf("%d \t",temp->data);
        temp = temp->link;
    }
    }
}

void main()
{
    int ch;
    while(1)
    {
        printf("\n1.Create 2.Display 3.Exit");
        printf("\nEnter your choice:\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;

        case 3:
            exit(0);

        default:
            printf("Invalid choice\n");
        }
    }
}
