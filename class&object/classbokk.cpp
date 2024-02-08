#include <iostream>
using namespace std;
class book
{
    private:
    int book_no;
    char booktitle[20];
    float price,cost;
    void total_cost(int n)
    {
        cost = n * price;
    }

    public:
    void INPUT()
    {
        cout << "enter the book_no:- ";
        cin >> book_no;
        cout << "enter the book_title:- ";
        cin >> booktitle;
        cout << "enter the price:- ";
        cin >> price;
    }

    void PURCHASE()
    {
        int n;
        cout<<"enter the number of books:- ";
        cin>>n;
        total_cost(n);
        cout<<"total cost:- "<<cost;
    }
};
int main()
{
    book b;
    b.INPUT();
    b.PURCHASE();
    return 0;
}