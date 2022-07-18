#include <iostream>

using namespace std;

int main()
{
    int num;
    cout<<"Enter the value of n : ";
    cin>>num;

    int sum = 0;
    for(int i = 0;i<=num;i++)
    {
        sum+=i;
    }
    cout<<"The sum of all natural numbers uptill "<<num<<" is "<<sum;
    return 0;
}