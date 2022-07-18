/*
Program to print a 01 triangle with alternating 0 and 1 based on the input from the user for the number of rows.
e.g.
for rows = 3
1 
0 1 
1 0 1 
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
            if((i+j)%2==0){
                cout<<1<<" ";
            }
            else
                cout<<0<<" ";
        }
        cout<<endl;
    }

    return 0;
}