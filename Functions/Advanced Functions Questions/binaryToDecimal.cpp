#include <iostream>
#include <cmath>
using namespace std;

int binToDecimal(int a)
{
    int num = a;
    int sum = 0;
    int i = 0;
    while(num!=0)
    {
        int lastDigit = num%10;
        sum = sum+(lastDigit*int(pow(2,i)));
        num = num/10;
        i++;
    }
    return sum;
}

int main()
{
    int num;
    cout<<"Enter the binary number : ";
    cin>>num;
    cout<<"The decimal equivalent is : "<<binToDecimal(num)<<endl;
    return 0;
}