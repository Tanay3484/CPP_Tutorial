#include <iostream>
using namespace std;

#define n 100 //Dummy value for n

class stack{
    private:
    int* arr;
    int top;

    public:
    stack(){
        arr = new int[n];
        top = -1;
    }

    void push(int x){
        if(top==n-1){
            cout<<"Stack Overflow"<<endl;
            return ;
        }
        top++;
        arr[top] = x;
    }

    void pop(){
        if(top==-1){
            cout<<"Stack Empty"<<endl;
            return ;
        }
        cout<<"Popped element : "<<arr[top]<<endl;
        top--;
    }

    int Top(){
        if(top==-1){
            cout<<"Stack empty"<<endl;
            return -1;
        }
        return arr[top];
    }

    bool empty(){
        return top==-1;
    }
};

int main()
{
    int size;
    cout<<"Enter the size of the stack : ";
    cin>>size;
    cout<<endl;
    #undef n
    #define n size
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<"Top element : "<<st.Top()<<endl;
    st.pop();
    cout<<"Top element : "<<st.Top()<<endl;
    st.pop();
    cout<<"Top element : "<<st.Top()<<endl;
    st.pop();
    cout<<"Top element : "<<st.Top()<<endl;
    st.pop();
    st.pop();
    cout<<(st.empty()?"Stack is empty":"Stack is not empty")<<endl;
    return 0;
}