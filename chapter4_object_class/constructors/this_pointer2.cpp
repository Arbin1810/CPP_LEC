#include <iostream>
using namespace std;

class test
{
private:
    int x;

public:
    void setX(int x)
    {
        this->x = x;
    }
    void print()
    {
        cout << "value of x is:" << x << endl;
        cout << "address of the onject that is calling x is:" << this << endl;
    }
};
int main()
{
    test obj, obj2;
    obj.setX(20);
    obj.print();
    obj2.setX(100);
    obj2.print();
    return 0;
}