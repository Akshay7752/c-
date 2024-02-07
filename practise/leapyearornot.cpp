#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"enter the value:-";
    cin>>year;
    if(year%4==0)
    {
        cout<<"it is leap year";
    }
    else
    {
        cout<<"it is not leap year";
    }
    return 0;
}