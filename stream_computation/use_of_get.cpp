#include <iostream>
using namespace std;
const int MAX = 50;
char str1[MAX];
char str2[MAX];
int main()
{
    cout << "Enter a string terminated by newline:";
    cin.get(str1, MAX);
    cout << "Enter multiline strng terminated by $";
    cin.get(str2, MAX, '$');
    cout << "String you entered are:";
    cout << "String 1:" << str1;
    cout << "String 2:" << str2;
    return 0;
}