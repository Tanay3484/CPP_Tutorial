#include <iostream>
#include <string>
using namespace std;

void decimalToHexa(int num)
{
    int n = num;
    int remainder = 0;
    string result;
    while(n>0)
    {
        remainder = n%16;
        if(remainder>=10 && remainder<=15)
        {
            switch (remainder)
            {
            case 10:
                result.append("A");
                break;
            case 11:
                result.append("B");
                break;
            case 12:
                result.append("C");
                break;
            case 13:
                result.append("D");
                break;
            case 14:
                result.append("E");
                break;
            case 15:
                result.append("F");
                break;
            default:
                break;
            }
        }
        else
        {
            result.append(to_string(remainder));
        }
        n = n/16;
    }
    for(int i = result.length()-1;i>=0;i--)
    {
        cout<<result[i];
    }
    return ;
}

int main()
{
    int input;
    cout<<"Enter the decimal number : ";
    cin>>input;
    cout<<"The hexadecimal equivalent is : ";
    decimalToHexa(input);
    cout<<endl;
    return 0;
}