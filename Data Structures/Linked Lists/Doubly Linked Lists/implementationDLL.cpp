// Full implementation of Doubly Linked Lists in C++

#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *prev;
    node *next;

    node(int val = 0)
    {
        data = val;
        prev = NULL;
        next = NULL;
    }
};

int listLength(node* &head)
{
    node* temp = head;
    int count = 0;
    while(temp!=NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
}

void insertAtHead(node* &head,int val)
{
    node* newNode = new node(val);
    if(head==NULL)
    {
        head = newNode;
        newNode->next = NULL;
        newNode->prev = NULL;
        return ;
    }
    else
    {
        node* temp = head;
        head = newNode;
        newNode->next = temp;
        temp->prev = newNode;
        newNode->prev = NULL;
        return ;
    }
}

void insertAtTail(node* &head,int val)
{
    node* newNode = new node(val);
    if(head==NULL)
    {
        head = newNode;
        newNode->next = NULL;
        newNode->prev = NULL;
        return ;
    }
    else
    {
        node* temp = head;
        while(temp->next!=NULL)
            temp = temp->next;
        temp->next = newNode;
        newNode->prev = temp;
        newNode->next = NULL;
        return ;
    }
}

void insertAtPosition(node* &head,int val,int n)
{
    if(n==1)
        insertAtHead(head,val);
    if(n>listLength(head)+1)
        cout<<"Invalid position entered"<<endl;
    else if(n == listLength(head)+1)
        insertAtTail(head,val);
    else
    {
        node* newNode = new node(val);
        node* temp1 = head;
        for(int i = 1;i<n-1;i++)
            temp1 = temp1->next;
        node* temp2 = temp1->next;
        temp1->next = newNode;
        newNode->prev = temp1;
        newNode->next = temp2;
        temp2->prev = newNode;
        return ;
    }
}

void deleteAtHead(node* &head)
{
    if(head==NULL)
    {
        cout<<"List is empty"<<endl;
        return ;
    }
    else
    {
        node* temp = head;
        head = temp->next;
        head->prev = NULL;
        temp->prev = NULL;
        temp->next = NULL;
        cout<<"Deleted : "<<temp->data<<endl;
        delete temp;
        temp  = NULL;
        return ;
    }
}

void deleteAtTail(node* &head)
{
    if(head==NULL)
    {
        cout<<"List is empty"<<endl;
        return ;
    }
    else
    {
        node* temp = head;
        while(temp->next!=NULL)
            temp = temp->next;
        node* prevNode = temp->prev;
        prevNode->next = NULL;
        temp->prev = NULL;
        cout<<"Deleted : "<<temp->data<<endl;
        delete temp;
        temp = NULL;
        return ;
    }
}

void deleteAtPosition(node* &head,int n)
{
    if(head==NULL)
    {
        cout<<"List is empty"<<endl;
        return ;
    }
    if(n==1)
    {
        deleteAtHead(head);
        return ;
    }
    if(n == listLength(head))
    {
        deleteAtTail(head);
        return ;
    }
    if(n>listLength(head))
    {
        cout<<"Invalid position"<<endl;
        return;
    }
    else
    {
        node* temp1 = head;
        for(int i = 1;i<n-1;i++)
            temp1 = temp1->next;
        node* temp2 = temp1->next;
        node* temp3 = temp1->prev;
        temp3->next = temp2;
        temp2->prev = temp3;
        temp1->next = NULL;
        temp1->prev = NULL;
        cout<<"Deleted : "<<temp1->data<<endl;
        delete temp1;
        temp1 = NULL;
        return ;
    }
}

void display(node* &head)
{
    if(head==NULL)
    {
        cout<<"NULL"<<endl;
        return ;
    }
    else
    {
        node* temp = head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
        return ;
    }
}

int main()
{
    node* head = NULL;
    insertAtHead(head,1);
    insertAtTail(head,2);
    insertAtPosition(head,3,2);
    display(head);
    deleteAtHead(head);
    display(head);
    insertAtTail(head,4);
    insertAtTail(head,10);
    display(head);
    deleteAtPosition(head,3);
    display(head);
    return 0;
}