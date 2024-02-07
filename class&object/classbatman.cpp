#include<iostream>
using namespace std;
class batsman
{
    private:
    int bcode;
    char bname[2];
    int innings,notout,runs;
    int batavg=0;
    int calcavg()
    {
        batavg=runs/(innings-notout);
        return batavg;
    }

    public:
    void readdata()
    {
        cout<<"Enter the batsman code: ";
        cin>>bcode;
        cout<<"Enter the batsman name: ";
        cin>>bname;
        cout<<"Enter the number of innings: ";
        cin>>innings;
        cout<<"Enter the number of not out: ";
        cin>>notout;
        cout<<"Enter the number of runs: ";
        cin>>runs;
        batavg=calcavg();
    }

    void showdata()
    {
        cout<<"\n\nshowdata"<<endl;
        cout<<"Batsman code: "<<bcode<<endl;
        cout<<"Batsman name: "<<bname<<endl;
        cout<<"Number of innings: "<<innings<<endl;
        cout<<"Number of not out: "<<notout<<endl;
        cout<<"Number of runs: "<<runs<<endl;
        cout<<"Average: "<<batavg<<endl;
    }

};
int main()
{
    batsman bm;
    bm.readdata();
    bm.showdata();
}