// vector addition using operator overloadaing without using friend function
#include <iostream>
using namespace std;
class vector
{

private:
    int x, y, z;

public:
    vector()
    {

        x = 0;
        y = 0;
        z = 0;
    }
    void setdata()
    {
        cout << "Enter value of x:" << endl;
        cin >> x;
        cout << "Enter value of y:" << endl;
        cin >> y;
        cout << "Enter value of z:" << endl;
        cin >> z;
    }
    vector operator+(vector a)
    {
        vector sum;
        sum.x = x + a.x;
        sum.y = y + a.y;
        sum.z = z + a.z;
        return sum;
    }
    void showdata()
    {
        cout << x << "i+" << y << "j+" << z << "k" << endl;
    }
};
int main()
{
    vector a, b, c;
    a.setdata();
    b.setdata();
    c = a + b;
    cout << "Sum is:";
    c.showdata();
    return 0;
}
