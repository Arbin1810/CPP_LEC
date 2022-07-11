// fibonacci series using operator overloading ++ for pre increment

#include <iostream>
using namespace std;
class fibonacci
{
private:
    int a, b, c;

public:
    fibonacci()
    {
        a = -1;
        b = 1;
        c = a + b;
    }
    void show()
    {
        cout << c << " ";
    }
    void operator++()
    {
        a = b;
        b = c;
        c = a + b;
    }
};
int main()
{
    int n, i;
    fibonacci fib;
    cout << "Enter value of n:";
    cin >> n;
    cout << "Fibonacci Series:" << endl;
    for (i = 0; i < n; i++)
    {
        fib.show();
        ++fib;
    }
}