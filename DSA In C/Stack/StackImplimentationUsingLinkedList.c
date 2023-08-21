#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *top = NULL;

void push(int value)
{
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = value;

    if (top == NULL)
    {
        newNode->next = NULL;
        top = newNode;
    }
    else
    {
        newNode->next = top;
        top = newNode;
    }
}

void pop()
{
    if (top == NULL)
    {
        printf("Deletion isn't possible. ");
        return;
    }
    else
    {
        struct node *temp;
        struct node *temp1;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }

        temp1 = temp->next;
        temp->next = NULL;
        printf("your delete data is %d.", temp1->data);
        free(temp1);
    }
}

void display()
{
    struct node *temp;
    if (top == NULL)
        printf("\nStack is Empty!!!\n");
    else
    {
        struct node *temp = top;
        while (temp->next != NULL)
        {
            printf("%d--->", temp->data);
            temp = temp->next;
        }
        printf("%d--->NULL", temp->data);
    }
}

int main()
{
    int value, choise;
    printf("1. Insert Data.\n");
    printf("2. Delete Data.\n");
    printf("3. Display Stack.\n");

    while (1)
    {
        printf("Enter your choise : ");
        scanf("%d", &choise);
        switch (choise)
        {
        case 1:
            printf("Enter a value : ");
            scanf("%d", &value);
            push(value);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        default:
            break;
        }
    }
    return 0;
}