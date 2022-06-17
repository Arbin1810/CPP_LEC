#include <iostream>
using namespace std;
class Rough
{
public:
    int a = 1;
};
void main()
{
    Rough r1;
    cout << "Primitive type increment" << r1.a++;
    cout << "User defined type increment" << r1++;
}