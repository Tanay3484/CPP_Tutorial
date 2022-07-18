#include <iostream>
using namespace std;

void fibonnaci(int n)
{
    if(n==1)
        cout<<0<<endl;
    else if(n==2)
        cout<<0<<"\t"<<1<<endl;
    else
    {
        int a = 0;
        int b = 1;
        int c = 0;
        cout<<a<<"\t"<<b<<"\t";
        for(int i=2;i<n;i++){
            c = a+b;
            cout<<c<<"\t";
            a = b;
            b = c;
        }
    }
    return ;
}

int main()
{
    int n;
    cout<<"Enter the number of fibonacci terms you want to print : ";
    cin>>n;

    fibonnaci(n);

    return 0;
}