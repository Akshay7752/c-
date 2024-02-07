#include<iostream>
using namespace std;
class TEST
{
    private:
    int Testcode;
    char description[20];
    int nocandidate;
    int centerreqd;
    int CALCNTR()
    {
        centerreqd=nocandidate/100+1;
        return centerreqd;
    }

    public:
    void SCHEDULE()
    {
        cout<<"enter the test code:- ";
        cin>>Testcode;
        cout<<"enter the description:- ";
        cin>>description;
        cout<<"Enter number of candidates:- ";
        cin>>nocandidate;
        centerreqd=CALCNTR();
    }
    void DISPTEST()
    {
        cout<<"\n\nDISPTEST"<<endl;
        cout<<"Test Code : "<<Testcode<<endl;
        cout<<"Description : "<<description<<endl;
        cout<<"Number of Candidates : "<<nocandidate<<endl;
        cout<<"Center Required : "<<centerreqd<<endl;
    }
};
int main()
{
    TEST t1;
    t1.SCHEDULE();
    t1.DISPTEST();
}