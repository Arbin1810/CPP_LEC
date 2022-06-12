#include <iostream>
using namespace std;
class employee
{
private:
    char name[30];
    int empID;
    float salary;

public:
    void getdata()
    {
        cout << "enter name:";
        cin >> name;
        cout << "employee ID:";
        cin >> empID;
        cout << "enter salary:";
        cin >> salary;
    }
    void showdata()
    {
        cout << "Name:" << name << endl;
        cout << "Employee:" << empID;
        cout << "Salary:" << salary << endl;
    }
};
class manager : public employee
{
private:
    char hidegree[6];

public:
    void getdata()
    {
        employee::getdata();
        cout << "enter highest degree obtained:";
        cin >> hidegree;
    }
    void showdata()
    {
        employee::showdata();
        cout << "highest degree:" << hidegree;
    }
};
class secretary : public employee
{
private:
    float height;

public:
    void getdata()
    {
        employee::getdata();
        cout << "enter height:";
        cin >> height;
    }
    void showdata()
    {
        employee::showdata();
        cout << "height:";
    }
};
class teacher : public employee
{
private:
    int nperiods;

public:
    void getdata()
    {
        employee::getdata();
        cout << "enter number of periods allocated:";
        cin >> nperiods;
    }
    void showdata()
    {
        employee::showdata();
        cout << "number of periods allocated:";
    }
};
int main()
{
    manager m;
    secretary s;
    teacher t;
    cout << "enter data on manager:";
    m.getdata();
    cout << "enter data on secretary:";
    s.getdata();
    cout << "enter data on teacher:";
    t.getdata();
    cout << "Data on manager:";
    m.showdata();
    cout << "Data on secretary:";
    s.showdata();
    cout << "Data on teacher:";
    t.showdata();
    return 0;
}