#include <iostream>
using namespace std;
int main()
{
    char str[10];
    cout << "Enter a string:";
    cin.read(str, 9);
    str[9] = '\0';
    cout << "You Entered:" << str << endl;
    return 0;
}