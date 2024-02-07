#include<iostream>
using namespace std;
class student
{
    private:
    int admno;
    char sname[20];
    float eng,math,science;
    float total;
    float ctotal()
    {
        total=eng+math+science;
        return total;
    }

    public:
    void takedata()
    {
        cout<<"enter the adminno:-";
        cin>>admno;
        cout<<"enter the name:-";
        cin>>sname;
        cout<<"enter the eng marks:-";
        cin>>eng;
        cout<<"enter the math marks:--";
        cin>>math;
        cout<<"enter the science marks:-";
        cin>>science;
        total=ctotal();
    }

    void showdata()
    {
        cout<<"\n\nshowdata"<<endl;
        cout<<"adminno:-"<<admno<<endl;
        cout<<"name:-"<<sname<<endl;
        cout<<"eng marks:-"<<eng<<endl;
        cout<<"math marks:-"<<math<<endl;
        cout<<"science marks:-"<<science<<endl;
        cout<<"total marks:-"<<total<<endl;
    }
};
int main()
{
    student dd;
    dd.takedata();
    dd.showdata();
}
