#include <iostream>
using namespace std;
class Animal
{
public:
    void display()
    {
        cout << "from base class Animal";
    }
};
class Cow : public Animal
{
public:
    void display()
    {
        cout << "from derived class Cow";
    }
};
class Dog : public Animal
{
public:
    void display()
    {
        cout << "from derived class Dog ";
    }
};
int main()
{
    Animal *panm; // pointer to base class
    Animal anm;
    Cow cw;
    Dog dg;

    panm = &anm;
    panm->display();

    panm = &cw;
    panm->display();

    panm = &dg;
    panm->display();
    return 0;
}