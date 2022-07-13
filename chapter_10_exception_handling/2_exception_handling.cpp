#include <iostream>
using namespace std;

int main()
{
    float x = -1;
    cout << "before try \n";
    try
    {
        cout << "inside try";
        if (x < 0)
        {
            throw x;
            cout << "After throw";
        }
    }
    catch (int x)
    {
        cout << "exception caught. Int type";
    }
    catch (float x)
    {
        cout << "exception caught. Float type";
    }
    cout << "After catch\n";
    return 0;
}
