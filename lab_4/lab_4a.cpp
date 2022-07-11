// Database of employees
#include <iostream>
using namespace std;

class staff
{
protected:
    int code;
    char name[20];

public:
    void setdata()
    {
        cout << "Enter Code:";
        cin >> code;
        cout << "Enter Name:";
        cin >> name;
    }
    void showdata()
    {
        cout << "Code:" << code << endl;
        cout << "Name:" << name << endl;
    }
};

class teacher : public staff
{
protected:
    char subject[20];
    char publication[20];

public:
    void setdata()
    {
        staff::setdata();
        cout << "Enter Subject taught by teacher:";
        cin >> subject;
        cout << "Enter Publication of book:";
        cin >> publication;
    }
    void showdata()
    {
        staff::showdata();
        cout << "Subject taught by teacher:" << subject << endl;
        cout << "Publication of book:" << publication << endl;
    }
};

class officer : public staff
{
protected:
    int grade;

public:
    void setdata()
    {
        staff::setdata();
        cout << "Enter officer grade:";
        cin >> grade;
    }
    void showdata()
    {
        staff::showdata();
        cout << "Officer grade:" << grade << endl;
    }
};
class typist : public staff
{
protected:
    int speed;

public:
    void setdata()
    {
        staff::setdata();
        cout << "Enter typing speed";
        cin >> speed;
    }
    void showdata()
    {
        staff::showdata();
        cout << "Speed is:" << speed << endl;
    }
};
class regular : public typist
{
protected:
    int wages;

public:
    void setdata()
    {
        typist::setdata();
        cout << "Enter wages of regular typist:";
        cin >> wages;
    }
    void showdata()
    {
        typist::showdata();
        cout << "Wages of regular typist:" << wages << endl;
    }
};

class casual : public typist
{
protected:
    int wages;

public:
    void setdata()
    {
        typist::setdata();
        cout << "Enter wages of casual typist:";
        cin >> wages;
    }
    void showdata()
    {
        typist::showdata();
        cout << "Wages of casual typist:" << wages << endl;
    }
};
int main()
{
    teacher tea;
    officer of;
    typist ty;
    regular re;
    casual ca;
    tea.setdata();
    of.setdata();
    ty.setdata();
    re.setdata();
    tea.showdata();
    of.showdata();
    ty.showdata();
    re.showdata();
}
