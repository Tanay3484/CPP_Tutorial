#include <iostream>
using namespace std;

int isPrime(int a)
{
    int i;
    for(i=2;i<a;i++)
    {
        if(a%i==0){
            return 0;
        }
    }
    return 1;
}

void allPrime(int a,int b)
{
    for(int i=a;i<=b;i++){
        if(isPrime(i))
            cout<<i<<"\t";
    }
    return ;
}

int main()
{
    cout<<"Enter two numbers between whom you want to print all the prime numbers : "<<endl;
    int a,b;
    cin>>a>>b;
    allPrime(a,b);
    return 0;
}