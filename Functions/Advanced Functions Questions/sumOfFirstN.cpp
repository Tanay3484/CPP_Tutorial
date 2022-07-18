#include <iostream>
using namespace std;

int sumOfFirstN(int n)
{
    //using the summation formula
    return ((n*(n+1))/2);
}

int main()
{
    int n;
    cout<<"Enter the number of natural numbers whose sum you need to find : ";
    cin>>n;
    cout<<sumOfFirstN(n)<<endl;
    return 0;
}