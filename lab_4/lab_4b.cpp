// Student result
#include <iostream>
using namespace std;

class student
{
protected:
    char name[20];
    int roll;

public:
    void setdata()
    {
        cout << "Enter name:" << endl;
        cin >> name;
        cout << "Enter Roll no.:" << endl;
        cin >> roll;
    }
    void showdata()
    {
        cout << "Name:" << name << endl;
        cout << "Roll no.:" << roll << endl;
    }
};

class test : public student
{
protected:
    float maths;
    float english;

public:
    void setdata()
    {
        student::setdata();
        cout << "Enter marks in maths:" << endl;
        cin >> maths;
        cout << "Enter marks in English:" << endl;
        cin >> english;
    }
    void showdata()
    {
        student::showdata();
        cout << "Marks in Maths:" << maths << endl;
        cout << "Marks in English:" << english << endl;
    }
};

class sport
{
protected:
    int score;

public:
    void setdata()
    {
        cout << "Enter Score:" << endl;
        cin >> score;
    }
    void showdata()
    {
        cout << "Score is:" << score << endl;
    }
};

class result : public sport, public test
{
protected:
    float total;

public:
    void setdata()
    {
        test::setdata();
        sport::setdata();
    }
    void showdata()
    {
        test::showdata();
        sport::showdata();
        cout << "Total result is:" << maths + english + score << endl;
    }
};

int main()
{
    result r;
    r.setdata();
    r.showdata();
    return 0;
}