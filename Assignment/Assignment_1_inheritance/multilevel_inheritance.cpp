#include <iostream>
using namespace std;
class person
{
private:
    char name[50];
    char address[60];

public:
    void getdata()
    {
        cout << "Enter name:";
        cin >> name;
        cout << "address:";
        cin >> address;
    }
    void showdata()
    {
        cout << "Name:" << name;
        cout << "Address:" << address;
    }
};
class employee : public person
{
private:
    int empID;
    float salary;

public:
    void getdata()
    {
        person::getdata();
        cout << "Enter employee ID:";
        cin >> empID;
        cout << "Enter salary:";
        cin >> salary;
    }
    void showdata()
    {
        person::showdata();
        cout << "Employee ID" << empID;
        cout << "Salary:" << salary;
    }
};
class manager : public employee
{
private:
    char hidegree;

public:
    void getdata()
    {
        employee::getdata();
        cout << "enter highest degree:";
        cin >> hidegree;
    }
    void showdata()
    {
        employee::showdata();
        cout << "highest degree:" << hidegree;
    }
};
int main()
{
    manager mgr;
    cout << "enter data on manager:";
    mgr.getdata();

    cout << "Data on manager:";
    mgr.showdata();
    return 0;
}