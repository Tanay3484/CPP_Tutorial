/*
Program to print a palindromic pyramid based on the number of rows given for the user.
e.g. for rows = 4, the pattern will be:
   1
  212
 32123
4321234
*/



#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;

    for(int i=1;i<=n;i++){
        int j;
        for(j=1;j<=n-i;j++){
            cout<<" ";
        }
        int k=i;
        for(;j<=n;j++){
            cout<<k--;
        }
        k=2;
        for(;j<=n+i-1;j++){
            cout<<k++;
        }
        cout<<endl;
    }
    return 0;
}