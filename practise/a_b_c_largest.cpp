#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the first value:-";
    cin>>a;
    cout<<"enter the second value:-";
    cin>>b;
    cout<<"enter the third value:-";
    cin>>c;
    if(a>b)
    {
        if(a>c)
        {
            cout<<a;
        }
        else
        {
            if(c>b)
            {
                cout<<c;
            }
        }
    }
    else
    {
        if(b>c)
        {
            cout<<b;
        }
        else
        {
            cout<<c;
        }
    }
    return 0;
}