#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "enter the value of a and b:";
    cin >> a >> b;
    int x = a / (a - b);
    cout << "value of x is:" << endl;
    return 0;
}