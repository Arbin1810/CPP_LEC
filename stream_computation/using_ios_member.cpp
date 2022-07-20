#include <iostream>
using namespace std;
// width function defines width of next value to be displated in the output of console
void IOS_width()
{
    cout << "............";
    cout << "Implementing ios::width";

    char c = 'A';

    // adjusting width will be 5
    cout.width(5);
    cout << c << "\n";
    int temp = 10;
    cout.width(11);
    cout << temp;
    cout << "\n....................\n";
}
void IOS_precision()
{
    cout << "\n..........\n";
    cout << "Implementing ios:: precision\n\n";
    cout << "Implementing ios::width";
    // makes cout print floats with a fixed number of decimals
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(2);
    cout << 3.1422;
}
// The fill ()function fills the unused
// white spaces in a value (to be printed at the console ).width acharacter of choice.
void IOS_fill()
{
    cout << "\n...........\n";
    cout << "Implementing ios::fill\n\n";
    char ch = 'a';

    cout.fill('*');
    cout.width(10);
    cout << ch << "\n";
    int i = 1;
    cout.width(5);
    cout << i;
    cout << "\n..........\n";
}
int main()
{
    IOS_width();
    IOS_precision();
    IOS_fill();
    return 0;
}
