#include<iostream>
using namespace std;

int main()
{
    int a;
    a = 12;
    cout<<"Size of int "<<sizeof(a)<<endl;

    float b;
    cout<<"Size of float "<<sizeof(b)<<endl;

    char ch;
    cout<<"Size of char "<<sizeof(ch)<<endl;

    bool d;
    cout<<"Size of bool "<<sizeof(d)<<endl;

    short int si;
    cout<<"Size of short int "<<sizeof(si)<<endl;

    long int li;
    cout<<"Size of long int "<<sizeof(li)<<endl;

    signed int si1;
    cout<<"Size of signed int "<<sizeof(si1)<<endl;

    unsigned int ui;
    cout<<"Size of unsigned int "<<sizeof(ui)<<endl;

    return 0;
}