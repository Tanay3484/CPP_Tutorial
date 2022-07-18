/*
Program to print a inverted pyramid pattern based on the number of rows entered by the user.
e.g. for rows = 5, the pattern will be:
*****
****
***
**
*
*/



#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}