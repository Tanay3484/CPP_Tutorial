#include <iostream>
using namespace std;

class Student{
    public:
    string name;
    int age;
    bool gender;

    void printInfo()
    {
        cout<<"--------------------"<<endl;
        cout<<"Name : ";
        cout<<name<<endl;
        cout<<"Age : ";
        cout<<age<<endl;
        cout<<"Gender : ";
        cout<<((gender==1)?"Male":"Female")<<endl;
        cout<<"--------------------"<<endl;
    }
};

int main()
{
    Student students[4];
    cout<<"--------------------"<<endl;
    for(int i = 0;i<2;i++){
        cout<<"Name : ";
        cin>>students[i].name;
        cout<<"Age : ";
        cin>>students[i].age;
        cout<<"Gender : ";
        cin>>students[i].gender;
        cout<<"--------------------"<<endl;
    }
    cout<<"*************************************"<<endl;
    for(int i = 0;i<2;i++){
        students[i].printInfo();
    }
}