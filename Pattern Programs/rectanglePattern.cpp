#include <iostream>
using namespace std;

int main()
{
    int rows,cols;
    cout<<"Enter the number of rows in the rectangle : ";
    cin>>rows;
    cout<<"Enter the number of columns in the rectangle : ";
    cin>>cols;

    for(int i = 0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }

    return 0;
}