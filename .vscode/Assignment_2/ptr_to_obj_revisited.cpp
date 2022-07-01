// accessing members of objects
#include <iostream>
using namespace std;
class test
{
public:
    int data;
    test()
    {
        cout << "\n constructor test() is called" << endl;
        data = 55;
    }
    ~test()
    {
        cout << "\n destructor ~test() is called" << endl;
    }
    void show()
    {
        cout << "\n data is" << data << endl;
    }
};
int main()
{
    test *ptr;
    test tobj; // constructor is invoked here
    //  store the address of statically created object tobj
    ptr = &tobj;
    cout << "\n Accessing object through tobj.show()..";
    tobj.show();
    cout << "\nAccessing obj through ptr->show()..";
    ptr->show();
    return 0;
}