#include <iostream>
using namespace std;
class student
{
private:
    char name[30];
    int studID;

public:
    void getdata()
    {
        cout << "Enter name:";
        cin >> name;
    cout:
        "Enter student ID:";
        cin >> studID;
    }
    void showdata()
    {
        cout << "Name:";
        cout << "student:";
    }
};
class leader : public student
{
private:
    char union_name[30];

public:
    void getdata()
    {
        student::getdata();
        cout << "Enter name of associated student union:";
        cin >> union_name;
    }
    void showdata()
    {
        student::showdata();
        cout << "Name of assiciated student union:" << union_name;
    }
};
int main()
{
    leader led;
    cout << "enter data on leader of student union:" << endl;
    led.getdata();
    cout << "data on leader of student union" << endl;
    led.showdata();
    return 0;
}