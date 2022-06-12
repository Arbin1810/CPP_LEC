#include <iostream>
using namespace std;
class student
{
private:
    char name[60];
    int studID;

public:
    void getdata()
    {
        cout << "Enter name:";
        cin >> name;
        cout << "Enter student ID:";
        cin >> studID;
    }
    void showdata()
    {
        cout << "Name:" << name;
        cout << "Student:" << studID;
    }
};
class employee
{
private:
    char org_name[25];
    int empID;
    int union_name;

public:
    void getdata()
    {
        cout << "Enter name of associated organization:";
        cin >> org_name;
        cout << "Enter employeeID:";
        cin >> empID;
    }
    void showdata()
    {
        cout << "Name of associated student union:" << union_name;
        cout << "EmployeeID:" << empID;
    }
};
class marketing_officer : public student, public employee
{
private:
    int working_hour;

public:
    void getdata()
    {
        student::getdata();
        employee::getdata();
        cout << "enter working hours:";
        cin >> working_hour;
    }
    void showdata()
    {
        student::showdata();
        employee::showdata();
        cout << "Working hours:" << working_hour;
    }
};
int main()
{
    marketing_officer moff;
    cout << "Enter data of marketing officer" << endl;
    moff.getdata();
    cout << "Data of marketing officer:" << endl;
    moff.showdata();
    return 0;
}