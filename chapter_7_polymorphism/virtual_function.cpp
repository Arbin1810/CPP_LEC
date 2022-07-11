#include <iostream>
using namespace std;
class Animal
{
public:
    virtual void move() = 0; // pure virtual function
};
class Dog : public Animal
{
public:
    void move()
    {
        cout << "Dog runs";
    }
};
int main()
{
    Animal *an;  //pure virtual function ma ptr use na gari accept gardaina so * use gareko ho
    Dog dg;
    an=&dg;   //aaba main obj le derived pani accept garca because ptr le accept garaie sakyo
    return 0;
}