#include <iostream>
using namespace std;

void decimalToOctal(int num)
{
    int n = num;
    int octalNum[32];
    int i = 0;
    while(n>0)
    {
        octalNum[i] = n%8;
        n = n/8;
        i++;
    }

    for(int j = i-1;j>=0;j--)
    {
        cout<<octalNum[j];
    }

    return ;
}

int main()
{
    int input;
    cout<<"Enter the decimal number : ";
    cin>>input;
    cout<<"The octal equivalent is : ";
    decimalToOctal(input);
    cout<<endl;
    return 0;
}