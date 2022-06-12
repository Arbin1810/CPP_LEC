#include <iostream>
using namespace std;
class Animal
{
public:
   void eat()
   {
       cout<<"Eating...";
   }
}; //base class
class dog : public Animal
{
public:
void bark()
{
    cout<<"Barking";
}
    
}; //derived class
 int main ()
{
    Programmer p1;
    cout << "Salary: " << p1.salary << endl;
    cout << "Bonus: " << p1.bonus << endl;
    return 0;
}