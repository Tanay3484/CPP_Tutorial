#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

void decToBin(int n)
{
    int binNumber[32];
    int i = 0;
    while (n>0)
    {
        binNumber[i] = n%2;
        n = n/2;
        i++;
    }

    for(int j=i-1;j>=0;j--)
        cout<<binNumber[j];
    
}

int main()
{
    int number;
    cout<<"Enter the decimal number : ";
    cin>>number;
    cout<<"The equivalent binary number is : "<<" ";
    decToBin(number);
    return 0;
}