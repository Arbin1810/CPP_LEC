#include <iostream>
using namespace std;
class A
{
public:
    void printa()
    {
        cout << "display a" << endl;
    }
};
class B : public virtual A
{
public:
    void printb()
    {
        cout << "display b" << endl;
    }
};
class C : public virtual A
{
public:
    void printc()
    {
        cout << "display c" << endl;
    }
};
class D : public B, public C
{
public:
    void printd()
    {
        cout << "display d" << endl;
    }
};
int main()
{
    D d1;
    d1.printa();
    d1.printb();
    d1.printc();
    d1.printd();
    return 0;
}
