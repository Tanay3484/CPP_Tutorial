#include <iostream>
#include <cmath>
using namespace std;

int octalToDecimal(int n)
{
    int num = n;
    int sum = 0;
    int i = 0;
    while(num!=0)
    {
        int lastDigit = num%10;
        sum = sum+(lastDigit*int(pow(8,i)));
        num = num/10;
        i++;
    }
    return sum;
}

int main()
{
    int num;
    cout<<"Enter the octal number : ";
    cin>>num;
    cout<<"The decimal equivalent is : "<<octalToDecimal(num)<<endl;
    return 0;
}