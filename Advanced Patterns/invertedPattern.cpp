/*
Program to print a inverted triangle with decreasing numbers based on the number of rows entered by the user.
e.g. for rows = 3, the pattern will be:
123
12
1
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;

    for(int i=1;i<=n;i++){
        int num = 1;
        for(int j=1;j<=n+1-i;j++){
            cout<<num;
            num++;
        }
        cout<<endl;
    }
    return 0;
}