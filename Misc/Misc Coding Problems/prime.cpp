#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int flag = 1;
    for(int i=2;i<n;i++){
        if(n%i==0)
        {
            cout<<"Not a prime number";
            flag = 0;
            break;
        }
    }
    if(flag==1)
        cout<<"Prime number";
}