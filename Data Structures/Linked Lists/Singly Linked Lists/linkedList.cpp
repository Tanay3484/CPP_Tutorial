// Program to demonstrate linked lists in C++ using a menu driven program

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

// Calculate the length of the list
int listLength(node *&head)
{
    node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
}

// Insert at the start
void insertAtHead(node *&head, int val)
{
    node *newNode = new node(val);
    if (head == NULL)
    {
        head = newNode;
        newNode->next = NULL;
        return;
    }
    else
    {
        node *temp = head;
        head = newNode;
        newNode->next = temp;
        return;
    }
}

// Insert at the end
void insertAtTail(node *&head, int val)
{
    node *newNode = new node(val);
    if (head == NULL)
    {
        head = newNode;
        newNode->next = NULL;
        return;
    }
    else
    {
        node *temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
        newNode->next = NULL;
        return;
    }
}

// Insert at nth position
void insertAtPosition(node *&head, int val, int n)
{
    if (n == 1)
    {
        insertAtHead(head, val);
    }
    if (n > listLength(head) + 1)
        cout << "Invalid Position entered" << endl;
    else if (n == listLength(head) + 1)
    {
        insertAtTail(head, val);
    }
    else
    {
        node *newNode = new node(val);
        node *temp1 = head;
        for (int i = 1; i < n - 1; i++)
            temp1 = temp1->next;
        node *temp2 = temp1->next;
        temp1->next = newNode;
        newNode->next = temp2;
        return;
    }
}

// Delete the first node
void deleteAtHead(node *&head)
{
    node *temp = head;
    head = temp->next;
    cout << "Deleted : " << temp->data << endl;
    delete temp;
    temp = NULL;
    return;
}

// Delete the last node
void deleteAtTail(node *&head)
{
    node *temp1 = head;
    while (temp1->next->next != NULL)
        temp1 = temp1->next;
    node *temp2 = temp1->next;
    temp1->next = NULL;
    cout << "Deleted: " << temp2->data << endl;
    delete temp2;
    temp2 = NULL;
    return;
}

// Delete at a given position
void deleteAtPosition(node *&head, int n)
{
    if (n == 1)
    {
        deleteAtHead(head);
        return;
    }
    if (n == listLength(head))
    {
        deleteAtTail(head);
        return;
    }
    else
    {
        node *temp = head;
        node *prevNode = NULL;
        node *nextNode = NULL;
        for (int i = 1; i < n; i++)
        {
            prevNode = temp;
            temp = temp->next;
        }
        nextNode = temp->next;
        prevNode->next = nextNode;
        cout << "Deleted : " << temp->data << endl;
        delete temp;
        temp = NULL;
    }
}

// Reverse linked list
// Refrence Image : https://media.geeksforgeeks.org/wp-content/cdn-uploads/RGIF2.gif
void reverseList(node *&head)
{
    node *prev = NULL;
    node *next = NULL;
    node *curr = head;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
}

// swap two nodes without swapping data
void swapNodes(node *&head, int x, int y)
{
    if (x == y)
    {
        cout << "Same nodes cannot be swapped" << endl;
        return;
    }

    // Searching for the X node
    node *prevX = NULL, *currX = head;
    while (currX && currX->data != x)
    {
        prevX = currX;
        currX = currX->next;
    }

    // Searching for the Y node
    node *prevY = NULL, *currY = head;
    while (currY && currY->data != y)
    {
        prevY = currY;
        currY = currY->next;
    }

    // Checking if X is the current head
    if (prevX != NULL)
        prevX->next = currY;
    else
        head = currY;

    // Checking if Y is the current head
    if (prevY != NULL)
        prevY->next = currX;
    else
        head = currX;

    // Swap the next pointers
    node *temp = currY->next;
    currY->next = currX->next;
    currX->next = temp;

    return;
}

//Reverse K nodes 
node* reverseK(node* &head,int k){
    node* prev = NULL;
    node* curr = head;
    node* nextPtr;

    int count = 0;
    while(curr!=NULL && count<k)
    {
        nextPtr = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextPtr;
        count++;
    }

    if(nextPtr!=NULL){
        head->next = reverseK(nextPtr,k);
    }
    return prev;
}

// Print the list elements
void display(node *&head)
{
    node *temp = head;
    if (head == NULL)
    {
        cout << "NULL" << endl;
        return;
    }
    else
    {
        while (temp != NULL)
        {
            cout << temp->data << "-->";
            temp = temp->next;
        }
        cout << "NULL";
        cout << endl;
        return;
    }
}

// Print the menu
void displayMenu()
{
    system("cls");
    cout << "\033[2J\033[1;1H"; // string sequence to clear the screen
    cout << "**************************MENU***************************" << endl;
    cout << "1. Insert element at the start" << endl;
    cout << "2. Insert element at the end" << endl;
    cout << "3. Insert element at a given position" << endl;
    cout << "4. Reverse the list" << endl;
    cout << "5. Display the list" << endl;
    cout << "6. Delete element at the start" << endl;
    cout << "7. Delete element at the end" << endl;
    cout << "8. Delete element at a given position" << endl;
    cout << "9. Swap two nodes" << endl;
    cout << "10. Exit" << endl;
    cout << "**********************************************************" << endl;
    cout << endl;
}

int main()
{
    node *head = NULL;
    int choice = 1; // dummy value for choice
    while (choice >= 1 && choice <= 10)
    {
        displayMenu();
        cout << "Enter your choice : " << endl;
        cin >> choice;
        cout << "The current list is as follows : " << endl;
        display(head);
        if (choice < 0 || choice > 10) // checking if the choice entered is correct or not
        {
            bool flag = false;
            while (flag != true)
            {
                cout << "Please enter a value of choice between 1 and 10 : ";
                cin >> choice;
                if (choice >= 1 && choice <= 10)
                    flag = true;
            }
        }

        if (choice == 1)
        {
            int val;
            cout << "Enter the value to be inserted into the list : ";
            cin >> val;
            cout << endl;
            insertAtHead(head, val);
        }
        else if (choice == 2)
        {
            int val;
            cout << "Enter the value to be inserted into the list : ";
            cin >> val;
            cout << endl;
            insertAtTail(head, val);
        }
        else if (choice == 3)
        {
            int val, position;
            cout << "Enter the value to be inserted into the list : ";
            cin >> val;
            cout << endl;
            cout << "Enter the position for this value to be inserted : ";
            cin >> position;
            cout << endl;
            insertAtPosition(head, val, position);
        }
        else if (choice == 4)
        {
            reverseList(head);
            cout << "After reversing, the list is : " << endl;
            display(head);
        }
        else if (choice == 5)
            display(head);
        else if (choice == 6)
            deleteAtHead(head);
        else if (choice == 7)
            deleteAtTail(head);
        else if (choice == 8)
        {
            int position;
            cout << "Enter the position to be deleted : ";
            cin >> position;
            cout << endl;
            deleteAtPosition(head, position);
        }
        else if (choice == 9)
        {
            int x1, y1;
            cout << "Enter the data values to be swapped : ";
            cin >> x1 >> y1;
            cout << "Before swapping the nodes : " << endl;
            display(head);
            swapNodes(head, x1, y1);
            cout << "After swapping the nodes : " << endl;
            display(head);
        }
        int ch;
        cout << "Do you want to continue?1 for yes and 0 for no : ";
        cin >> ch;
        if (ch == 1)
            continue;
        else
        {
            cout << "Thank you for using the program" << endl;
            break;
        }
    }
    return 0;
}