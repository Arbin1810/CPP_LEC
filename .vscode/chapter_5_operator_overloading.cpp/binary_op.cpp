#include <iostream>
using namespace std;
class Binary
{
private:
    int a, b;

public:
    Binary()
    {
        a = 0;
        b = 0;
    }
    Binary(int x, int y)
    {
        a = x;
        b = y;
    }
    Binary operator+(Binary bin)
    {
        Binary b1;
        cout << "the value of a in overloading is:" << a << endl;
        cout << "the value of b in overloading is:" << b << endl;
        cout << "the value of bin a overloading is:" << bin.a << endl;
        cout << "the value of bin b overloading is:" << bin.b << endl;
        // callin object is passed implicitly and second object is passed through argument
        b1.a = a + bin.b;
        b1.b = b + bin.b;
    }
    void display()
    {
        cout << "the value of a is:" << a << endl;
        cout << "the value of b is:" << b << endl;
    }
};
int main()
{
    Binary b1, b2, b3;
    b1 = Binary(20, 30);
    b2 = Binary(30, 40);
    b3 = b1 + b2;
    b1.display();
    b2.display();
    b3.display();
    return 0;
}