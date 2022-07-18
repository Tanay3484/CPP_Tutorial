//C++ program to print all prime numbers between two numbers a and b

#include <iostream>
using namespace std;

int isPrime(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}

int main()
{
    int a,b,i;
    cout<<"Enter the range: ";
    cin>>a>>b;
    for(i=a;i<=b;i++)
    {
        if(isPrime(i))
            cout<<i<<"\t";
    }
    return 0;
}