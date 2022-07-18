//C++ Program to check if an user input number is even or odd

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number to check if even or odd : ";
    cin>>num;
    if(num%2==0)
        cout<<num<<" is even";
    else
        cout<<num<<" is odd";
    return 0;
}