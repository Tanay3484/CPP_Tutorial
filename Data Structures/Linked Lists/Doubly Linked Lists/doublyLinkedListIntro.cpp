// In a doubly linked list each node consists of two pointers: next and prev.

#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;

    node(int val = 0)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

int main()
{
    node* head;
    node* first = new node(5);
    node* second = new node(6);
    node* third = new node(7);
    head = first;
    first->prev = NULL;
    first->next = second;
    second->prev = first;
    second->next = third;
    third->prev = second;
    third->next = NULL;
}