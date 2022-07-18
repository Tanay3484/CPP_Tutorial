#include <iostream>
using namespace std;

int factorial(int n)
{
    if(n==0 || n==1)
        return 1;
    else
        return n*factorial(n-1);
}

int nCr(int n,int r)
{
    int result = 0.0;
    result = factorial(n)/(factorial((n-r))*factorial(r));
    return result;
}

void printPascalTriangle(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<n-i;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<=i;j++)
        {
            cout<<nCr(i,j)<<" "<<" ";
        }
        for(int j=1;j<n-i;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
    return ;
}

int main()
{
    int n;
    cout<<"Enter the number of rows of the pascal triangle to be printed : ";
    cin>>n;
    printPascalTriangle(n);
    return 0;
}