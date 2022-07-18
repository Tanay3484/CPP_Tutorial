#include <iostream>
using namespace std;

bool checkPythagoreanTriplet(int a,int b,int c)
{
    int m = max(a,max(b,c));
    int y,z;
    if(a==m)
    {
        y=b;
        z=c;
    }
    else if(b==m)
    {
        y=a;
        z=c;
    }
    else
    {
        y=a;
        z=b;
    }
    if((y*y)+(z*z)==(m*m))
        return true;
    else
        return false;
}

int main()
{
    int n1,n2,n3;
    cout<<"Enter three numbers to check if they are pythagorean triplets or not : "<<endl;
    cin>>n1>>n2>>n3;
    if(checkPythagoreanTriplet(n1,n2,n3))
        cout<<"The given numbers are pythagorean triplets."<<endl;
    else
        cout<<"The given numbers are not pythagorean triplets."<<endl;
    return 0;
}