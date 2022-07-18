/*
Program to print a number pyramid pattern based on the number of rows entered by the user.
e.g. for rows = 4, the pattern will be:
   1   
  1 2
 1 2 3
1 2 3 4
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        for(int j=1;j<n-i;j++){
            cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}