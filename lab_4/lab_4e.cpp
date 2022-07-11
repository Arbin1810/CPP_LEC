// ticket booking
#include <iostream>
using namespace std;

class reservation
{
protected:
    int Rid;
    int Rdate;

public:
    void setdata()
    {
        cout << "Enter registration id:" << endl;
        cin >> Rid;
        cout << "Enter registration date:" << endl;
        cin >> Rdate;
    }
    void showdata()
    {
        cout << "Id:" << Rid << endl;
        cout << "Date:" << Rdate << endl;
    }
};

class person : public reservation
{
protected:
    char name[20];
    int age;

public:
    void setdata()
    {
        reservation ::setdata();
        cout << "Enter name:" << endl;
        cin >> name;
        cout << "Enter age:" << endl;
        cin >> age;
    }
    void showdata()
    {
        reservation ::showdata();
        cout << "Name:" << name << endl;
        cout << "Age:" << age << endl;
    }
};
int main()
{
    person p;
    p.setdata();
    cout << "Ticket is booked for:" << endl;
    p.showdata();
}