#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
} node;

node* head = NULL;

int listLength(node *head)
{
    int count = 0;
    node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void insertAtHead(int val)
{
    node *newNode = (node *)malloc(sizeof(node));
    newNode->data = val;
    if (head == NULL)
    {
        head = newNode;
        newNode->next = NULL;
        newNode->prev = NULL;
    }
    else
    {
        node *temp = head;
        head = newNode;
        newNode->next = temp;
        temp->prev = newNode;
        newNode->prev = NULL;
    }
}

void insertAtTail(int val)
{
    node *newNode = (node *)malloc(sizeof(node));
    if (head == NULL)
    {
        head = newNode;
        newNode->data = val;
        newNode->next = NULL;
        newNode->prev = NULL;
        return;
    }
    else
    {
        node *temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
        newNode->prev = temp;
        newNode->next = NULL;
        newNode->data = val;
        return;
    }
}

void insertAtPosition(int val, int pos)
{
    if (pos == 1)
    {
        insertAtHead(val);
        return;
    }
    else if (pos == listLength(head) + 1)
    {
        insertAtTail(val);
        return;
    }
    else if (pos > 1 && pos <= listLength(head))
    {
        node *newNode = (node *)malloc(sizeof(node));
        newNode->data = val;
        node *temp = head;
        for (int i = 1; i < pos - 1; i++)
            temp = temp->next;
        newNode->next = temp->next;
        temp->next->prev = newNode;
        temp->next = newNode;
        newNode->prev = temp;
        return;
    }
    else
    {
        printf("Invalid position");
        return;
    }
}

void deleteAtHead()
{
    if (head == NULL)
    {
        printf("List is empty");
        return;
    }
    else
    {
        node *temp = head;
        head = temp->next;
        head->prev = NULL;
        temp->prev = NULL;
        temp->next = NULL;
        printf("Deleted : %d", temp->data);
        free(temp);
        temp = NULL;
        return;
    }
}

void deleteAtTail()
{
    if (head == NULL)
    {
        printf("List is empty");
        return;
    }
    else
    {
        node *temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        node *prevNode = temp->prev;
        prevNode->next = NULL;
        temp->prev = NULL;
        printf("Deleted : %d", temp->data);
        free(temp);
        temp = NULL;
        return;
    }
}

void deleteAtPosition(int pos)
{
    if (pos == 1)
    {
        deleteAtHead();
        return;
    }
    else if (pos == listLength(head))
    {
        deleteAtTail();
        return;
    }
    else if (pos > 1 && pos < listLength(head))
    {
        node *temp = head;
        for (int i = 1; i < pos; i++)
            temp = temp->next;
        node *prevNode = temp->prev;
        node *nextNode = temp->next;
        prevNode->next = nextNode;
        nextNode->prev = prevNode;
        temp->prev = NULL;
        temp->next = NULL;
        printf("Deleted : %d", temp->data);
        free(temp);
        temp = NULL;
        return;
    }
    else
    {
        printf("Invalid position");
        return;
    }
}

void display()
{
    if (head == NULL)
    {
        printf("NULL");
        return;
    }
    else
    {
        node *temp = head;
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
        return;
    }
}

int main()
{
    insertAtHead(1);
    insertAtTail(2);
    insertAtTail(3);
    insertAtPosition(4, 2);
    insertAtTail(5);
    display();
    printf("\n");
    deleteAtHead();
    printf("\n");
    display();
    printf("\n");
    deleteAtTail();
    printf("\n");
    display();
    printf("\n");
    insertAtTail(6);
    deleteAtPosition(3);
    printf("\n");
    display();
    printf("\n");
    return 0;
}
