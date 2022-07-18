/*
Program to print a hollow rectangle pattern based on the number of rows entered by the user.
e.g. for rows = 4 and columns = 5, the pattern will be:
*****
*   *
*   *
*****
*/



#include <iostream>
using namespace std;

int main()
{
    int rows,cols;
    cout<<"Enter the number of rows : ";
    cin>>rows;
    cout<<"Enter the number of columns : ";
    cin>>cols;
    for(int i = 1;i<=rows;i++)
    {
        for(int j = 1;j<=cols;j++)
        {
            if(i==1 || i==rows || j==1 || j==cols)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}