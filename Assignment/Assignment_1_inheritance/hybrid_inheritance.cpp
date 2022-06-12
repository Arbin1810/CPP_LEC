#include <iostream>
using namespace std;
class person
{
private:
    char name[30];
    int age;

public:
    void getdata()
    {
        cout << "enter name:";
        cin >> name;
        cout << "enter age:";
        cin >> age;
    }
    void showdata()
    {
        cout << "Name:" << name << endl;
        cout << "age:" << age << endl;
    }
};
class exam
{
protected:
    int marks1, marks2;

public:
    void getdata()
    {
        cout << "enter marks in two subjects:";
        cin >> marks1 >> marks2;
    }
    void showdata()
    {
        cout << "Marks in subject 1:" << marks1;
        cout << "Marks in subject 2:" << marks2;
    }
};
class student : public person
{
private:
    int studID;
    char stream[10];

public:
    void getdata()
    {
        person::getdata();
        cout << "enter student ID:";
        cin >> studID;
        cout << "enter stream:";
        cin >> stream;
    }
    void showdata()
    {
        person::showdata();
        cout << "Student ID:" << studID;
        cout << "Stream" << stream;
    }
};
class result : public student, public exam
{
private:
    int total;

public:
    void getdata()
    {
        student::getdata();
        exam::getdata();
    }
    void showdata()
    {
        student::showdata();
        exam::showdata();
        total + marks1 + marks2;
        cout << "total marks =" << total;
        cout << "percentage=" << static_cast<float>(total) / 3;
    }
};
int main()
{
    result r;
    cout << "enter data for result processing" << endl;
    r.getdata();
    cout << "data on student" << endl;
    r.showdata();
    return 0;
}