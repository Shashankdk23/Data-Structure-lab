#include <stdio.h>
#include <malloc.h>

struct NODE
{
    int data;
    struct NODE *link;
};
typedef struct NODE node;
node *start = NULL;

//node* create();
//void create1();
//void create2();
//void sort();
//void conc();
//void reverse();
//void display();

node* create()
{
    int c;
    node *new, *curr;
    start = (node *)malloc(sizeof(node));
    curr = start;
    printf("Enter element\n");
    scanf("%d", &start->data);
    while (1)
    {
        printf("Do you want to add another element(Yes=1/No=0)\n");
        scanf("%d", &c);
        if (c == 1)
        {
            new = (node *)malloc(sizeof(node));
            printf("Enter element\n");
            scanf("%d", &new->data);
            curr->link = new;
            curr = new;
        }
        else
        {
            curr->link = NULL;
            break;
        }
    }
    return start;
}

void sort(node* start)
{
    node *temp, *a, *b;
    if (start == NULL)
    {
        printf("Linked List is empty");
        return;
    }

    int t, n, count;
    temp = start;
    count = 1;
    while (temp->link != NULL)
    {
        temp = temp->link;
        count++;
    }
    n = count;
    a = start;
    b = start->link;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a->data > b->data)
            {
                t = a->data;
                a->data = b->data;
                b->data = t;
            }
            a = b;
            b = b->link;
        }
        a = start;
        b = start->link;
    }
     printf("The sorted elements are:\n");
    display(start);
}

void reverse(node* start)
{
    node *a, *b = NULL, *c;
    a = start;
    while (a != NULL)
    {
        c = b;
        b = a;
        a = a->link;
        b->link = c;
    }
    start = b;
     printf("The reversed elements are:\n");
    display(start);
}

void display(node* start)
{
    node *temp;
    if (start == NULL)
    {
        printf("\nLinked list is empty\n");
        return;
    }
    temp = start;
    printf("\nCONTENTS\n");
    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->link;
    }
    printf("\n");
}

void conc(node* start1,node* start2)
{
    if (start1 == NULL)
    {
        start = start2;
        return;
    }
    if (start2 == NULL)
    {
        start = start1;
        return;
    }
    node *temp = start1;
    while (temp->link != NULL)
    {
        temp = temp->link;
    }
    temp->link = start2;
    start = start1;
    printf("The concatenated elements are:\n");
    display(start);
}

void main()
{
    int n;
    while (1)
    {
        printf("\n1.create\n2.sort\n3.reverse\n4.Conc\n5.display\n6.Exit\nEnter your choice: ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            create();
            break;
        case 2:
            sort(start);
            break;
        case 3:
            reverse(start);
            break;
        case 4:
            printf("create the first LL");
            node* start1=create();
             printf("create the second LL");
            node* start2=create();
            conc(start1,start2);
            break;
        case 5:
            display(start);
            break;
        case 6:
            exit(0);
            break;
        default:
            printf("Invalid choice");
            break;
        }
    }
}
