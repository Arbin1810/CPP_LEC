// updating data
#include <iostream>
using namespace std;

class person
{
protected:
    char name[50];
    int code;

    void getdata()
    {
        cout << "Enter Name :" << endl;
        cin >> name;
        cout << "Enter Code :" << endl;
        cin >> code;
    }
    void display()
    {
        cout << "Name:" << name << endl;
        cout << "Code:" << code << endl;
    }
};
class account : public virtual person
{
public:
    float payment;
    void getdata()
    {
        cout << "Payment amount :" << endl;
        cin >> payment;
    }
    void display()
    {
        cout << "Payment: " << payment << endl;
    }
};
class admin : public virtual person
{
public:
    int exp;
    void getdata()
    {
        cout << "Enter Experience:" << endl;
        cin >> exp;
    }
    void display()
    {
        cout << "Experience :" << exp << endl;
    }
};
class master : public admin, public account
{
public:
    void getdata()
    {
        person::getdata();
        account::getdata();
        admin::getdata();
    }
    void display()
    {
        cout << "Displaying Details:" << endl;
        person::display();
        account::display();
        admin::display();
    }
};
int main()
{
    master m;
    m.getdata();
    m.display();
    int yes;
    cout << "If you want to update data press 1";
    cin >> yes;
    if (yes == 1)
    {
        m.getdata();
        m.display();
    }
    else
    {
        m.display();
    }
    return 0;
}