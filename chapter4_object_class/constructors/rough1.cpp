#include<iostream>
using namespace std;
class A 
{
    public:
    int a=10;
    void print ()
    {
        cout<<"display the value of a"<<a;

    }
};
class B:public A 
{
    public:
    int b=5;
    void print()
    {
        cout<<"display the value of b"<<b;
    }
};
int main()
{
    cout<<"the sum value is:"<<a+b<<endl;
    return 0;
}