#include <iostream>
using namespace std;

class stackNode
{
public:
    stackNode* next;
    int data;

    stackNode(int val = 0)
    {
        data = val;
        next = NULL;
    }
};

void push(stackNode* &top,int x)
{
    stackNode* newNode = new stackNode(x);
    if(top==NULL)
    {
        top = newNode;
        return ;
    }
    else{
        newNode->next = top;
        top = newNode;
        return ;
    }
}

void pop(stackNode* &top){
    if(top==NULL)
    {
        cout<<"Stack Underflow"<<endl;
        return ;
    }
    else{
        cout<<"Popped : "<<top->data<<endl;
        stackNode* temp = top;
        top = top->next;
        delete temp;
        temp = NULL;
        return ;
    }
}

void display(stackNode* &top){
    if(top==NULL)
    {
        cout<<"Empty Stack"<<endl;
        return ;
    }
    else
    {
        stackNode* temp = top;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
        return ;
    }
}

void Top(stackNode* &top)
{
    if(top==NULL)
    {
        cout<<"Empty Stack"<<endl;
        return ;
    }
    else{
        cout<<"Top : "<<top->data<<endl;
        return ;
    }
}

int main()
{
    stackNode* top = NULL;
    push(top,4);
    push(top,5);
    push(top,6);
    display(top);
    pop(top);
    display(top);
    return 0;
}
