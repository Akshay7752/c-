#include<iostream>
using namespace std;
int main()
{
    int guj,hindi,eng,total;
    float per;

    cout<<"enter the guj marks:-";
    cin>>guj;
    cout<<"enter the hindi marks:-";
    cin>>hindi;
    cout<<"enter the eng marks:-";
    cin>>eng;
    
    total=guj+hindi+eng;
    cout<<"total of the student marks:- "<<total<<endl;
    per=total*100/300;
    cout<<"percentage of student result:- "<<per;
}