#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;

    for(int i=1;i<=n;i++){
        int num = 1;
        for(int j=1;j<=n+1-i;j++){
            cout<<num;
            num++;
        }
        cout<<endl;
    }
    return 0;
}