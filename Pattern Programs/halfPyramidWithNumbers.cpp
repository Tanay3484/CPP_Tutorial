/*
Program to pring the half pyramid pattern:
1 
2 2
3 3 3
4 4 4 4
based on the number of rows entered by the user.
*/


#include <iostream>
using namespace std;

int main()
{
    int n;

    cout<<"Enter the number of rows : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}