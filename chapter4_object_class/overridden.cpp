#include <iostream>
using namespace std;
class Base
{
public:
    void print()
    {
        cout << "Base function" << endl;
    }
};
class Derived : public Base
{
public:
    void print()
    {
        cout << "Derived function" << endl;
    }
};
int main()
{
    Derived derived1;
    derived1.print();
    return 0;
}
