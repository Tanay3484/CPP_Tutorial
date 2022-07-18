#include <iostream>
using namespace std;

float factorial(int n)
{
    if(n==0 || n==1)
        return 1.0;
    else
        return n*factorial(n-1);
}

float nCr(int n,int r)
{
    float result = 0.0;
    result = factorial(n)/(factorial((n-r))*factorial(r));
    return result;
}

int main()
{
    int n,r;
    cout<<"Enter the values of n and r : "<<endl;
    cin>>n>>r;
    if(n<r){
        while(n<r){
            cout<<"Please enter a value of n such that n>r"<<endl;
            cout<<"Enter the values of n and r : "<<endl;
            cin>>n>>r;
        }
    }
    cout<<nCr(n,r)<<endl;
    return 0;
}