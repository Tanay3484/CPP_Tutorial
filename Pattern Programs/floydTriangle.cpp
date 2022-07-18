/*
Program to print the floyd triangle pattern:
1 
2 3 
4 5 6 
7 8 9 10 ..... and so on based on the number of rows entered by the user.

*/


#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;

    int k = 1;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }

    return 0;
}