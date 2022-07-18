#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int num = n;
    int sum = 0;
    while(num!=0){
        int digit = num%10;
        int cube = digit*digit*digit;
        sum+=cube;
        num = num/10;
    }

    if(sum==n)
        cout<<"Armstrong number";
    else
        cout<<"Not an Armstrong number";

    return 0;
}