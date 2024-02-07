#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"before swap a1:-";
    cin>>a;
    cout<<"before swap a2:-";
    cin>>b;
    c=a;
    a=b;
    b=c;
    cout<<"after swap b1:-"<<a<<endl;
    cout<<"after swap b2:-"<<b;
    return 0;
}