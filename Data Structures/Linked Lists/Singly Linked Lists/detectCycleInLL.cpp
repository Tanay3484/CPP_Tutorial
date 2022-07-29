// Function to detect cycle in a linked list
//This works on the basis of Floyd's Cycle Detection Algorithm. For more information about the algorithm : https://www.geeksforgeeks.org/floyds-cycle-finding-algorithm/
#include <iostream>

using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val = 0)
    {
        data = val;
        next = NULL;
    }
};

bool detectCycle(node *&head)
{
    node *slow = head;
    node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
            return true;
    }
    return false;
}

void removeLoop(node *&head)
{
    /*This marks the start of finding the location of the loop*/
    node *slow = head;
    node *fast = head;

    do
    {
        slow = slow->next;
        fast = fast->next->next;
    } while (slow != fast);

    /* This marks the end of finding the location of the loop */
    //------------------------------------------------------------
    /*This marks the start of removing the loop*/
    fast = head;
    while(slow->next != fast->next){
        slow = slow->next;
        fast = fast->next;
    }

    slow->next = NULL;
    /*This marks the end of removing the loop*/
}