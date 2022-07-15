// WAP to read name, roll and mark that catches multiple exception. class if roll is neg, mark greater than full mark
#include<iostream>
using namespace std;
class student
{
    protected:
    char name[20];
    int roll;
    float marks;

    public:
    int rollerr;
    float markserr;

    public:
    void setdata()
    {
        cout<<"Enter the name:";
        cin>>name;
        cout<<"Enter roll:";
        cin>>roll;
        cout<<"Enter marks:";
        cin>>marks;

    }
    void showdata()
    {
        cout<<"Enter name"<<name;
        cout<<"Enter roll"<<roll;
        if(roll<0);
        cout<<"Enter marks"<<marks;
        if(marks>100);
    }
};
int main()
{

}