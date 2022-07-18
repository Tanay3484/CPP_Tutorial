#include <iostream>
#include <cmath>
using namespace std;

int hexToDecimal(string s)
{
    char ch = 'a';
    int num;
    int sum = 0;
    int power = 0;
    int i = s.length();
    while(power!=(s.length()))
    {
        ch = s[i-1];
        if(isalpha(ch))
        {
            ch = toupper(ch);
            switch (ch)
            {
            case 'A':
                num = 10;
                break;
            case 'B':
                num = 11;
                break;
            case 'C':
                num = 12;
                break;
            case 'D':
                num = 13;
                break;
            case 'E':
                num = 14;
                break;
            case 'F':
                num = 15;
                break;
            default:
                break;
            }
            sum = sum+(num*pow(16,power));
        }
        else
        {
            num = ch-'0';
            sum = sum+(num*pow(16,power));
        }
        i--;
        power++;
    }
    return sum;
}

int main()
{
    string num1;
    cout<<"Enter the hexadecimal number : ";
    cin>>num1;
    cout<<"The decimal equivalent is : "<<hexToDecimal(num1)<<endl;
    return 0;
}