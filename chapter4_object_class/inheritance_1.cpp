#include <iostream>
using namespace std;
class Account
{
public:
    float salary = 50000;
}; //base class
class Programmer : public Account
{
public:
    float bonus = 200;
}; //derived class
int main()
{
    Programmer p1;
    cout << "Salary: " << p1.salary << endl;
    cout << "Bonus: " << p1.bonus << endl;
    return 0;
}