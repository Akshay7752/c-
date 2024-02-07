#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"before swap a1:-";
    cin>>a;
    cout<<"before swap a2:-";
    cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"after swap b1:-"<<a<<endl;
    cout<<"after swap b2:-"<<b;
    return 0;
}