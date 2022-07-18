#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int num = n;
    int reverse = 0;
    while(num!=0){
        int lastDigit = num%10;
        reverse = reverse*10 + lastDigit;
        num = num/10;
    }
    cout<<reverse<<endl;
}