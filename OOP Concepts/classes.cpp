#include <iostream>
using namespace std;

class Student{
    /*
    The public keyword here specifies that the following members are accessible from any function.
    */
    public:
    string name;
    int age;
    bool gender;
    
    /*
    This here is an example of a class method. Class methods are functions defined in a class which can be accessed by the class object created.
    */
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
    /* ^ Creating an array of type class. Here students is a class object which is in turn used to access different method and attributes of the class*/
    
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
