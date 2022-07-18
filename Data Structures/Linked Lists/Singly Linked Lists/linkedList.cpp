#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val=0)
    {
        data = val;
        next = NULL;
    }
};

//Calculate the length of the list
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


//Insert at the start
void insertAtHead(node* &head,int val)
{
    node* newNode = new node(val);
    if(head==NULL)
    {
        head = newNode;
        newNode->next = NULL;
        return ;
    }
    else
    {
        node* temp = head;
        head = newNode;
        newNode->next = temp;
        return ;
    }
}

//Insert at the end
void insertAtTail(node* &head,int val)
{
    node* newNode = new node(val);
    if(head==NULL)
    {
        head = newNode;
        newNode->next = NULL;
        return ;
    }
    else
    {
        node* temp = head;
        while(temp->next!=NULL)
            temp = temp->next;
        temp->next = newNode;
        newNode->next = NULL;
        return ;
    }
}


//Insert at nth position
void insertAtPosition(node* &head,int val,int n)
{
    if(n==1)
    {
        insertAtHead(head,val);
    }
    if(n>listLength(head)+1)
        cout<<"Invalid Position entered"<<endl;
    else if(n==listLength(head)+1)
    {
        insertAtTail(head,val);
    }
    else
    {
        node* newNode = new node(val);
        node* temp1 = head;
        for(int i = 1;i<n-1;i++)
            temp1 = temp1->next;
        node* temp2 = temp1->next;
        temp1->next = newNode;
        newNode->next = temp2;
        return ;
    }
}

//Delete the first node
void deleteAtHead(node* &head)
{
    node* temp = head;
    head = temp->next;
    cout<<"Deleted : "<<temp->data<<endl;
    free(temp);
    temp = NULL;
    return ;
}

//Delete the last node
void deleteAtTail(node* &head)
{
    node* temp1 = head;
    while(temp1->next!=NULL)
        temp1 = temp1->next;
    node* temp2 = temp1->next;
    temp1->next = NULL;
    cout<<"Deleted: "<<temp2->data<<endl;
    free(temp2);
    temp2 = NULL;
    return ;
}

//Delete at a given position
void deleteAtPosition(node* &head,int n)
{
    if(n==1)
    {
        deleteAtHead(head);
        return ;
    }
    if(n==listLength(head))
    {
        deleteAtTail(head);
        return ;
    }
    else
    {
        node* temp = head;
        node* prevNode = NULL;
        node* nextNode = NULL;
        for(int i = 1;i<n;i++)
        {
            prevNode = temp;
            temp = temp->next;
        }
        nextNode = temp->next;
        prevNode->next = nextNode;
        cout<<"Deleted : "<<temp->data<<endl;
        free(temp);
        temp = NULL;
    }
}

//Print the list elements
void display(node* &head)
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

int main()
{
    node* head = NULL;
    insertAtHead(head,2);
    insertAtTail(head,4);
    insertAtTail(head,6);
    insertAtPosition(head,8,3);
    display(head);
    return 0;
}