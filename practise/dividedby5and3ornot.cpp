#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter the value:-";
    cin>>a;
    if(a%5==0 && a%3==0)
    {
        cout<<"a is divided by 5 and 3";
    }
    else
    {
        cout<<"a is not divided by 5 and 3";
    }
    return 0;
}