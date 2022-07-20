#include <iostream>
using namespace std;
int main()
{
    char str1[20], str2[20];
    cout << "Enter first string:";
    cin.get(str1, 20);
    cout << "Enter next string:";
    cin.ignore();
    cin.get(str2, 20);
    cout << "You entered:";
    cout << "String1:" << str1;
    cout << "String2:" << str2;
    return 0;
}