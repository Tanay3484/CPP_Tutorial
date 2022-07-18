//Linear Search
#include <iostream>
using namespace std;

int main()
{
    int n,key;
    cout<<"Enter the number of elements in the array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements : ";
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the key to be searched : ";
    cin>>key;
    bool flag = false;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            cout<<"Key found at postition "<<i+1;
            flag = true;
            break;
        }
    }
    if(flag==false)
        cout<<"Key not found";

    return 0;

}