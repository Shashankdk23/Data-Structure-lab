 #include <malloc.h>
#include <stdlib.h>

void main()
{
    struct node
    {
        int num;
        struct node *ptr;
    };
    typedef struct node NODE;

    NODE *new, *first, *temp = 0;
    int count = 0;
    int choice = 1;
    first = 0;

    while (choice)
    {
        new  = (NODE *)malloc(sizeof(NODE));
        printf("Input data for linked list\n");
        scanf("%d", &new-> num);
        if (first != 0)
        {
            temp->ptr = new;
            temp = new;
        }
        else
        {
            first = temp = new;
        }
        printf("Do you want to continue(Type 0 or 1)?\n");
        scanf("%d", &choice);

    }
    temp->ptr = 0;

    temp = first;
    printf("\n inputs of the linked list is\n");
    while (temp != 0)
    {
        printf("%d \t", temp->num);
        count++;
        temp = temp -> ptr;
    }
    printf("\nNo. of nodes in the list = %d\n", count);
}

