#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node* next;
}node;


node* head = NULL;

void insertAtHead(int val)
{
    node* newNode = (node*)malloc(sizeof(node));
    newNode->data = val;
    if(head==NULL)
    {
        head = newNode;
        newNode->next = NULL;
    }
    else
    {
        node* temp = head;
        head = newNode;
        newNode->next = temp;
    }
}

void display()
{
    node* temp = head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    return ;
}

int main()
{
    insertAtHead(2);
    insertAtHead(4);
    display();
    return 0;
}