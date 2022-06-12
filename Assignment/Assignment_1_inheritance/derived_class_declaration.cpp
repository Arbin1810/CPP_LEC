// public or  private inheritance
#include <iostream>
using namespace std;
class A
{
private:
    int pvtdataA;

protected:
    int protdataA;

public:
    int pubdataA;
};
class B : public A // publicly derived
{
public:
    void func()
    {
        int a;
        // a= pvtdataA ;  yesma error dekhauxa
        a = protdataA;
        a = pubdataA;
    }
};
class C : protected A // protectedly derived
{
public:
    void func()
    {
        int a;
        // a= pvtdataA ;  feri error dekhauxa yesma
        a = protdataA;
        a = pubdataA;
    }
};
class D : private A // private derived
{
public:
    void func()
    {
        int a;
        // a= pvtdataA ; yesma error dekhauxa
        a = protdataA;
        a = pubdataA;
    }
};
int main()
{
    int num;
    B objB;
    // num = objB.pvtdataA;        ( both not accessible )
    // num = objB.protdataA ;
    num = objB.pubdataA; // pubdataA is public to B

    C objC;
    // num = objC.pvtdataA ;  ALL NOT ACCESSIBLE
    // num = objC. protdataA;
    // num = objC.pubdataA;

    D objD;
    // num = objD.protdataA;    ALL NOT ACCESSIBLE
    // num = objD.pubdataA;
    // num = objD.pvtdataA;
    return 0;
}
