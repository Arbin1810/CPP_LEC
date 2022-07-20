#include <iostream>
using namespace std;
int main()
{
    char name[100];
    // cin >> name;
    cin.get(name, 20);
    cout << name;
    return 0;
}