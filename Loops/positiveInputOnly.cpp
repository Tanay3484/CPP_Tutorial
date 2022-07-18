//C++ program to take inputs from the user until a negative number is not entered
#include <iostream>
using namespace std;

int main()
{
    int num;
    cin>>num;
    while(num>0)
    {
        cout<<num<<endl;
        cin>>num;
    }
    cout<<"You have entered a negative number";
    return 0;
}