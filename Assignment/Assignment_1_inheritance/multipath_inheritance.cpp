#include <iostream>
using namespace std;
class student
{
protected:
    int studID;
    char name[30];

public:
    void getstdata()
    {
        cout << "enter student ID:";
        cin >> studID;
        cout << "enter name:";
        cin >> name;
    }
    void showdata()
    {
        cout << "Student:" << studID;
        cout << "name:" << name;
    }
};
class internalexam : virtual public student
{
protected:
    int marks1, marks2;

public:
    void getdata()
    {
        cout << "enter internal marks in two subjects:";
        cin >> marks1 >> marks2;
    }
    void showdata()
    {
        cout << "Internal Marks in subject 1:" << marks1;
        cout << "Internal Marks in subject 2:" << marks2;
    }
    int totinternalmarks()
    {
        return (marks1 + marks2);
    }
};
class externalexam : virtual public student
{
protected:
    int marks1, marks2;

public:
    void getdata()
    {
        cout << "enter externalexam marks in two subjects:";
        cin >> marks1 >> marks2;
    }
    void showdata()
    {
        cout << "External marks in subject 1:" << marks1;
        cout << "External marks in subject 2:" << marks2;
    }
    int totexternalmarks()
    {
        return (marks1 + marks2);
    }
};
class result : public internalexam, public externalexam
{
public:
    void getdata()
    {
        internalexam::getdata();
        externalexam::getdata();
    }
    void showdata()
    {
        internalexam::showdata();
        externalexam::showdata();
    }
};
int TotalMarks()
{
    return (TotalMarks());
};
int main()
{
    result r;
    cout << "enter data for student" << endl;
    r.getdata();
    cout << "enter marks" << endl;
    r.getdata();
    cout << "data for student is:" << endl;
    r.showdata();
    cout << "Total Marks=" << r.totexternalmarks() + r.totinternalmarks();
    return 0;
}