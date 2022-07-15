#include <iostream>
using namespace std;
class Array
{
private:
    int arr[23];

public:
    class lowrange
    {
    };
    class highrange
    {
    };
    int &operator[](int i)
    {
        if (i < 0)
        {
            throw lowrange();
        }
        else if (i > 23)
        {
            throw highrange();
        }
        return arr[i];
    }
};
int main()
{
    Array a1;
    int index;
    try
    {
        cout << "Enter array index:";
        cin >> index;
        a1[index];
        cout << "index" << index << " is within the range";
    }
    catch (...)
    {
        cout << "Exception out of range";
    }
    return 0;
}