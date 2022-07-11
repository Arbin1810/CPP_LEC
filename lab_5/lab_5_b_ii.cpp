// vector addition using operator overloading using friend function
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
    void showdata()
    {
        cout << x << "i+" << y << "j+" << z << "k" << endl;
    }
    friend vector operator+(vector a, vector b);
};
vector operator+(vector a, vector b)
{
    vector sum;
    sum.x = b.x + a.x;
    sum.y = b.y + a.y;
    sum.z = b.z + a.z;
    return sum;
}

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